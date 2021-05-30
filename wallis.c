#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double wallis_pi(int n);

int main(void) {
  double pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      abort();
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
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
