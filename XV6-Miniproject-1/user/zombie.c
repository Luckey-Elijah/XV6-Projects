// Create a zombie process that 
// must be reparented at exit.

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  // printf("PID:%d", getpid());
  // printf("count:%d", get_pid_count());
  if(fork() > 0)
    sleep(5);  // Let child exit before parent.
  exit();
}
