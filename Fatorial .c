#include <stdio.h>
#include <stdlib.h>

int main ()

{
 float fat = 1;
 int n;

for (n = 1  ; n >= 20; n--) {
 fat *= n;
}
printf ("o fatorial é %f", fat);

return 0;
}
