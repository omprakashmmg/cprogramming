//33. Write a menu driven program to find area of the circle, area of the 
//triangle and area of the rectangle according to users input choice.
#include<stdio.h>
void main()
{
	int x,circle,triangle,rectangle;
	float comm1,comm2,area;
	printf("1. Find area of the circle :\n ");
	printf("2. Find area of the triangle :\n ");
	printf("3. Find area of the rectangle :\n\n ");
    
    printf("choose your choice : ");
    scanf("%d",&x);
    switch(x)
    {
    	case 1:
    	
    		printf(" enter circle radius : ");
    		scanf("%f",&comm1);
    		area=3.14;
    		area=3.14*comm1*comm1;
    		printf("%f",area);
    		break;
    	
    	case 2:
    		printf("enter triangle base and height : ");
    		scanf("%f%f",&comm1,&comm2);
    		area=0.5*comm1*comm2;
    		printf("%f",area);
    	    break;
    	    
    	case 3:
    		printf("  enter rectangle length and bridth : ");
    		scanf("%f%f",&comm1,&comm2);
    		area=comm1*comm2;
    		printf("%f",area);
    		break;
    	default:
		    printf("invalid choice ");	
    		
    		
	}
    
}
