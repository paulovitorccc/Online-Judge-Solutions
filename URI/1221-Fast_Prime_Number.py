import math

arr = [True for i in xrange(1000000)]
arr[0] = False
arr[1] = False
	
#crivo
for j in xrange(2,1000000):
	if arr[j]:
		for k in xrange(j+j,1000000,j):
			arr[k] = False
	
casos = int(raw_input())
for i in range(casos):
	num = int(raw_input())
	if num < 1000000:
		if arr[num]:
			print "Prime"
		else:
			print "Not Prime"
		
	else:
		
		raiz = int(math.sqrt(num))
		aux = True
		for l in range(1,raiz+1):
				if arr[l]:
					if num % (l) == 0:
						aux = False
						break
					
		if aux:
		  print "Prime" 
		else:
		  print "Not Prime"
		  
