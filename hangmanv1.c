#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int has_letter(char [], char);
int main(void)
{
    printf("\n\t Be aware you can be hanged!!.");


printf("\n\n\t Rules : ");
printf("\n\t - Maximum 6 guesses are allowed.");
printf("\n\t - All alphabet are in lower case.");
printf("\n\t - All words are name of colors");
printf("\n\t - If you enjoy continue, otherwise close it.");

printf("\n\t Syntax : Alphabet");
printf("\n\t Example : a \n\n");
const char *string_table[] = {
        "purple",
        "indigo",
        "maroon",
        "auburn",
        "orange",
        "yellow",
        "silver",
        "golden",
        "violet",
        "salmon"
    };
        char input;
        char temp[] = "______";
        int i,k=0,p, count = 0;
    int num_lives = 6;
    int table_size = 10;
    srand(time(NULL));
    for (p=1; p <= 1; ++p)
    {
        const char *rand_string = string_table[rand() % table_size];
        while(rand_string[k]!='\0')
{
   k++;
}
        do {

printf("Number of lives: %d\n", num_lives);
printf("Guess a letter in the word ");
puts(temp);
scanf(" %c", &input);

if (has_letter(rand_string, input)) {
for (i=0; i<k; i++)
if ((input == rand_string[i]) && (temp[i] == '_')) {
temp[i] = input;
count++;
}
}
else num_lives--;
} while ((num_lives != 0) && (count != k));

if (num_lives == 0)
{printf("Sorry, you're hanged! The word is \"%s\"\n", rand_string);
printf(" |- - -\n");
printf(" |    |\n");
printf(" |  (( ))\n");
printf(" |   /|\\  \n");
printf(" |   /|\\   \n");
printf("_|__        \n");}
else
printf("Congratulations! The word is \"%s\"\n", rand_string);
    }



    return 0;
}
int has_letter(char word[], char ch) {
int j,s=0;
while(word[s]!='\0')
{
    s++;

}
for (j=0; j<s; j++) {
if (ch == word[j])
return 1;
}

return 0;
}

