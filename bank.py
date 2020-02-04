p = int(input("total process"))
print("Available:")
a_r1, a_r2, a_r3, a_r4,bo = [], [], [], [], []
for i in range(p):
	a_r1.append(int(input("pid "+str(i)+" r1->")))
	a_r2.append(int(input("pid "+str(i)+" r2->")))
	a_r3.append(int(input("pid "+str(i)+" r3->")))
	a_r4.append(int(input("pid "+str(i)+" r4->")))
	bo.append(1)
	print("\n")

print(a_r1, a_r2, a_r3, a_r4)

print("Needed:")
n_r1, n_r2, n_r3, n_r4 = [], [], [], []
for i in range(p):
	n_r1.append(int(input("pid "+str(i)+" r1->")))
	n_r2.append(int(input("pid "+str(i)+" r2->")))
	n_r3.append(int(input("pid "+str(i)+" r3->")))
	n_r4.append(int(input("pid "+str(i)+" r4->")))
	print("\n")

print(n_r1, n_r2, n_r3, n_r4)

t_r1, t_r2, t_r3, t_r4 = map(int,input("total").split())

print("total")

alloc_r1, alloc_r2, alloc_r3, alloc_r4 = 0, 0, 0, 0
for i in range(p):
	alloc_r1 += a_r1[i]
	alloc_r2 += a_r2[i]
	alloc_r3 += a_r3[i]
	alloc_r4 += a_r4[i]
print("allocated")
print(alloc_r1, alloc_r2, alloc_r3, alloc_r4)


ava_r1 = t_r1-alloc_r1
ava_r2 = t_r2-alloc_r2
ava_r3 = t_r3-alloc_r3
ava_r4 = t_r4-alloc_r4


print("available")
print(ava_r1, ava_r2, ava_r3, ava_r4)
comp = 0
while(comp!=p ):
	if(ava_r1<=t_r1 or ava_r2<=t_r2 or ava_r3<=t_r3 or ava_r4<=t_r4):
		for i in range(p):
			if( ava_r1 >=n_r1[i] and ava_r2 >=n_r2[i] and ava_r3 >=n_r3[i] and ava_r4 >= n_r4[i] and bo[i]==1 ):
				print("p",i,"->")
				ava_r1 += a_r1[i]
				ava_r2 += a_r2[i]
				ava_r3 += a_r3[i]
				ava_r4 += a_r4[i]
				bo[i] = 0
				comp+=1
				print(comp)
				break
			elif(i==p):
				print("Deadlock")
				exit()

print(ava_r1, ava_r2, ava_r3, ava_r4)
