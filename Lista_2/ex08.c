#include <stdio.h>

main () {
int n,aux,binario[32],i=0,j;

scanf("%d", &n);

while (n > 0) {
binario[i] = n % 2;
i++;
n = n/2;
}
for(j = i-1;j >=0; j--){
 printf("%d", binario[j]);
        }

}
