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
 struct Poke * p = malloc(sizeof(struct Poke));
  p->n =num;
  strcpy(p->name,str);
  p->next = s;
  return p;
}

struct Poke * free_list(struct Poke * s){
  while(s->next != NULL){
   
   s++;
   free (s);
  }
  return s;
}

int main(){
  struct Poke pika = {1, "pikachu", NULL};
  print_list(&pika);
  struct Poke * squi = insert_front(&pika, 3, "squirtle");
  print_list(squi);
  printf("pika: %p\n", &pika);
  srand(time (NULL));
  //struct Poke* squi = new_struct(rand(), "squirtle");
  //print_Poke(squi);
  //free(squi);
  return 0;
}
