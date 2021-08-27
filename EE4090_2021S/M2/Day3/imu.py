try:
    from sense_hat import SenseHat
except ImportError:
    from sense_emu import SenseHat

import math

sense = SenseHat()
sense.show_letter("J")

while True:
    acc = sense.get_accelerometer_raw()

    x_axis = round(acc['x'], 0)
    y_axis = round(acc['y'], 0)
    axis_angle = math.degrees(math.atan2(y_axis, x_axis)) + 270
    axis_angle = axis_angle + 45 if axis_angle % 90 != 0 else axis_angle
    axis_angle = axis_angle - 360 if axis_angle >= 360 else axis_angle

    sense.set_rotation(axis_angle)
    print(axis_angle)
