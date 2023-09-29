#include <stdio.h>

int main(){

    int n;
    int um = 1, dois = 2, tres =3;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d %d %d PUM\n", um, dois, tres);
        um += 4;
        dois += 4;
        tres += 4;
    }


    return 0;
}
