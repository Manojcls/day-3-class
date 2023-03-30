#include<stdio.h>
int add(int a);
int main()
            {
            	int i;
            	int sum;
            	printf("enter the first element :\n" );
            	scanf("%d", &i);
            	 
            	 
            	 sum=add(i);
            	 
            	 printf("the answer is \n %d",sum);
            	 
           return 0; 	 
			}
    
int add(int a)	{
	return a*a*a;
}

    

