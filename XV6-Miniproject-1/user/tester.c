// Do not modify this file. It will be replaced by the grading scripts
// when checking your project.

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "%s %d\n", "PID", getpid());
  printf(1, "%s %d\n", "Count:", get_pid_count());
  exit();
}
