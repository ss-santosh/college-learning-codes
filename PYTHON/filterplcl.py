def prime(n):
    if n < 2:
        return False
    for i in range(2, n // 2 + 1):
        if n % i == 0:
            return False
    return True

def separate(numbers):
    prime_numbers = []
    composite_numbers = []
    for num in numbers:
        if num > 1:
            if prime(num):
                prime_numbers.append(num)
            else:
                composite_numbers.append(num)
    return prime_numbers, composite_numbers

A = [1, 2, 35, 47, 9, 8, 12, 19, 52, 51]
prime_numbers, composite_numbers = separate(A)
print("Prime numbers:", prime_numbers)
print("Composite numbers:", composite_numbers)
