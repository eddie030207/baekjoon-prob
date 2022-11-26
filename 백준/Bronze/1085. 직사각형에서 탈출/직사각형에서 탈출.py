a, b, c, d = map(int, input().split())
result_list = [c - a, a, d - b, b]
print(min(result_list))