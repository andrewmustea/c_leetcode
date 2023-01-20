/**
 * Given two strings s and t, determine if they are isomorphic.
 *
 * Two strings s and t are isomorphic if the characters in s can be replaced to
 * get t.

 * All occurrences of a character must be replaced with another character while
 * preserving the order of characters. No two characters may map to the same
 * character, but a character may map to itself.
*/

#include <stdbool.h>

bool isIsomorphic(char *s, char *t){
    // character to character map for both strings
    char s_map[256] = { 0 };
    char t_map[256] = { 0 };

    int i = 0;
    for (; s[i] != 0 && t[i] != 0; i++) {
        char s_char = s[i];
        char t_char = t[i];

        // if the character hasn't been seen before for s,
        // add it to the character map for s
        if (s_map[s_char] == 0) {

            // if the character hasn't been seen for t either,
            // add the s and t characters to the opposite  character maps
            if (t_map[t_char] == 0) {
                s_map[s_char] = t_char;
                t_map[t_char] = s_char;
            }
            // if the character was seen on t but not s,
            // that means that two characters are trying to be replaced in t
            else {
                return false;
            }
        }
        // if s_char has been seen in s, check if it matches t_char,
        // then that means that multiple characters are trying to be replaced
        else if (s_map[s_char] != t_char) {
            return false;
        }
    }

    // if both s and t are at the end of their char array,
    // that means that the characters can be successfully replaced
    if (s[i] == 0 && t[i] == 0) {
        return true;
    }

    return false;
}
