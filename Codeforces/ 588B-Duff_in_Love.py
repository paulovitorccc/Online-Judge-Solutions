import math
def divisores(num):
	result = []
	aux = 2
	raiz = int(math.sqrt(num))
	while num > 1:
		while num != 1 and num%aux!=0 and aux <= raiz:
			aux += 1
		if aux > raiz: 
			result.append(num)
			return result
		if num != 1:
			result.append(aux)
			num = num / aux
	
	return result
	

caso = int(raw_input())
div = divisores(caso)
conjDiv = {i for i in div}
result = 1
for j in conjDiv:
	result = result * j
if result == 0:
	result = caso
print result