def fizzbuzz(n):
    sf = "Fizz"
    sb = "Buzz"

    if not n: return

    fizzbuzz(n-1)
    print(str(n) if n % 3 else sf if n % 5 else sb if n % 15 else sf+sb)

if __name__ == '__main__':
    fizzbuzz(500)

