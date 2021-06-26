//Decimal --> Octal

#include<stdio.h>
#include<math.h>
void main()
{
	int decimal_num,remainder,octal_num=0,i=0;
	printf("\n Enter the decimal number: ");
	scanf("%d",&decimal_num);
	while(decimal_num != 0)
	{
		remainder = decimal_num % 8;
		octal_num += remainder * pow(10,i);
		decimal_num /= 8;
		i++;
	}
	printf("\n The Octal equivalent = %d",octal_num);
	
}
