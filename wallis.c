#include <stdio.h> 
#include <cs50.h> 
#include <math.h>
double  wallis_pi(int n); 

int main(void) 
{
double pi; 
int n= get_int("Enter the number of iterations \n"); 
pi= wallis_pi(n); 

printf("The value of pi= %0.10f \n",pi); 

} 

double wallis_pi(int n) 
{
double ans=1.0;
for(int i=1;i<=n;i++) 
{float nr= 4*i*i;

ans= ans*(nr/(nr-1));

} 

return ans*2; 
}
