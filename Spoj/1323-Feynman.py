while(True):
	soma = 0
	num = int(raw_input())
	if num == 0:
		break
	for i in range(1,num+1):
		soma += i**2
	
	print soma
