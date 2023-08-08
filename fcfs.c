#include<stdio.h>
#include<stdlib.h>

void main()
{
    int disk[10],p,pos;
    int totaldispos=0;
    printf("Enter the number of process");
    scanf("%d",&p);
    printf("Enter the disk sequence");
    for(int i=0;i<p;i++){
         scanf("%d",&disk[i]);
    }
    printf("Enter the initial position");
    scanf("%d",&pos);
    for(int i=0;i<p;i++){
        totaldispos += abs(disk[i]-pos);
        pos=disk[i];
    }
    printf("Total disk position =%d",totaldispos);
        
    

}
