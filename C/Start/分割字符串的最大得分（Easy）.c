#include <string.h>
#include <stdlib.h>

int max_score(char* s) 
{
    int len_s = strlen(s);
    int prev_score = 0, max_score = 0;
    for (int separator = 0; separator < len_s - 1; ++separator)
    {
        int left_score = 0, right_score = 0;
        for (int i = 0; i <= separator; ++i) left_score += s[i] == '0' ? 1 : 0;
        for (int i = len_s - 1; i > separator; --i) right_score += s[i] == '1' ? 1 : 0;
        prev_score = left_score + right_score;
        max_score = prev_score > max_score ? prev_score : max_score;
    }
    return max_score;
}