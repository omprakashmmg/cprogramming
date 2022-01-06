       #include<stdio.h>
        void main()
        {
        	add();
        	add();
		}
	     void add()
	     {
	     	
                int a,b;
                static int count=0;
                printf("enter two number : ");
                scanf("%d%d",&a,&b);
                count=count+a+b;
                printf(" count value is : %d\n",count);
		 }
                
        
                
                
	
				
            
