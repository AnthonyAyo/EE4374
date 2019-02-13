#ifndef _TOKENIZER_
#define _TOKENIZER_

// Count number of chars in the string
int string_length(char*);

//make sure the character c is a valid character to tokenize
char is_valid_character(char c);

//find the starting index for the next word
int find_word_start(char*,int);

//find the ending index for the next word
int find_word_end(char*, int);

//count number of strings in the string argument
int count_words(char*);

//print tokens
void print_tokens(char**);

// free all tokens and the array containing the tokens
void free_tokens(char**);

//tokenize the string into an array
char** argtok(char*);


#endif

  
