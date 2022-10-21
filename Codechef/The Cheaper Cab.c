#include <stdio.h>

int main() {
    int f,r,s;
    
    scanf("%d" , &s);
    for(int i=0;i<s;i++){
    
    
    scanf("%d%d",&f,&r);
    
     if(f<r)
        printf("first\n");
        
    if(f>r)
    printf("second\n");
    
    
    else if (f==r)
        printf("any\n");
    
    }
     return 0;
}
