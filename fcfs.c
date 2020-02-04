#include<stdio.h>
void calc(int no,int p[],int at[],int bt[]);
void main()
{
int p[20];
int no,i,k,temp,j,temp1,temp2;
int at[20];
int bt[20];
printf("Enter num of processes :: ");
scanf("%d",&no);
printf("Enter the process :: \n");
for(i=0;i<no;i++)
{
scanf("%d",&p[i]);
}
printf("Enter the arrival time :: \n");
for(i=0;i<no;i++)
{
scanf("%d",&at[i]);
}
printf("Enter the burst time :: \n");
for(i=0;i<no;i++)
{
scanf("%d",&bt[i]);
}
//Sorting
for(i=0;i<no;i++)
{
for(k=i+1;k<no;k++)
{
if(at[i]>at[k])
{
temp=at[i];
at[i]=at[k];
at[k]=temp;
//for burst time
temp1=bt[i];
bt[i]=bt[k];
bt[k]=temp1;
//for process
temp2=p[i];
p[i]=p[k];
p[k]=temp2;
}
}
}
/*for(i=1;i<=no;i++)
{
printf("%d",p[i]);
}*/
calc(no,p,at,bt);
}
void calc(int no,int p[],int at[],int bt[])
{
int k,j,wtcount,tcount,through;
float tavg,wtavg;
int count=0;
k=no;
int ct[20];
int tat[20];
int wt[20];
ct[0]=at[0]+bt[0];
for(j=0;j<no;j++)
{
ct[j+1]=ct[j]+bt[j+1];
}
printf("Sorted process id :: \n");
for(j=0;j<no;j++)
{
printf("%d\n",p[j]);
}
printf("The completion time :: \n");
for(j=0;j<no;j++)
{
printf("%d \n",ct[j]);
}
for(j=0;j<no;j++)
{
tat[j]=ct[j]-at[j];
}
printf("The turn around time :: \n");
for(j=0;j<no;j++)
{
printf("%d \n",tat[j]);
}
for(j=0;j<no;j++)
{
wt[j]=tat[j]-bt[j];
}
printf("The waiting time time :: \n");
for(j=0;j<no;j++)
{
printf("%d \n",wt[j]);
}
tcount=0;
for(j=0;j<no;j++)
{
tcount=tcount+tat[j];
}
tavg=tcount/no;
wtcount=0;
for(j=0;j<no;j++)
{
wtcount=wtcount+wt[j];
}
wtavg=wtcount/no;
through=no/ct[no];
printf("The average waiting time = %f",wtavg);
printf("The average turn around time = %f",tavg);
printf("The throughput = %d",through);
}
