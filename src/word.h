#include <string.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct
{
    char name[30];
    float count;
    struct Word* next;
    struct Tuple* first_tuple;
}Word;

Word* create_first_word(char word[30]);

Word* search_word(Word* first_word, char wordname[30]);