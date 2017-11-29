#include<stdio.h>
#include<math.h>
main()
{
    double g,pi,r,eta,theta,v;
    double s;
    v=400,g=9.8,r=0.06,eta=2.49e-6;
    pi=3.1415926535;
    scanf("%lf",&theta);
    s=(1/v)*((g+4*pi*r*eta*v*sin(theta))/g)*((4*pi*r*eta*v*v+g*v*sin(theta)-4*pi*r*eta*g*v*sin(theta))/(4*pi*r*eta*v+g*sin(theta)))+log(1-(1/v)*((4*pi*r*eta*v*v+g*v*sin(theta)-4*pi*r*eta*g*v*sin(theta))/(4*pi*r*eta*v+g*sin(theta))));
    printf("%lf\n",s);
}
