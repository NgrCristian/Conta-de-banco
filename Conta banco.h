#include <stdio.h>

main()
{
	float sd, au, sd2, emp;
	int op, res;
	
	printf("Digite o saldo da conta:\n");
	scanf("%f",&sd);
	printf("Digite a opcao desejada: \n 1=saque/2=deposito/3=transferencia/4=emprestimo\n");
	scanf("%i",&op);
	printf("Valor desejado:\n");
	scanf("%f",&au);
	
	switch(op)
	{
		case 1:
			if(sd<=au){
				printf("IMPOSSIVEL FAZER O SAQUE");
			}
			else{
				res=sd-au;
				printf("O resultado eh:%.2i",res);
			}
			break;
		case 2:
			res = sd+au;
			printf("O resultado eh:%.2i",res);
			break;
		case 3:
			printf("Digite o valor da outra conta:\n");
			scanf("%f"&sd2);
			if(sd<=au){
				printf("IMPOSSIVEL FAZER TRANFERENCIA");
			}
			else{
				sd=sd-au;
				printf("Primeira conta ficou com:%.2f\n",sd);
				sd2=sd2+au;
				printf("Segunda conta ficou com:%.2f\n",sd2);
    }
			break;
		case 4:
			printf("Digite o valor desejado:\n");
			scanf("%f",emp);
			res = n1+emp;
			printf("O resultado eh:%i",res);
			break;
		default:
		    printf("VALOR INVALIDO!");				
	}
	
}
