#include <stdio.h>

int main(void) {
    int t; scanf("%d",&t);
    while(t--){
    int x,y,a; scanf("%d %d %d",&x,&y,&a);
    if(x<=a && a<y)
    printf("\nYES");
    else
    printf("\nNO");
    }
	// your code goes here
	return 0;
}

