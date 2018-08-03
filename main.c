#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int array[100];
    int index = 0;
    
    char str[5];
    while(fgets(str, sizeof(str), stdin)){
        int n = atoi(str);
        if(0 <= n){
            array[index++] = n;
        }else{
           printf("%d\n", array[-n-1]);
        }
    }

    return 0;
}
