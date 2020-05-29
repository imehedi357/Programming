def is_even(p):
	i = 0
	count = 0
	while(i < len(p)):
		k = i + 1
		while(k < len(p)):
			if(p[i] > p[k]):
				count+=1
			k+=1
		i+=1
	if(count == 0):
		return True
	if(count % 2 == 0):
		return True
	else:
		return False
