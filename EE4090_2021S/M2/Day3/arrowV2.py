import sys
import time
import random
import math

try:
    from sense_hat import SenseHat
except ImportError:
    from sense_emu import SenseHat

angle_list = [0, 90, 180, 270]
e = (0, 0, 0)
g = (0, 255, 0)
y = (255, 255, 0)
r = (255, 0, 0)
w = (255, 255, 255)


def arrow_set_color(arr, color):
    for i in range(8):
        arr[3 + i * 8] = arr[4 + i * 8] = color
    arr[10] = arr[13] = arr[17] = arr[22] = arr[24] = arr[31] = color


def game_start(rotation, arrow):
    msg = "Arrow Game"
    sense = SenseHat()
    sense.set_rotation(rotation)

    for i in range(5):
        sense.set_pixels(arrow)
        rtt_angle = rotation + i * 90
        sense.set_rotation(rtt_angle - 360 if rtt_angle >= 360 else rtt_angle)
        time.sleep(0.25)
    sense.show_message(msg, text_colour=w, back_colour=e, scroll_speed=0.05)


def rand_angle(cur_angle):
    lst_angle = cur_angle
    while cur_angle == lst_angle:
        cur_angle = random.choice(angle_list)
    return cur_angle


def IMU_angle():
    acc = SenseHat().get_accelerometer_raw()
    x_axis = round(acc['x'], 0)
    y_axis = round(acc['y'], 0)
    axis_angle = round(math.degrees(math.atan2(y_axis, x_axis))) + 270
    axis_angle = axis_angle + 45 if axis_angle % 90 != 0 else axis_angle
    axis_angle = axis_angle - 360 if axis_angle >= 360 else axis_angle
    return axis_angle


def res_display(score):
    sense = SenseHat()
    panel = [e] * 64

    if (score):
        panel[3] = panel[4] = panel[9] = panel[10] = panel[13] = panel[14] = panel[17] = panel[22] = panel[24] = panel[31] = r
        panel[32] = panel[39] = panel[41] = panel[46] = panel[49] = panel[50] = panel[53] = panel[54] = panel[59] = panel[60] = r
    else:
        panel[0] = panel[7] = panel[9] = panel[14] = panel[18] = panel[21] = panel[27] = panel[28] = r
        panel[35] = panel[36] = panel[42] = panel[45] = panel[49] = panel[54] = panel[56] = panel[63] = r

    sense.set_pixels(panel)
    time.sleep(1)
    sense.clear()
    sense.set_rotation(0)


def arrow_game(rtt, angle, arrow):
    sense = SenseHat()
    rtt_angle = rtt + angle
    rtt_angle = rtt_angle - 360 if rtt_angle >= 360 else rtt_angle

    sense.set_rotation(rtt_angle)
    sense.set_pixels(arrow)

    axis_angle = IMU_angle()
    time.sleep(3)
    axis_angle = IMU_angle()

    print(angle)
    print(axis_angle)

    if(angle == axis_angle):
        res_display(1)
        return 1
    res_display(0)
    return 0


def main(argv):
    arr_g = arr_y = [e] * 64
    cur_angle = -1
    ini_rotation = 180
    score = 0
    msg1 = "You got "
    msg2 = " scores"

    random.shuffle(angle_list)

    arrow_set_color(arr_g, g)
    arrow_set_color(arr_y, y)

    game_start(ini_rotation, arr_y)

    while True:
        cur_angle = rand_angle(cur_angle)
        res = arrow_game(ini_rotation, cur_angle, arr_g)
        score += res

        if(res == 0):
            break

    sense = SenseHat()
    sense.set_rotation(ini_rotation)
    sense.show_message(msg1 + str(score) + msg2, text_colour=w, back_colour=e, scroll_speed=0.05)


if __name__ == "__main__":
    main(sys.argv[1:])
