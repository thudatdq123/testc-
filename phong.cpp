#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    const char * s = "Le Tran Dat - Tu Hoc Lap Trinh - daynhauhoc.com";
#define NUM_CHAR 122
    int count[NUM_CHAR] = {0};
    int i;
    for(i = 0; i < strlen(s); ++i)
        if (isalpha(s[i]))
            count[s[i] - 'A']++;

    for(i = 'A'; i < NUM_CHAR; ++i)
        if(count[i])
            printf("%c %d\n", i+'A', count[i]);
    return 0;
}
