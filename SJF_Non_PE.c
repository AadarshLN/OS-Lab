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
int pos,temp;
//sorting the bursting times
for(int i=0;i<n;i++)
{
  pos=i;
  for(int j=i+1;j<n;j++)
  {
    if(bt[j]<bt[pos])
    {
     
        pos=j;

    }
  }
  temp=bt[i];
  bt[i]=bt[pos];
  bt[pos]=temp;
  
   temp=pid[i];
        pid[i]=pid[pos];
        pid[pos]=temp;
    

}
wt[0]=0;
float s1=0,s2=0,avg1,avg2;
for(int i=1;i<n;i++)
{
  wt[i]=0;
  for(int j=0;j<i;j++)
  {
   wt[i]+=bt[j];
   s1+=wt[i];           
  }
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
avg1=s1/n;
avg2=s2/n;
printf("Average waiting time is %f and Average Turn around time is %f",avg1,avg2);
}
