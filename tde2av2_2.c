//Exercício 1: Crie um programa que leia uma string e exiba seu conteúdo. 
//Em seguida, exiba o comprimento da string usando a função strlen().

#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	
	printf("digite uma string: ");
	fgets(str, sizeof(str), stdin);
	
	//remover o caractere de nova linha do final da string, se existir
	str[strcspn(str, "\n")] = '\0';
	
	printf("conteúdo da string: %s\n", str);
	printf("Comprimento da string: %zu\n", strlen(str));
		
	return 0;
}

//Exercício 2: Implemente um programa que leia duas strings do usuário e verifique se elas são iguais. 
//Exiba uma mensagem informando se as strings são iguais ou diferentes. 
//Use a função strcmp() para a comparação.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remover o caractere de nova linha

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remover o caractere de nova linha

    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}

//Exercício 3: Escreva um programa que leia uma string do usuário e exiba cada caractere da string em uma linha separada.
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Exibir cada caractere em uma linha separada
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {  // Ignorar o caractere de nova linha
            printf("%c\n", str[i]);
        }
    }

    return 0;
}

//Exercício 4: Implemente um programa que leia uma string e verifique quantas vezes o caractere 'a' aparece nela. Exiba o total de ocorrências.
#include <stdio.h>

int main() {
    char str[100];
    int i, cont = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Contar as ocorrências do caractere 'a'
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            cont++;
        }
    }

    printf("O caractere 'a' aparece %d vezes na string.\n", cont);

    return 0;
}

//2. Manipulação de Strings com Funções de Biblioteca
//Exercícios para introduzir funções padrão da biblioteca <string.h> para manipulação de strings.

//Exercício 5: Crie um programa que leia uma string e a copie para outra variável usando a função strcpy(). 
//Exiba as duas strings para verificar se a cópia foi bem-sucedida.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite uma string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remover o caractere de nova linha do final da string, se existir
    str1[strcspn(str1, "\n")] = '\0';

    // Copiar str1 para str2 usando strcpy
    strcpy(str2, str1);

    printf("String original: %s\n", str1);
    printf("String copiada: %s\n", str2);

    return 0;
}

//Exercício 6: Implemente um programa que leia duas strings e as concatene em uma nova string. 
//Use a função strcat() para realizar a concatenação e exiba o resultado.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remover o caractere de nova linha

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remover o caractere de nova linha

    // Inicializar a string de resultado com a primeira string
    strcpy(result, str1);

    // Concatenar a segunda string à primeira
    strcat(result, str2);

    printf("String concatenada: %s\n", result);

    return 0;
}
//Exercício 7: Escreva um programa que leia uma string e substitua todos os caracteres minúsculos por maiúsculos. 
//Utilize a função toupper() da biblioteca <ctype.h> para auxiliar na conversão.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Converter caracteres minúsculos para maiúsculos
    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("String convertida: %s\n", str);

    return 0;
}
//Exercício 8: Implemente um programa que leia uma string e conte o número de vogais presentes nela. 
//Considere as vogais 'a', 'e', 'i', 'o', 'u' (maiúsculas e minúsculas).
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Contar as vogais na string
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Converter caractere para minúsculo para facilitar a comparação
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("O número de vogais na string é: %d\n", count);

    return 0;
}

//Exercício 9: Crie um programa que leia uma string e conte o número de espaços em branco nela. Exiba o total de espaços.

#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Contar os espaços em branco na string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    printf("O número de espaços em branco na string é: %d\n", count);

    return 0;
}

//Exercício 10: Escreva um programa que leia uma string e conte o número de letras, dígitos e caracteres especiais presentes nela. 
//Use as funções isalpha() e isdigit() da biblioteca <ctype.h> para verificar o tipo de cada caractere.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, letters = 0, digits = 0, special = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Analisar e contar os tipos de caracteres na string
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isspace(str[i])) { // Considerar caracteres especiais, ignorando espaços
            special++;
        }
    }

    printf("Número de letras: %d\n", letters);
    printf("Número de dígitos: %d\n", digits);
    printf("Número de caracteres especiais: %d\n", special);

    return 0;
}


