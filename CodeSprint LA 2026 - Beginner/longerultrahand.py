import sys
input = sys.stdin.readline

N, x, y = map(int, input().split())  # no of segments in the robotic arm, coordinates of target point
a = [int(input()) for _ in range(N)] # lengths of each segment of the robotic arm

total = sum(a)
mx = max(a)

r_min = max(0, (2 * mx) - total)
r_max = total

dist_sq = x * x + y * y

if r_min * r_min <= dist_sq <= r_max * r_max:
    print("YES")
else:
    print("NO")