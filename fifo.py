n=int(raw_input("enter no. of ref"))
a=[]
for i in range(n):
	b=int(raw_input("enter value of page"))
	a.append(b)
print(a)
p=int(raw_input("enter no. of frames"))
new=[]
pg=0
for i in range(n):
	if b[i] not in new:
		new.append(a[i])
		pg+=1
	if(pg==p):
		break

for i in range(n):
	if a[i] not in new:
		new=new[1:]
		new.append(a[i])
		pg+=1
print(new)
print("no. of pages" , pg)
