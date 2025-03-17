// 3. Write a C program that calculates the percentage of vowels and percentage of consonants in a word. A word is entered by a user.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void) {
    float vowel = 0, consonent = 0, result; // initialize counters

    char word[100]; // declare array with size 100
    printf("Enter a word: "); // prompt user for word
    scanf("%s", word);

    // Convert each character to lowercase
    for (int i = 0; i < strlen(word); i++) {
        word[i] = tolower(word[i]);
    }

    // Count vowels and consonants
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            vowel++;
        } else if (word[i] >= 'a' && word[i] <= 'z') {
            consonent++;
        }
    }

    // Calculate the total number of letters
    result = vowel + consonent;

    // Calculate percentage
    if (result != 0) {
        vowel = (vowel * 100) / result;
        consonent = (consonent * 100) / result;
    }

    // Print output
    printf("The percentage of vowels is %.1f%%\n", vowel);
    printf("The percentage of consonants is %.1f%%\n", consonent);

    return 0; // code success
}
