import math

arr = [True for i in xrange(1000000+2)]
arr[0] = False
arr[1] = False
	
#crivo
for j in xrange(2,1000000+2):
	if arr[j]:
		for k in xrange(j+j,1000000+2,j):
			arr[k] = False


casos = int(raw_input())
num = map(int, raw_input().split())
for i in num:
	raiz = math.sqrt(i)
	raizInt = int(raiz)
	if raiz == raizInt:
		if arr[raizInt]:
			print "YES"
		else:
			print "NO"
	else:
		print "NO"