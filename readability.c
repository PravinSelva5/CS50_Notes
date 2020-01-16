#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int count_letters(string sentence);
int count_words(string sentence);
int count_sentences(string sentence);
int coleman_Liau_index(string sentence);



int main(void)
{
    int string_length=0;
    string sentence = get_string("Text: ");
    coleman_Liau_index(sentence);
}

// This function counts the number of letters that is in the sentence.
int count_letters(string sentence)
{
    int string_length = 0;
    for (int i=0; i<strlen(sentence); i++){
        if(isalpha(sentence[i]) != 0)
        {
            string_length += 1;
        }
    }
    return string_length;
}

// This functions counts the number of words in the sentence.
int count_words(string sentence)
{
    int total_words = 0;
    for (int i = 0; i < strlen(sentence); ++i)
    {
        if((sentence[i]) == ' ')
        {
            total_words += 1;
        }
    }
    return total_words+1;
}
//This function counts the number of sentences that the user has inputed.
int count_sentences(string sentence)
{
    int total_sentences = 0;
    for (int i=0; i < strlen(sentence); i++)
    {
        if(sentence[i] == '.'){
            total_sentences += 1;
        }
        if(sentence[i] == '!'){
            total_sentences += 1;
        }
        if(sentence[i] == '?'){
            total_sentences += 1;
        }
    }
    return total_sentences;
}

// This function will calculate the reading level of the sentence and output it to the user.
int coleman_Liau_index(string sentence)
{
    int L;
    int S;
    int index;

    const float  letters = count_letters(sentence);
    const float words = count_words(sentence);
    const float sentences = count_sentences(sentence);

    L = (letters/words) * 100;
    S = (sentences)/(words) * 100;


   index = round((0.0588 * L) - (0.296 * S) - 15.8);


   if(index > 16)
   {
       printf("Grade 16+\n");

   }
   else if(index < 1)
   {
       printf("Before Grade 1\n");

   }
   else
   {
        printf("Grade %d\n", index);
    }
return 0;
}
