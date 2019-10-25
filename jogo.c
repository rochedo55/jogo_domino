#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char x;
    char y;
} Domino;

void print_domino (Domino);

int
main (void)
{
    // Define todos os dominós do jogo
    Domino dominos[49];
    for (int i = 0; i < 49; i++)
    {
        dominos[i].x = i / 7;
        dominos[i].y = i % 7;
    }

    printf ("Todos os dominós disponíveis no jogo:\n");
    for (int i = 0; i < 49; i++)
        print_domino (dominos[i]);

	return 0;
}

void
print_domino (Domino d)
{
    printf("[ %d | %d ]\n", d.x, d.y); 
}
