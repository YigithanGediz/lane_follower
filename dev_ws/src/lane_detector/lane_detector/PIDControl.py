import random
import _thread
import time

import numpy as np


class PIDControl:
    def __init__(self, send_steering_callback, default_y=110):
        self.y = 0.0
        self.send_steering_callback = send_steering_callback
        self.default_y = default_y

        self.prev_cte = self._getError()
        self.int_cte = 0
        self.tau_p, self.tau_d, self.tau_i = 0.2, 3.0, 0.002


    def _getError(self):
        return 1/(self.default_y - self.y)

    def _move(self, steering):
        self.send_steering_callback(steering)

    def updateError(self, y):
        self.y = y

    def _updatePID(self):
        while True:
            cte = self._getError()
            diff_cte = cte - self.prev_cte
            self.prev_cte = cte
            self.int_cte += cte
            steer = -self.tau_p * cte - self.tau_d * diff_cte - self.tau_i * self.int_cte
            self._move(steer*np.pi)

    def startThread(self):
        try:
            _thread.start_new_thread(self._updatePID, ())
        except:
            pass