#ifndef _MUTEX_H_
#define _MUTEX_H_
#include "types.h"
#include "spinlock.h"

typedef struct mutex {
  volatile uint locked;
  struct spinlock lk;
  int pid;
} mutex;

#endif