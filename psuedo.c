#include <stdio.h>
#include <immintrin.h>
#define GENERATE 1000

int get_true_random_number(unsigned int* result)
{
    int failures = 0;
    int c;

    do
    {
        c = _rdseed32_step(result);
        failures += c == 1 ? 0 : 1;
    }
    while (c != 1);

    return failures;
}

int main()
{
    unsigned int result = 0;
    get_true_random_number(&result);

    srand(result);

    for (int i = 0; i < GENERATE; i++)
    {
        printf("Pseudoandom number: %u\n", rand());
    }
}
