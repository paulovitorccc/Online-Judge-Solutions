assassinos = []
assassinados = []
dic = {}
while True:
	try:
		assassino, assassinado = map (str, raw_input().split())
		if assassino not in dic:
			dic[assassino] = 1
		else:
			dic[assassino] += 1
		assassinos.append(assassino)
		assassinados.append(assassinado)
	except EOFError: break
assassinos = set(assassinos)
assassinos = list(assassinos)
assassinos.sort()
for j in assassinados:
	if j in dic:
		dic[j] = 0
print "HALL OF MURDERERS"
for i in assassinos:
	if i in dic and dic[i] > 0:
		print i + " " + str(dic[i]) 

