#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)  {
   printf(1, "The read function has been called %d times\n", readcount());
   exit();
}
