arr = [True for i in xrange(0,1000000+3)]
arr[0] = False
arr[1] = False
for j in xrange(2,1000000+3):
	if arr[j]:
		for k in xrange(j+j,1000000+3,j):
			arr[k] = False
arrSoma = [0 for i in xrange(0,1000000+3)]
soma = 0
tam = len(arr)
for l in xrange(0,tam):
	if arr[l]:
		num1 = l - 2
		num2 = l + 2
		if num1 >= 0 and arr[num1]:
			soma += 1
		elif num2 < tam and arr[num2]:
			soma += 1
	arrSoma[l] = soma
	
casos = int(raw_input())
for i in range(casos):
  inf, sup = map(int, raw_input().split())
  if inf > sup:
    temp = sup
    sup = inf
    inf = temp
    
  inf -= 1
  result = arrSoma[sup] - arrSoma[inf]
  print result