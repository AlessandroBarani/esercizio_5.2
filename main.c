#include <stdio.h>
int main() {
int persone[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    int i;
    for(i = 0;i<26;i++)
        if(persone[i]>=18)
            printf("%d , %d\n", persone[i], i);

    return 0;
}
