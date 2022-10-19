#include <stdio.h>

int main(void) {
     int t;
     scanf("%d",&t);
     char st[1001];
     
     while(t--)
     {
         int p=0;
         int c=0;
         scanf("%s",st);
         for(int i=0;st[i]!='\0';i++)
         {
             if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
             {
                 c++;
             }
             else
             c=0;
          
             if(c>=3) 
             {
                 p=1;
                break ;
             }
             
         }
         if(p==0)
         printf("Sad\n");
         else
printf("Happy\n");
        
     }
	return 0;
}
