import sys
import time
import random

try:
    from sense_hat import SenseHat
except ImportError:
    from sense_emu import SenseHat

sense = SenseHat()
e = (0, 0, 0)
r = (255, 0, 0)
w = (255, 255, 255)


def main(argv):
    length = 1
    direction = [0, 0]
    snake = [[random.randint(2, 5), random.randint(2, 5)]]
    app_pos = [random.randint(0, 7), random.randint(0, 7)]

    while True:
        panel = [e] * 64

        for event in sense.stick.get_events():
            if event.action == "pressed":
                if event.direction == "up":
                    direction = [0, -1]
                elif event.direction == "down":
                    direction = [0, 1]
                elif event.direction == "left":
                    direction = [-1, 0]
                elif event.direction == "right":
                    direction = [1, 0]

        snake.insert(0, [snake[0][0] + direction[0], snake[0][1] + direction[1]])

        if snake[0][0] < 0:
            snake[0][0] = 7
        if snake[0][1] < 0:
            snake[0][1] = 7
        if snake[0][0] > 7:
            snake[0][0] = 0
        if snake[0][1] > 7:
            snake[0][1] = 0

        if snake[0] == app_pos:
            while True:
                app_pos = [random.randint(0, 7), random.randint(0, 7)]
                if (panel[app_pos[1] * 8 + app_pos[0]] != w):
                    break
            length += 1
        elif snake[0] in snake[1:]:
            length = 1
        else:
            while len(snake) > length:
                snake.pop()

        for pos in snake:
            panel[pos[1] * 8 + pos[0]] = w

        panel[app_pos[1] * 8 + app_pos[0]] = r
        sense.set_pixels(panel)
        time.sleep(0.5)


if __name__ == "__main__":
    main(sys.argv[1:])
