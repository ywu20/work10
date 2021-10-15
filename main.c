#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
// struct
struct Poke {int n; char name[15]; struct Poke * next;};

// print struct
void print_list (struct Poke * poke){
  printf("{%d, %s, %p }\n", poke -> n, poke -> name, poke ->next);
}

//insert node in front
struct Poke * insert_front(struct Poke * s, int num, char str[15]){
  //create new struct
 struct Poke * p = malloc(sizeof(struct Poke));

 //initialize new struct
  p->n =num;
  strcpy(p->name,str);

  //set new struct's next to point to given struct
  p->next = s;
  return p;
}

//frees the linked list

struct Poke * free_list(struct Poke * s){
  while(s != NULL){
   //free current node
   free (s);

   //go to next node
   s=s->next;

  }
  return s;
}

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
