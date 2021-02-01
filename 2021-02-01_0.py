import re


def process_string(s, f):
    m = re.search(r'\[(?P<start>\d+)\.\.(?P<end>\d+)\]', s)

    if m is None:
        f(s)
        return

    for i in range(int(m.group('start'), int(m.group('stop')):
        process_string(
            '{head}[{i}]{tail}',
            head=s[:m.span()[0]], i=i, tail=s[m.span()[1]:],
        )


def main():
    process_string('a[0..10]/b[0..3]', print)


if __name__ == '__main__':
    main()
