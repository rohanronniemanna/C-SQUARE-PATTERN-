#include <stdio.h>

int main() {
    int n;
    printf("ENTER THE NUMBER OF TIMES TO BE REPEATED:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("\n");
        for(int j=1;j<=10;++j){
            printf("*",j);
        }
    }
    return 0;
}
