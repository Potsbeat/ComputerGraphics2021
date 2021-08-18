#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,xx,yy,xi,yi;
    int i,div,vertical;
    int count=0;

    printf("Enter x1: ");
    scanf("%d",&x);

    printf("Enter y1: ");
    scanf("%d",&y);

    printf("\nEnter x2: ");
    scanf("%d",&xx);

    printf("Enter y2: ");
    scanf("%d",&yy);

    printf("\nResult\n");
    printf("X\tY\n");

    xi=x;
    yi=y;

    if((y-yy)>0){
        div=y/yy;
        vertical=1;
    }else{
        div=yy/y;
        vertical=-1;
    }

    for(i=x;i<=xx;i++){
        printf("%d\t%d\t\n",xi,yi);
        count++;
        xi++;
        if(count==div || xi==xx){
            count=0;
            if(vertical==1)
                yi--;
            else
                yi++;
        }

    }
    return 0;
}
