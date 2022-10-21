#include <stdio.h>

int main(void) {
    int i, t,x;
    i=0;
    
    scanf("%d",&t);
    while(i<t){
        scanf("%d",&x);
        if(x>100){
            printf("%d \n",x-10);
        }
        else{
            printf("%d \n",x);
        }
        i++;
    }
	// your code goes here
	return 0;
}

