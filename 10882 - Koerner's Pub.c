#include<stdio.h>
#include<math.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=1;i<t;i++)
    {
        int x,y,z,mn,lw;
        scanf("%d %d %d",&x,&y,&z);

        mn = min(x,min(y,z));
        lw = (x+y+z-100+1)/2;

        if(x+y+z <= 100){
            lw = 0;
        }

        if(lw <= mn && lw >= 0){
            printf("Case #%d: Between %d and %d times.\n",i,lw,mn);
        }
        else{
            printf("Case #%d: The records are faulty.\n",i);
        }

    }
    return  0;
}
