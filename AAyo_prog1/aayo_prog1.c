#include <stdio.h>
#include <stdlib.h>
#include "aayo_argtok.h"


void userInput();

int main(){
  userInput();
  return 0;
}
//Gets the userInput
void userInput(){
  char str[100];
  while(1){
    printf("$\n");  // Marker that comes up to indicate the system is ready for the next input
   
    fgets(str,100,stdin);
    int c = string_length(str);
    printf("Test 1\n");
    int startPos = find_word_start(str,0);
    printf("Test 2\n");
    int endPos = find_word_end(str,startPos);
    printf("Test 3\n");
    int wordCount = count_words(str);
    printf("Test 4\n");
    char **tokenizedWords = argtok(str);
    printf("The start of the next word is located in position : %d\n", startPos);
    printf("The end of the next word is located in position : %d\n", endPos);
    printf("the number of words in the statement is : %d\n" , wordCount);
    print_tokens(tokenizedWords);
    printf("\n");



    
  }
}
