#include <stdio.h>
#define MAX 20

/*autor: Beatriz Lima
  ano: 2021
  discipl�na: AlgProg2*/

/*Fa�a um programa que leia um vetor N[20].
Troque a seguir, o primeiro elemento com o �ltimo,
o segundo elemento com o pen�ltimo, etc.,
at� trocar o 10� com o 11�.
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
