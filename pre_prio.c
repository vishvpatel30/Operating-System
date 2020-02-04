#include<stdio.h>

struct process{
	int pid,at,bt,ct,tat,wt,bo,po,t_bt;
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
		printf("\nEnter the priority of process %d :",i+1);
		scanf("\n%d",&p[i].po);
		printf("\nEnter the Arrival time of process %d :",i+1);
		scanf("%d",&p[i].at);
		printf("\nEnter the Burst time of process %d :",i+1);
		scanf("\n%d",&p[i].bt);
		p[i].t_bt=p[i].bt;
		p[i].ct=0;
		p[i].tat=0;
		p[i].wt=0;
		p[i].bo=0;
	}
	int curr=0;
	int id=0;
	int max_po=0;
	int comp=0;
	int j=0;
	int i=0;
	for(i=0;i<a;i++)
	{
		j=0;
		while(p[j].bo!=0)
		{
			j++;
		}
		max_po=0;
		if(curr<p[j].at)
		{
			curr += p[j].at;
		}
		//printf("\ncuur %d",curr);
		for (int k=0;k<a;k++)
		{
			if(p[k].at<=curr && p[k].bo==0)
			{
				if (p[k].po>max_po)
				{
					max_po=p[k].po;
					id=p[k].pid;
				}
			}
		}
		//printf("\n%d",min_burst);
		curr+=1;
		p[id].bt=p[id].bt-1;
		printf("P%d -->",id);
		if(p[id].bt==0)
		{
			p[id].bo=1;
			p[id].ct=curr;
			p[id].tat=p[id].ct - p[id].at;
			p[id].wt=p[id].tat - p[id].t_bt;
			comp++;
		}
		//printf("\n%d",curr);
		//printf("\ntat %d  wt %d",p[min_id].tat,p[min_id].wt);
	}
	for(i=0;i<a;i++)
	{
		j=0;
		while(p[j].bo!=0)
		{
			j++;
		}
		max_po=0;
		if(curr<p[j].at)
		{
			curr += p[j].at;
		}
		//printf("\ncuur %d",curr);
		for (int k=0;k<a;k++)
		{
			if(p[k].at<=curr && p[k].bo==0)
			{
				if (p[k].po>max_po)
				{
					max_po=p[k].po;
					id=p[k].pid;
				}
			}
		}
		//printf("\n%d",min_burst);
		curr+=p[id].bt;
		printf("P%d -->",id);
		comp++;
		p[id].ct=curr;
		p[id].tat=p[id].ct - p[id].at;
		p[id].wt=p[id].tat - p[id].t_bt;
		p[id].bo=1;
		if(comp==a)
			break;
		//printf("\n%d",curr);
		//printf("\ntat %d  wt %d",p[min_id].tat,p[min_id].wt);
	}
	for(int j=0;j<a;j++)
	{
		printf("\n%d \t %d \t %d \t %d \t %d \t\t %d \t %d",p[j].pid,p[i].po,p[j].at,p[j].bt,p[j].ct,p[j].tat,p[j].wt);
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
