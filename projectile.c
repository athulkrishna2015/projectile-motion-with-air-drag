#include <stdio.h>
#include <math.h>
int main()
{
    float v0,ang,tf,h,drag,ro,rad,mass,k,ay,ax,vy,vx,x,y,t;
    printf("Enter initial velocity ");
    scanf("%f",&v0);
    printf("Enter angle of projection ");
    scanf("%f",&ang);
    printf("Enter time ");
    scanf("%f",&tf);
    printf("Enter the time step ");
    scanf("%f",&h);
    printf("Enter air drag ");
    scanf("%f",&drag);
    printf("Enter Dencity ");
    scanf("%f",&ro);
    printf("Enter radis of the body ");
    scanf("%f",&rad);
    printf("Enter the mass of the body ");
    scanf("%f",&mass);
    k=0.5*3.1415926*drag*ro*rad*rad/mass;
    // printf("%f",k);
    ang=ang*3.1415926/180;
    ax=0;
    ay=-9.8;
    vx=v0*cos(ang);
    vy=v0*sin(ang);
    x=y=t=0;
    printf("Time   X-acceleration   Y-acceleration  X-Velocity  Y-Velocity  X-Position  Y-position\n");
    printf("%6.3f  %6.3f  %6.3f  %6.3f  %6.3f  %6.3f  %6.3f \n",t,ax,ay,vx,vy,x,y);
    t=t+h;
    while (t<=tf)
    {
        ax=-k*vx*sqrt(vx*vx+vy*vy);
        ay=-9.8-k*vy*sqrt(vx*vx+vy*vy);
        vx=vx+ax*h;
        vy=vy+ay*h;
        x=x+vx*h;
        y=y+vy*h;
        printf("%6.3f  %6.3f  %6.3f  %6.3f  %6.3f  %6.3f  %6.3f \n",t,ax,ay,vx,vy,x,y);
        t=t+h;
        ax=ax;
        ay=ay;
    }
    printf("Thank You"); 
}
