#include <cs50.h>
#include <stdio.h>

void print_row(int bricks, int total_height);


int main(void)
{
    int x;
    do
    {
        x = get_int("How tall do you want the pyramid? ");
    }
    while(x < 1 || x > 8);
    for (int i = 1; i <= x; i++)
    {
        print_row(i, x);
    }
}

void print_row(int bricks, int total_height)
{
    for(int j = 0; j < total_height - bricks; j++)
    {
        printf(" ");
    }
    for(int rows = 0; rows < bricks; rows++)
    {
        printf("#");
    }
    printf("  ");
    for(int y = 0; y < bricks; y++)
    {
        printf("#");
    }
    printf("\n");

}
