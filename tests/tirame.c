#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
  char 		*dst;
  char		*src;
  size_t	num;
  
  if (argc != 4)
	  printf("Usage ./tirame dest src num");
  else
  {
  	num = atoi(argv[3]);
 	dst = argv[1];
  	src = argv[2];
	printf("%ld %ld %ld\n", sizeof(*dst), sizeof(*src), sizeof(num));
	printf("%p %p\n", &dst[0], &src[0]);
  	//printf("dst src %s\n", memmove(dst, src, num));
  	printf("src dst %s\n", memmove(src, dst, num));
  }
  return 0;
}
