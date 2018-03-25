num = int(raw_input())
numStr = str(num)
result = ""

for i in range(0,len(numStr)):
	numAtual = int(numStr[i])
	numTroca = 9 - numAtual
	if numTroca < numAtual:
		if numTroca == 0 and len(result) == 0:
			result += str(numAtual)
		else:		
			result += str(numTroca)
	else:
		result += str(numAtual)
print result