import cv2
import os


def main():
    # initialize working directory
    workdir = os.path.dirname(__file__)

    # read an image file
    img = cv2.imread(os.path.join(workdir, "input.png"))

    print('Original Width: ', img.shape[0])
    print('Original Height: ', img.shape[1])

    # define target resolution
    (w, h) = (320, 240)

    # tekitou resizing
    img = cv2.resize(img, (w, h))

    # write output image
    cv2.imwrite(os.path.join(workdir, "output.png"), img)


if __name__ == '__main__':
    main()
