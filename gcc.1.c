#include<stdio.h>
int add(int a,int b);
int main()
            {
            	int i,j;
            	int sum;
            	printf("enter the first element :\n" );
            	scanf("%d", &i);
            	 
            	 printf("enter the second element :\n" );
            	 scanf("%d", &j);
            	 
            	 sum=add(i,j);
            	 
            	 printf("the answer is \n %d",sum);
            	 
           return 0; 	 
			}
    
int add(int a,int b)	{
	return a+b;
}

