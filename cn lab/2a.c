#include<stdio.h>
#include<stdlib.h>
void main()
{
  int b,o,in[20],buck[20],drop[20],i=0;
  scanf("%d",&b);
  scanf("%d",&o);
  printf("itertions\tin\tout\tdata in bucket\tdata dropped\n");
  printf("initial  \t0 \t0  \t0             \t0\n");
  while(in[i]>=0&&buck[i]>=0&&drop[i]>=0)
 {  i++;
   scanf("%d",&in[i]);
   
   if(buck[i-1]+in[i]-o<=b)
   buck[i]=buck[i-1]+in[i]-o;
   if(buck[i-1]+in[i]-o>b)
   buck[i]=b;
 
   drop[i]=(buck[i-1]+in[i])-o-buck[i];
   if(in[i]>=0&&buck[i]>=0&&drop[i]>=0)
   printf("%d       \t%d  \t%d  \t%d              \t%d\n",i,in[i],o,buck[i],drop[i]);
   

  }

}
