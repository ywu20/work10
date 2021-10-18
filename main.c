#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include "Poke.h"

int main(){
  //srand(time (NULL));
  struct Poke * pika = insert_front(pika, 1, "pikachu");

  struct Poke * squi = insert_front(pika, 2, "squirtle");

  struct Poke * magn = insert_front(squi, 3, "magnemite");
  struct Poke * farf = insert_front(magn, 4, "farfetch'd");

  print_list (farf);
  struct Poke * b = remove_node(farf, 4, "farfetch'd");
  print_list (b);
  struct Poke * a = remove_node(b, 2, "squirtle");
  print_list (a);
  struct Poke * c = remove_node(a, 1, "pikachu");
  print_list (c);
  free_list(a);
  printf("squi: %p\n", squi);
  printf("pika: %p\n", pika);

  return 0;
}
