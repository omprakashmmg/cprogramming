   #include<stdio.h>
   void main()
   {
   int i,num=0;
   for(i=1;i<=10;i++)
   {
   num=num+i;
   printf("%d\n",i);
   if(i!=10)
   {
   
   printf("%d+",i);
   }
   }
   printf(" the value of sum : %d",num);
}
