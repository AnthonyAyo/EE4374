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
