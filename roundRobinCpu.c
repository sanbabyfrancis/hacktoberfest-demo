//Round robin cpu scheduling
#include<stdio.h>
#include<stdlib.h>
#define max 10
struct process
{
	int id,bt,wt,tat;
}p[max];
int rem[max],q,n,tot;
void waitTime(struct process p[],int n)
{
   	int i,flag;
   	tot=0;
   	for(i=0;i<n;i++)
   	{
   		rem[i]=p[i].bt;
	}
	while(1)
	{
		flag=1;
		for(i=0;i<n;i++)
		{
			if(rem[i]>0)
			{
				flag=0;
				if(rem[i]>q)
				{
					tot+=q;
					rem[i]-=q;
				}
				else
				{
					tot+=rem[i];
					p[i].wt=tot-p[i].bt;
					rem[i]=0;
				}
			}
		}
		if(flag==1)
		  break;	
	}
}
void turnTime(struct process p[],int n)
{
	int i;
	for(i=0;i<n;i++)
	 p[i].tat=p[i].wt+p[i].bt;
} 
void main()
{
   int i,j,totwt=0,tottat=0;
   float avgwt,avgtat;
   printf("\n Enter the no. of process : ");
   scanf("%d",&n);
   printf("\n Enter the burst time of each process : ");
   for(i=0;i<n;i++)
   {
       printf("\nProcess %d : ",i+1);
       scanf("%d",&p[i].bt);
       p[i].id=i+1;	      	
   }   
   printf("\n Enter the time quantum : ");
   scanf("%d",&q);
   waitTime(p,n);
   turnTime(p,n);
   for(i=0;i<n;i++)
   {
     totwt+=p[i].wt; 
     tottat+=p[i].tat;
   }
   avgwt=(float)totwt/n;
   avgtat=(float)tottat/n;
   printf("\n\n\tProc\tBT\tWT\tTAT\n");
   for(i=0;i<n;i++)
   {
   	  printf("\n\t%d\t%d\t%d\t%d",p[i].id,p[i].bt,p[i].wt,p[i].tat);
   }
   printf("\n\n\t Average waiting time : %f",avgwt);
   printf("\n\n\t Average turn around time : %f",avgtat);	
}
