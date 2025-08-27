/* R. Fabbri, 2024 */
#include "sorted_merge_3way.h"
#include <climits>

bool
sorted_merge_3way(
    const int *list_a, int na,
    const int *list_b, int nb,
    const int *list_c, int nc,
    int *list_abc)
{
  int i = 0, j = 0, k = 0, m = 0;

  for(int count = 0; count < na-1;count++)
  {
    if(list_a[count]> list_a[count+1])
    {
      return false;
    }
  }   
  for(int count = 0; count < nb-1;count++)
  {
    if(list_b[count]> list_b[count+1])
    {
      return false;
    }
  } 
  for(int count = 0; count < nc-1;count++)
  {
    if(list_c[count]> list_c[count+1])
    {
      return false;
    }
  }

  while (i < na || j < nb || k < nc) {
    int val_a = (i < na) ? list_a[i] : __INT_MAX__;
    int val_b = (j < nb) ? list_b[j] : __INT_MAX__;
    int val_c = (k < nc) ? list_c[k] : __INT_MAX__;
    

    if (val_a <= val_b && val_a <= val_c) {
      list_abc[m++] = val_a;
      i++;
     }else if (val_b <= val_a && val_b <= val_c) {
        list_abc[m++] = val_b;
        j++;
     }else {
        list_abc[m++] = val_c;
        k++;
     }
    }

  return true;
}
