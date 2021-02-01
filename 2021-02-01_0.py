import re


def process_string(s, f):
    loop_match = re.search(r'\[(?P<start>\d+)\.\.(?P<end>\d+)\]', s)

    if loop_match is None:
        f(s)
        return

    loop_start = int(loop_match.group('start'))
    loop_stop = int(loop_match.group('end'))

    span = loop_match.span()

    for i in range(loop_start, loop_stop):
        process_string(s[:span[0]] + str(i) + s[span[1]:], f)


def main():
    process_string('a[0..10]/b[0..3]', print)


if __name__ == '__main__':
    main()
