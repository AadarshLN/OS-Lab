#include<stdio.h>
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
int n;
printf("Enter the number of processes\t:");
scanf("%d",&n);
int bt[n],p[n],pid[n];
for(int i=0;i<n;i++)
{
  printf("Process %d:\n",i+1);
  printf("Enter the Burst Time\t:");
  scanf("%d",&bt[i]);
  printf("\nEnter the Priority Index\t:");
  scanf("%d",&p[i]);
  pid[i]=i+1;
  printf("\n");
}
for(int i=0;i<n;i++)
{
  int temp=p[i],m=i;
  //selection sort to do priority sorting
  for(int j=i;j<n;j++)
  {
    if(p[j]>temp)
    {
      temp=p[j];
      m=j;
    }
  }
  swap(&p[i],&p[m]);
  swap(&bt[i],&bt[m]);
  swap(&pid[i],&pid[m]);
}
    int wt=0,tat=0;
    float s1=0,s2=0;
    printf("Process ID\t Burst Time\t Wait Time\tTurn around Time\t \n");
    for(int i=0;i<n;i++)
    {
        tat=wt+bt[i];
        printf("%d\t\t %d\t\t %d\t\t %d \n",pid[i],bt[i],wt,tat);
        s1+=wt;
        s2+=tat;
        wt+=bt[i];       
    }
float avg1,avg2;
avg1=s1/n;
avg2=s2/n;
printf("Average waiting time average is %f\n",avg1);
printf("Average Turn around time is %f",avg2);
}
