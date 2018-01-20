#include <stdio.h>
/* print Celsius-Farenheit table for fahr = 0, 20, ..., 300 */

main()
{
	printf("%s\t %s\n", "Celsius", "Farenheit");

	float celsius, farenheit;
	int lower, upper, step;

	lower = 0;  	/* lower limit of temperature table */
	upper = 300; 	/* upper limit */
	step = 20 ; 	/* step size */

	celsius = lower;
	while (celsius <= upper) {
		farenheit = ((9.0/5.0) * celsius) + 32 ;
		printf("%3.0f\t\t %6.1f\n", celsius, farenheit);
		celsius = celsius + step;
	}
}