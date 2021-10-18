#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// struct
struct Poke {int n; char name[15]; struct Poke * next;};

// print struct
void print_list (struct Poke * poke){
  while(poke){
  printf("{%d, %s, %p }\n", poke -> n, poke -> name, poke ->next);
  poke = poke ->next;
}
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
  struct Poke * temp = s;
  while(s){
   s = s->next;
   //free current node
   free (temp);

   //go to next node
   temp=s;

  }
  return s;
}

// remove first node with p_n and p_name
struct Poke * remove_node (struct Poke * front, int p_n, char p_name[15]){
  // if the current node is not null
  if(front){
    if(((front -> n) == p_n) && (strcmp((front->name), p_name) == 0)){
    struct Poke * out = front -> next;
      free(front);
      return out;
    }else{
      front -> next = remove_node(front ->next, p_n, p_name);
    }
  }
  return front;
}
