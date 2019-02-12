#include <stdio.h>
#include <stdlib.h>
#include "aayo_argtok.c"
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
    printf("What statement would you like to tokenize ? \n ");
    fgets(str,100,stdin);
    int c = string_length(str);
    int startPos = find_word_start(str,0);
    int endPos = find_word_end(str,startPos);
    int wordCount = count_words(str);
    char **tokenizedWords = argtok(str);
    printf("The start of the next word is located in position : %d\n", startPos);




    
  }








}
