#include <stdio.h>

// Not tested
/*Given a string s, return the longest palindromic substring in s.*/
/*Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.*/

char * longestPalindrome(char * s){
    char * s_prime;
    s_prime = reverse(s);
    int len = sizeof(s_prime);
    int i,j;
    int index;
    int longest;
    int start, end = 0;
    is_true = 0;    
    int counter[len+1][len+1] = {0};
    for ( i = 0; i<len; i++){
        for (j = 0; j <len; j++){}
            if (s[i] == s[j]){
                    index = counter[i][j] + 1;
                    counter[i+1][j+1] = index;
                    if index > longest{
                        longest = index;
                        start = i;
                    else if index == longest{
                        start = i;
                    }
                    }
             }            
           }
    return s[start:longest];
}
