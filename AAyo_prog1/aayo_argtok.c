#include <stdio.h>
#include <stdlib.h>
#include "aayo_argtok.h"

int string_length(char *p){
  char*pp =p;
  while(*p){
    p++;
  }
  return p-pp;
}

//checks to see if the character being looked at is valid
char is_valid_character(char c){
  if((c>=33||c<=126)){
    return 1;
  }else
    return 0;
}

// find the start of the next word
int find_word_start(char *p, int pos){
  int start = 0;
  int count = 0;
  p +=pos;
  char *str = p;

  while(*str){
    if(*str!=' '){
      str++;
    count++;
    }else if ((*str ==' ')&&(*(str+1)==' ')){
      str++;
      count++;
    }else if ((*str==' ')&&(*(str+1)!=' ')){
      start = count+1;
      return start;
    }
  }
}

//gets the starting position from find_word_start and continues on until a space is found

int find_word_end(char *p, int pos){
  int count = 0;
  int end = 0;
  char *str = &p[pos];

  while(*str){
    if(*str!=' '){
      str++;
      count++;
    }else if((*str==' ')&&(*(str-1)!=' ')){
      end = count-1;
      return end;
    }
  }
}

// Count the ammount of words in the user input
int count_words(char *p){
  int wordCount = 0;
  char *t=p;
  int length = 0;
  while(*t){
    if(*t == ' '}{
      length = 0;
    }else if (++legth == 1){
      wordCount++;
      *t++;
    }
  }
  return wordCount;
}
void print_tokens(char **p){
  char **temp = p;
  while(*temp !=null){
    printf("The tokenized words are :%cn",*temp);
  }
}

// free the space used up by malloc
void free_tokens(char **p){
  char **array = p;
  while(*array){
    free(*array);
  }
}

char** argtok(char *p){
  int numberOfWords = count_words(p);
  int count = 0;
  int start;
  int end;
  int wordLength;
  int position = 0;
  char ** tokens = (char **)malloc((numberOfWords+1)*sizeof(char*));
  for(int i = 0; i < numberOfWords; i++){
      start = find_word_start(p,position);
      end = find_word_end(p,start);
      wordLength = end - start;
      char *word = (char *)malloc((wordLength+1)*sizeof(char*));
      for (int j = start; j < end; j++){
	*(word+count) = *(p+start);
	count++;
	start++;
      }
	*(tokens+i) = word;
      position = end+1;
  }
  return tokens;
}
  






       





  

