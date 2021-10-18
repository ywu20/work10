#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "Poke.h"

int main(){
  srand(time (NULL));
  struct Poke * pika = insert_front(pika, rand(), "pikachu");
  print_list(pika);
  struct Poke * squi = insert_front(pika, rand(), "squirtle");
  print_list(squi);

  free_list(squi);
  printf("squi: %p\n", squi);
  printf("pika: %p\n", pika);

  return 0;
}
