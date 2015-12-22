#include <stdlib.h>
#include <stdio.h>

int main(){
  int return_value;
  return_value = system ("ls -l /");
  return return_value;
}

//you can see the return code in bash by echo $?
