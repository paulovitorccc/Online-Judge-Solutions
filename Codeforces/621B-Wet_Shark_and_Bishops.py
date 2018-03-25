def comb(num):
	r = num - 2
	result = 1
	for i in range(num,r,-1):
		result = result * i
	return result/2


casos = int(raw_input())
dic1 = {}
dic2 = {}
for i in range(casos):
	x, y = map(int, raw_input().split())
	soma = x+y
	sub = x-y
	if soma not in dic1:
		dic1[soma] = 1
	else:
		dic1[soma] += 1
		
	if sub not in dic2:
		dic2[sub] = 1
	else:
		dic2[sub] += 1
		
result = 0
for j in dic1:
  el = dic1[j]
  if el > 1:
    result = result + comb(el)

for k in dic2:
  el2 = dic2[k]
  if el2 > 1: 
    result = result + comb(el2)

print result