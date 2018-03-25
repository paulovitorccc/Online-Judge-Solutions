n, t = map(int, raw_input().split())
result = t
while len(str(result)) < n:
	result = result * t

if len(str(result)) > n:
	print -1
else:
	print result