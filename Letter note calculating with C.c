#include <stdio.h>



int main() {
	
	int not;
	
	
	printf("Sayisal not girisi yapiniz : ");
	
	scanf("%d",&not);
	
	/* 
	
	AA 90-100

	BA 85-89

	BB 80-84

	CB 75-79

	CC 65-74

	DC 58-64

	DD 50-57

	FD 40-49

	FF 39 ve Altý 
	
	*/
	
	if (not >= 90 && not <= 100) 
		printf("Harf Notunuz AA ");
		else if ( not >= 85 && not <= 89 )
			printf("Harf Notunuz : BA");
		else if ( not >= 80 && not <= 84 )
			printf("Harf Notunuz : BB");
		else if ( not >= 75 && not <= 79 )
			printf("Harf Notunuz : CB");
		else if ( not >= 65 && not <= 74 )
			printf("Harf Notunuz : CC");
		else if ( not >= 58 && not <= 64 )
			printf("Harf Notunuz : DC");
		else if ( not >= 50 && not <= 57 )
			printf("Harf Notunuz : DD");			
		else if ( not >= 40 && not <= 49 )
			printf("Harf Notunuz : FD");
		else if ( not <= 39 && not >= 0 )
			printf("Harf Notunuz : FF");	
	
	
	return 0;
}
