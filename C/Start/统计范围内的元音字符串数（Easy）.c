#include <string.h>

int is_vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
    return 0;
}

int vowel_strings(char** words, int words_size, int left, int right) 
{
    int ans = 0;
    for (int i = left; i <= right; ++i)
    {
        int first_letter_is_vowel = is_vowel(words[i][0]); 
        int last_letter_is_vowel = is_vowel(words[i][strlen(words[i]) - 1]);
        if (first_letter_is_vowel == 1 && last_letter_is_vowel == 1) ans++;
    }
    return ans;
}