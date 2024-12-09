#include <stdio.h>

//No Argument and No Return Value 
void Star_pattern() 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); 
    scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*"); 
	} 
} 

 // With arguments and without return value : 
void Product(int a,int b) 
{ 
	int Multiplication; 
	Multiplication = a*b ;  
	printf("The Product is %d\n\n",Multiplication); 
} 

// With arguments and with return value : 
float Percentage(int x,int y) 
{ 
	float perct; 
	perct = ((x+y)/200.0)*100.0;  
	return perct; 
} 

// Without arguments and with return value :
int Sum() 
{ 
	int x,y,z; 
	printf("Enter no. 1 : \t"); 
	scanf("%d",&x); 
	printf("\nEnter no. 2 : \t"); 
	scanf("%d",&y ); 
	z=x+y; 
	return z; 
} 


int main(int argc, char const *argv[])
{
    int m,n,u,v,g,h;
    Star_pattern();
    printf("\n");
    printf("enter two number:\n");
    scanf("%d%d",&m,&n);
    Product(m,n);
    printf("enter two number to get percentage of two number:");
    scanf("%d%d",&u,&v);
    g=Percentage(u,v);
    printf("%d\n",g);
    h=Sum(); 
    printf("%d",h);

    return 0;
}