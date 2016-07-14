/*

  WORMS.H
  =======
  (c) Copyright ranjithGeorge - 2014
  Email: ranjith.george.t@gmail.com

  Interface to worms functions

*/


#ifndef PG_WORMS_H
#define PG_WORMS_H


/*  Structures and typedefs  */

struct worm_part {
    struct worm_part * next;
    int x;
    int y;
};

typedef struct worm_part WORM;


/*  Macros  */

#define DOWN  1
#define UP    2
#define LEFT  3
#define RIGHT 4

#define WORMBIT  'O'
#define EMPTY    ' '
#define WORMFOOD 'X'


/*  Function prototypes  */

void InitWorm(void);
void MoveWorm(void);
void Draw(void);
void FreeWorm(void);


#endif  /* PG_WORMS_H  */

