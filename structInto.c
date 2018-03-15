/* declare.c */
/* Before we declare our header files, let me say that when you use a lot of pointers in your programs you may want to get into the habit of always including the following four header files.  */
#include <stdio.h> /* common input-output routines */
#include <stdlib.h> /* the dynamic memory management routines */
#include <ctype.h> /* the isalpha, ispunct ... character checking routines. */
#include <string.h> /* string manipulation routines */




int main(void)
{
	#if 1
	int base ;
	int height ;
	float Area ;

	scanf ( "%d", &base );
	scanf ( "%d", &height);

	Area = 0.5f * base * height;
	printf("The Area of Triangle is %f\n",Area);
	#endif
	

	

return 0;
}
