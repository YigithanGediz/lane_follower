import random
import numpy as np


class PIDControl:
    def __init__(self, send_steering_callback, default_y=180):
        self.y = 0.0
        self.send_steering_callback = send_steering_callback
        self.default_y = default_y

        self.prev_cte = self.getError()
        self.int_cte = 0
        self.tau_p, self.tau_d, self.tau_i = 0.2, 3.0, 0.004

    def _getError(self):
        return 1 / (self.y - self.default_y)

    def _move(self, steering):
        self.send_steering_callback(steering)

    def updatePID(self, y):
        self.y = y
        cte = self._getError()
        diff_cte = cte - self.prev_cte
        self.prev_cte = cte
        self.int_cte += cte
        steer = -self.tau_p * cte - self.tau_d * diff_cte - self.tau_i * self.int_cte
        self._move(steer)
