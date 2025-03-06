double	pix_cor_to_complexcor(double val, double min, double max, double range)
{
	return ((val / range) * (max - min) + min);
}
#include <stdio.h>
int main (void)
{
	for (int iter = 0; iter <= 100; iter++)
	{
	printf("%d -> %f\n", iter, pix_cor_to_complexcor((double)iter, -2, 2, 100));
	}
}
