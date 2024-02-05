#include <iostream>;
using namespace std;

int main()
{

    int p, n;
	float r, si;

	printf("please input principal amount: ");
	scanf("%d",&p);

	printf("please input number of years: ");
	scanf("%d", &n);
//
	printf("please input rate of interst: ");
	scanf("%f", &r);
//
	si = (p*r*n)/100;
//
	printf("the interest is. %f," ,si);

	return 0;

}
