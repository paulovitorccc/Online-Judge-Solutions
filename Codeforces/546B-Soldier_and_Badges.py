num = int(raw_input())
array1 = [int(e) for e in raw_input().split()]
array1Map = {}
cont = 0
for i in array1:
	aux = i
	while array1Map.has_key(aux):
		cont += 1
		aux = aux + 1
			
	if array1Map.has_key(aux) == False:
		array1Map[aux] = 1
		

print cont