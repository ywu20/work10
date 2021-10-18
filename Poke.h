#ifndef Poke_h
#define Poke_h

struct Poke {int n; char name[15]; struct Poke * next;};
void print_list (struct Poke * poke);
struct Poke * insert_front(struct Poke * s, int num, char str[15]);
struct Poke * free_list(struct Poke * s);
struct Poke * remove_node (struct Poke * front, int data);

#endif
