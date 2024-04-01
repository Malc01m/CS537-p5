//Created by Ben Wirch bwirch@wisc.edu

#include "umutex.h"
#include "user.h"

// Initialize the mutex
void minit(mutex *m) {
    m->locked = 0;
    m->tid = -1; // -1 is the uninitialized value
}

// Acquire the mutex
void macquire(mutex *m) {
    // Make system call to acquire lock
    syscall_acquire_lock(m);
}

// Release the mutex
void mrelease(mutex *m) {
    // Make system call to release lock
    syscall_release_lock(m);
}