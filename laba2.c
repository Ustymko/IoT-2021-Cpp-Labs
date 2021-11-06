#include<stdio.h>
#include<math.h>
void main(void){
    /*завдання 1*/
    float x;
    for (x = 2; x <= 4.1; x += 0.2){
        if(x < 2.5){
            printf("%f\n",cos(log(pow(x,2))));
        }
        else if(x >= 2.5 && x <= 3.5){
            printf("%f\n",1/cos(pow(x,4)));
        }
        else{
            printf("%f\n",tan(sin(x)));
        }
    }
    /*завдання 2*/
    int k;
    float y, ext;
    for(y = 0.2; y <= 0.3; y += 0.01){
        float sum = 0;
        do
        {
            ext = pow(y,4*k+3)/(4*k+3);
            sum+=ext;
            k+=1;
        } while (ext>0.000001);
        printf("%.30f\n",sum);
    }
}