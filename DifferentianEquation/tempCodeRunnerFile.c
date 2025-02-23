#include<stdio.h>

#define f(x,y) (y*y-x*x)/(y*y+x*x)

int main(){
    float x0,y0,xn,h,yn,k1,k2,k3,k4,k;
    int i,n;
    
    printf("Enter Initial Conditions");
    printf("\nx0=");
    scanf("%f",&x0);
    
    printf("\ny0=");
    scanf("%f",&y0);
    
    printf("\nEnter the  initial condition=");
    scanf("%f",&xn);
    
    printf("\nEnter the number of steps");
    scanf("%d",&n);
    
    h=(xn-x0)/n;
    
    printf("\nx0\ty0\tyn\n");
    for(int i=0; i<n; i++){
        k1=h * f(x0,y0);
        k2=h * f(x0 + h/2,y0+k1/2);
        k3=h * f(x0 + h/2,y0+k2/2);
        k4=h * f(x0+h,y0+k3);
        
        k= (k1+2*k2+2*k3+k4)/6;
        
        
        yn=y0 + k;
        printf("%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);
        x0=x0+h;
        y0=yn;
    }
    
    printf("Value of y(%.2f)=%.3f",xn,yn);
    
    return 0;
    
    
}