// clear : Membersihkan terminal screen 
// hasilnya current line pada terminal screen akan hilang, namun tetap ada jika kita scroll ke atas.

#include "types.h"
#include "user.h"

//rekursi 
void clear(int x)
{
  if(x=='x') return;
  printf(1,"\xa");
  clear(x+('1'-48));
}

int main(void)
{
  clear('A');
  exit();
}
