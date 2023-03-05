#include<stdio.h>
int main()
{
  int bt[20],at[20],n,tq,temp[20];
  printf("Enter number of processes \n");
  scanf("%d",&n);
 int tat,wt;
  int x=n,sum=0;
  for(int i=0;i<n;i++)
  {
   printf("Enter the bursting times:\t");
   scanf("%d",&bt[i]);
   temp[i]=bt[i];
  }
  for(int i=0;i<n;i++)
  {
   printf("Enter the arrival times:\t");
   scanf("%d",&at[i]);
  }
  int count;
  printf("Enter Time Quantum value:\t");
    int i;
  scanf("%d",&tq);
  printf("\n Process No\tBurst Time\tTAT\t Waiting Time");
for(sum=0,i=0;x!=0;)    
 {
    if(temp[i]<=tq && temp[i]>0)
    {
     sum+=temp[i];
     temp[i]=0;
     count=1;
   }
   else if(temp[i]>0)
   {
    temp[i]=temp[i]-tq;
    sum=sum+tq;   
   }
  if(temp[i]==0 && count==1)
  {
   x--;
  printf("\nProcess%d \t\t %d\t %d\t\t %d",i+1,bt[i],sum-at[i],sum-at[i]-bt[i]);
  count=0;
  wt=wt+sum-at[i]-bt[i];
  tat=tat+sum-at[i];
  }
 if(i==n-1)
 {
  i=0;
 }
 else if(at[i+1]<=sum)
 {
  i++;
 }
 else
 {
  i=0;
 }
}
printf("\n");
float avg1=wt*1.0/n;
float avg2=tat*1.0/n;
printf("Average Waiting time is %f \n Average Turn around Time is %f",avg1,avg2);
}
