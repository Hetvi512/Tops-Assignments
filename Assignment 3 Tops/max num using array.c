#include <stdio.h>
int main()
 {
  int n,a[100],i;
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d",&n);
  for(i = 0; i < n; i++)
	{
    printf("Enter number %d: ", i + 1);
    scanf("%d", &a[i]);
	}

  for(i = 1; i < n;i++)
	{
    if (a[0] < a[i]) 
	{
      a[0] = a[i];
    }
	}

  printf("Largest element = %d", a[0]);

  return 0;
}
