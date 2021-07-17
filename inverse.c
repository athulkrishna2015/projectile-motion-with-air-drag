#include <stdio.h>
#include <math.h>
int main()
{
    float vx,vy,tf,x,y,gm,k,ax,ay,t,h;
    printf("Enter initial X-Velocity and Y-Velocity ");
    scanf("%f %f",&vx,&vy);
    while (1)
    {
        printf("Enter initial x and y ");
        scanf("%f %f",&x,&y);
        if (x*x+y*y>6.4*pow(10,6))
            break;
        printf("Entered coordinates does not matching Try another coordinates ");
    }
    printf("Enter time ");
    scanf("%f",&tf);
    printf("Enter the time step ");
    scanf("%f",&h);
    gm=3.99*pow(10,14);
    k=gm/pow((x*x+y*y),1.5);
    ax=k*x;
    ay=k*y; 
    t=0;
    printf("Time   X-acceleration   Y-acceleration  X-Velocity  Y-Velocity  X-Position  Y-position\n");
    printf("%f  %f  %f  %f  %f  %f  %f \n",t,ax,ay,vx,vy,x,y);
    t=t+h;
    while (t<=tf)
    {
        k=gm/pow((x*x+y*y),1.5);
        ax=k*x;
        ay=k*y;
        vx=vx+ax*h;
        vy=vy+ay*h;
        x=x+vx*h;
        y=y+vy*h;
        printf("Time   X-acceleration   Y-acceleration  X-Velocity  Y-Velocity  X-Position  Y-position\n");
        printf("%f  %f  %f  %f  %f  %f  %f \n",t,ax,ay,vx,vy,x,y);
        t=t+h;
    }
    printf("Thank You"); 
}
