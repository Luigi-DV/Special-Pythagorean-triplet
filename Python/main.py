import numpy as np


def main():
    sum = 1000

    for x in np.arange(1, sum / 3, 1):
        for y in np.arange(1, sum / 2, 1):
            z = sum - x - y
            if x * x + y * y == z * z:
                print(f'x={x}, y={y}, z={z}')


if __name__ == '__main__':
    main()
