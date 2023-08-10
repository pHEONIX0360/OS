// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
void main()
{
int np,req[100],size,init,direc,total,temp=0;
printf("Enter the numberof process");
scanf("%d",&np);
printf("ENter the disk sequence");
for(int i=0;i<np;i++)
{
scanf("%d",&req[i]);
}
printf("Enter the size of the disk");
scanf("%d",&size);
size=size-1;
printf("Enter the initial disk position");
scanf("%d",&init);
printf("Enter the direction of disk  moment (head==0) for left (head==1) for right");
scanf("%d",&direc);
for(int i=0;i<np;i++){
for( int j=0;j<np-i-1;j++)
{
if(req[j]>req[j+1]){
temp=req[j];
req[j]=req[j+1];
req[j+1]=temp;
}
}
}
if(!direc){
total = (size-init)+(size-req[0]);
}
else{
total=(init+req[np-1]);
}
printf("TOtal disk movement =%d",total); }
