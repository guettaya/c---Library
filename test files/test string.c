#include <stdio.h>
#include "string.h"

int main() {
    // Test variables
    char str1[100] = "hello";
    char str2[100] = "world";
    char str3[100] = "racecar";
    char result[100];
    char tokens[10][100];
    int tokenCount = 0;
    int vowels = 0, consonants = 0;
    char compressed[100];

    // Test stringLength
    printf("stringLength('hello') = %d (Expected: 5)\n", stringLength(str1));

    // Test stringCopy
    stringCopy(result, str1);
    printf("stringCopy result: %s (Expected: hello)\n", result);

    // Test stringConcat
    stringConcat(str1, str2);
    printf("stringConcat result: %s (Expected: helloworld)\n", str1);

    // Test stringCompare
    printf("stringCompare('hello', 'world') = %d (Expected: Nonzero)\n", stringCompare("hello", "world"));

    // Test isEmpty
    printf("isEmpty('') = %s (Expected: Yes)\n", isEmpty("") ? "Yes" : "No");

    // Test reverseString
    reverseString(str1);
    printf("reverseString result: %s (Expected: dlrowolleh)\n", str1);

    // Test toUpperCase
    stringCopy(str1, "hello");
    toUpperCase(str1);
    printf("toUpperCase result: %s (Expected: HELLO)\n", str1);

    // Test toLowerCase
    stringCopy(str1, "HELLO");
    toLowerCase(str1);
    printf("toLowerCase result: %s (Expected: hello)\n", str1);

    // Test Removechar
    stringCopy(str1, "hello");
    Removechar(str1, 1);
    printf("Removechar result: %s (Expected: hllo)\n", str1);

    // Test removewhitespace
    stringCopy(str1, " h e l l o ");
    removewhitespace(str1);
    printf("removewhitespace result: %s (Expected: hello)\n", str1);

    // Test isPalindrome
    printf("isPalindrome('racecar') = %s (Expected: Yes)\n", isPalindrome(str3) ? "Yes" : "No");

    // Test countVowelsConsonants
    countVowelsConsonants("Hello World", &vowels, &consonants);
    printf("Vowels: %d, Consonants: %d (Expected: 3, 7)\n", vowels, consonants);

    // Test findSubstring
    printf("findSubstring('Hello World', 'World') = %d (Expected: 6)\n", findSubstring("Hello World", "World"));

    // Test isAnagram
    printf("isAnagram('listen', 'silent') = %s (Expected: Yes)\n", isAnagram("listen", "silent") ? "Yes" : "No");

    // Test charFrequency
    printf("charFrequency of 'hello world':\n");
    charFrequency("hello world");

    // Test countWords
    printf("countWords('This is a test sentence') = %d (Expected: 5)\n", countWords("This is a test sentence"));

    // Test removeDuplicates
    stringCopy(str1, "aabbcc");
    removeDuplicates(str1);
    printf("removeDuplicates result: %s (Expected: abc)\n", str1);

    // Test compressString
    compressString("aaabbc", compressed);
    printf("compressString result: %s (Expected: 3a2b1c)\n", compressed);

    // Test longestWord
    longestWord("Find the longest word in this sentence", result);
    printf("longestWord result: %s (Expected: longest)\n", result);

    // Test shiftstring
    stringCopy(str1, "abcdef");
    shiftstring(str1, 2, 'r');
    printf("shiftstring result (right shift 2): %s (Expected: cdefab)\n", str1);

    // Test isRotation
    printf("isRotation('abcd', 'cdab') = %s (Expected: Yes)\n", isRotation("abcd", "cdab") ? "Yes" : "No");

    // Test countChar
    printf("countChar('hello', 'l') = %d (Expected: 2)\n", countChar("hello", 'l'));

    // Test findAndReplace
    stringCopy(str1, "Hello World");
    findAndReplace(str1, "World", "Everyone");
    printf("findAndReplace result: %s (Expected: Hello Everyone)\n", str1);

    // Test longestPalindrome
    longestPalindrome("banana", result);
    printf("longestPalindrome result: %s (Expected: anana)\n", result);

    // Test swapstring
    stringCopy(str1, "hello");
    swapstring(str1, 0, 4);
    printf("swapstring result: %s (Expected: oellh)\n", str1);

    // Test printPermutations
    printf("printPermutations('abc'):\n");
    char permTest[] = "abc";
    printPermutations(permTest, 0, 2);
    printf("\n");

    // Test splitString
    stringCopy(str1, "apple,banana,grape");
    splitString(str1, ',', tokens, &tokenCount);
    printf("splitString tokens:\n");
    int i = 0;
    for(i = 0; i <= tokenCount; i++) {
        printf("%s\n", tokens[i]);
    }

    return 0;
}
