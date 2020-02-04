a=[]
bo=[]
n=int(input("total cylinders :"))
for i in range(n):
    a.append(int(input("numbers :")))
    bo.append(1)
a.sort()
print(a)
header=int(input("header"))

maximum=int(input("maximum number :"))
if maximum not in a:
    a.append(maximum)
    bo.append(1)
minimum=int(input("minimum number :"))
if minimum not in a:
    a.insert(0,minimum)
    bo.append(1)

print(a)
print(len(a))
#print(abs(header-12))
sum=0
comp=0
print(header,"->",end=" ")
while(comp!=len(a)):
    for i in range(len(a)):
        if(bo[i]==1 and a[i]>header):
            new=abs(header-a[i])
            header=a[i]
            print(header,"->",end=" ")
            sum += new
            comp+=1
            bo[i]=0
    for i in range(len(a)):
        if(bo[i]==1 and a[i]<header):
            new = abs(header - a[i])
            header = a[i]
            print(header,"->",end=" ")
            sum += new
            comp+=1
            bo[i]=0
    if(comp==len(a)):
            break
print(" ")
print(sum)
