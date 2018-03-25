casos = int(raw_input())
for i in range(casos):
		
	matriz = [[],[],[],[],[],[],[],[],[]]
	
	for j in range(0,9,2):
		arrayAux = [int(k) for k in raw_input().split()]
		matriz[j] = arrayAux
		
	for k in range(8,0,-2):
		arrayAtual = matriz[k]
		arrayComp = matriz[k-2]
		arrayFinal = []
		cont = 0
		contComp = 0
		for t in range(0,k+1):
			if t % 2 == 0:
				arrayFinal.append(arrayAtual[cont])
				cont += 1
			else:
				result = arrayComp[contComp] - (arrayAtual[cont] + arrayAtual[cont-1]) 
				contComp += 1;
				arrayFinal.append(result / 2)
		
			
		matriz[k] = arrayFinal
		
	
	for g in range(1,8,2):
		arrayFinal = []
		arrayComp = matriz[g+1]
		for h in range(0,g+1):
			arrayFinal.append(arrayComp[h] + arrayComp[h+1])
			
		matriz[g] = arrayFinal
			
	for f in matriz:
		result = ' '.join(str(e) for e in f)
		print result
		
		
