#include<stdio.h>

struct process{
	int pid,at,bt,ct,tat,wt,bo;
};



void main()
{
	int a;
	printf("Enter the no. of process");
	scanf("%d",&a);
	struct process p[a]; 	
	for(int i=0;i<a;i++)
	{
		p[i].pid=i;
		printf("\nEnter the Arrival time of process %d :",i+1);
		scanf("%d",&p[i].at);
		printf("\nEnter the Burst time of process %d :",i+1);
		scanf("\n%d",&p[i].bt);
		p[i].ct=0;
		p[i].tat=0;
		p[i].wt=0;
		p[i].bo=0;
	}
	int curr=0;
	int min_id=0;
	int min_burst=9999;
	int j=0;
	int i=0;
	for(i=0;i<a;i++)
	{
		j=0;
		while(p[j].bo!=0)
		{
			j++;
		}
		min_burst=9999;
		if(curr<p[j].at)
		{
			curr += p[j].at;
		}
		//printf("\ncuur %d",curr);
		for (int k=0;k<a;k++)
		{
			if(p[k].at<=curr && p[k].bo==0)
			{
				if (p[k].bt<min_burst)
				{
					min_burst=p[k].bt;
					min_id=p[k].pid;
				}
			}
		}
		//printf("\n%d",min_burst);
		curr+=min_burst;
		p[min_id].ct=curr;
		p[min_id].tat=p[min_id].ct - p[min_id].at;
		p[min_id].wt=p[min_id].tat - p[min_id].bt;
		p[min_id].bo=1;
		//printf("\n%d",curr);
		//printf("\ntat %d  wt %d",p[min_id].tat,p[min_id].wt);
	}
	for(int j=0;j<a;j++)
	{
		printf("\n%d \t %d \t %d \t %d \t\t %d \t %d",p[j].pid,p[j].at,p[j].bt,p[j].ct,p[j].tat,p[j].wt);
	}
	float avgtat=0.0;
	float avgwt=0.0;
	for(int j=0;j<a;j++)
	{
		avgtat += p[j].tat;
		avgwt += p[j].wt;
	}
	printf("\n the average TAT : %f",avgtat/a);
	printf("\n the average wait time : %f",avgwt/a);
	
	float t=0.0;
	float b=a;
	t=(b/curr) * 100;
	printf("\n the throughput is %f %+",t);
	
}
