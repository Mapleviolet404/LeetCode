char* to_lower_case(char* s) 
{
    for (int i = 0; s[i] != '\0'; ++i) 
    {
        if(s[i] <= 90 && s[i] >= 65)
        {
            s[i] = s[i] + 32;
        }
        
    }
    return s;
}