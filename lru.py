n=int(raw_input("enter no. of ref"))
a=[]
for i in range(n):
	b=int(raw_input("enter value of page"))
	a.append(b)
print(a)
p=int(raw_input("enter no. of frames"))
new=[]
new1=[]
pg=0
for i in range(p):
	new.append(a[i])
	new1.append(a[i])
	pg+=1

for i in range(p,n):
	if a[i] in new:
		new.remove(a[i])
		new.append(a[i])
		
	else:
		new=new[1:]
		new.append(a[i])
		new1=new1[1:]
		new1.append(a[i])
		pg+=1
	
print("new1",new1)
print("new",new)
print("no. of pages" , pg)
