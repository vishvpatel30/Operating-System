a=[]
bo=[]
n=int(input("total cylinders"))
for i in range(n):
    a.append(int(input("numbers")))
    bo.append(1)
a.sort()
print(a)
header=int(input("header"))

#print(abs(header-12))
sum=0
comp=0
while(comp!=len(a)):
    max=9999
    length=9999
    for i in range(len(a)):
        if(bo[i]==1):
            new=abs(header-a[i])
            new_length=len(a)-i
            if(new<=max and new_length<=length):
                max=new
                id=i
                length=new_length
    sum += max
    bo[id]=0
    header=a[id]
    print(header,"->",end=" ")
    comp+=1

print(" ")
print(sum)
