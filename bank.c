#include<stdio.h>
void main()
{
int count,nop,nor,num,i,j,k;
printf("Enter num of process :: ");
scanf("%d",&nop);
printf("Enter num of resources :: ");
scanf("%d",&nor);
count=0;
int alloc[nop][nor],max[nop][nor],av[3],need[nop][nor],flag[nop],seq[10],count1;
printf("Enter the availabel resource :: ");
for(i=0;i<3;i++)
{
scanf("%d",&av[i]);
}
//for alloc
printf("Enter the allocation of resources :: ");
for(i=0;i<nop;i++)
{
for(j=0;j<nor;j++)
{
scanf("%d",&alloc[i][j]);
}
}
printf("Enter the max resource need for execution :: "); 
for(i=0;i<nop;i++)
{
for(j=0;j<nor;j++)
{
scanf("%d",&max[i][j]);
}
}
printf("Need matrix :: ");
for(i=0;i<nop;i++)
{
	flag[i]=0;
for(j=0;j<nor;j++)
{
need[i][j]=max[i][j]-alloc[i][j];
}
}
count1=0;
for(k=0;k<nop;k++)
{
for(i=0;i<nop;i++)
{
count=0;
for(j=0;j<nor;j++)
{

if(need[i][j]<=av[j] && flag[i]==0)
{
count++;
}
}
if(count==3)
{
seq[count1]=i;
count1++;
flag[i]=1;
for(j=0;j<nor;j++)
{
av[j]=av[j]+need[i][j];
}
break;
}
}

}
printf("Sequence :: ");
for(i=0;i<count1;i++)
{
printf("%d",seq[i]);

}
}
