/*NAME:MRIDULA.R EMAIL:mridularamesh3@gmail.com*/
#include <stdio.h>
#include <string.h>

int main() {
    char key;
    char sentence[] = "abcdefghijklmnopqrstuvwxyz";
    char word[26];
    int count = 0;
   printf("Enter the search character: ");
   scanf("%c", &key);
    printf("Enter the characters: ");
    scanf("%s", &word);
    
    for(int i=0; i < strlen(word); i++)
    {
        if(sentence[i] != word[i])
        {
            printf("%c is missing \n", key);
            count++;
            break;
        }
    }
    if(count == 0)
    {
        printf(" none\n");
    }
    return 0;
}
