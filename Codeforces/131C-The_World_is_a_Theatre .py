def fat(num):
	result = 1
	for i in range(2,num+1):
		result *= i
	return result



n, m, t = map(int, raw_input().split())
boys = 4
girls = t - 4
result = 0
while girls >= 1:
	aux = fat(n)/(fat(boys)*fat(n-boys))
	aux *= fat(m)/(fat(girls)*fat(m-girls))
	result += aux
	boys += 1
	girls -= 1
	
print result