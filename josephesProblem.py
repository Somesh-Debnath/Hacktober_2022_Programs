def JP(n, k):
    if n == 1:
        return n
    else:
        return (JP(n-1, k)+k+1)%n

print(JP(11, 2))
