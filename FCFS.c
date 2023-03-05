#include<stdio.h>
int main()
{
int n,bt[20],wt[20],tat[20],pid[20];
printf("Enter the number of processes\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
  printf("Enter the process id of %d process:\t",i+1);
  scanf("%d",&pid[i]);

}
for(int i=0;i<n;i++)
{
  printf("Enter the bursting time of %d process:\t",i+1);
  scanf("%d",&bt[i]);

}
wt[0]=0;
float  s1=0,s2=0;
for(int i=1;i<n;i++)
{
  wt[i]=bt[i-1]+wt[i-1];
  s1+=wt[i];
  
}
for(int i=0;i<n;i++)
{
 tat[i]=bt[i]+wt[i];
 s2+=tat[i];  
}
printf("Process id \t Burst Time \t Waiting Time \t Turnaround Time \t");
printf("\n");
for(int i=0;i<n;i++)
{
  printf("%d \t \t %d \t \t %d \t \t %d \t \t",pid[i],bt[i],wt[i],tat[i]);
  printf("\n");

}
float avg1=s1/n;
float avg2=s2/n;
printf("%f is Average Waiting Time \n %f is Average Turnaround Time",avg1,avg2);
