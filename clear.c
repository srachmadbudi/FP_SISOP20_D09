// clear : Membersihkan terminal screen 
// hasilnya current line pada terminal screen akan hilang, namun tetap ada jika kita scroll ke atas.
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(int argc, char *argv[])
{
  printf(1, "\033[2J\033[1;1H\n");
  exit();
}
