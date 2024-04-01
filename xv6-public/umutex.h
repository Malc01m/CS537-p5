//Created by Ben Wirch bwirch@wisc.edu
#ifndef _UMUTEX_H_
#define _UMUTEX_H_

typedef struct {
    int locked;    // 0 = unlocked, 1 = locked
    int tid;       // Thread ID of owner of lock
} mutex;

void minit(mutex *m);
void macquire(mutex *m);
void mrelease(mutex *m);

#endif