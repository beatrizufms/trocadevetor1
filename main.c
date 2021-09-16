#include <stdio.h>
#define MAX 20

/*autor: Beatriz Lima
  ano: 2021
  disciplína: AlgProg2*/

/*Faça um programa que leia um vetor N[20].
Troque a seguir, o primeiro elemento com o último,
o segundo elemento com o penúltimo, etc.,
até trocar o 10º com o 11º.
Mostre o vetor modificado.
*/

int main()
{
    int n[20], i, temp;

    for(i = 0; i <= 19; i++)
        scanf("%d", &n[i]);

    for(i = 0; i < 10; i++)
    {
        temp = n[i];
        n[i] = n[19-i];
        n[19-i] = temp;
    }

    for(i = 0; i <= 19; i++)
        printf("N[%d] = %d\n", i, n[i]);

    return 0;
}
