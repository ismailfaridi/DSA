import math

test_cases = int(input())

for _ in range(test_cases):
    a, b = map(int, input().split())
    
    g = math.gcd(a, b)
    a //= g
    b //= g
    
    # b odd, a even -> hits A -> stand at B
    if b % 2 == 1 and a % 2 == 0:
        print("B")
    else:
        print("A")