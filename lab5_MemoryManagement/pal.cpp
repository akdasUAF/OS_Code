#include "pal.h"
#include <string.h>
using namespace std;
 
bool isPalindrome(char* word)
{
    bool ret = true;
 
    char *p = word;
    int len = strlen(word);
    char *q = &word[len-1];
 
    for (int i = 0 ; i < len ; ++i, ++p, --q)
    {
        if (*p != *q)
        {
            ret = false;
        }
    }
 
    return ret;
}
