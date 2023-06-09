

#include <stdio.h>


// 1) Faça uma função que retorne 1 se o número passado como argumento for positivo e -1 se for negativo e 0
se for ZERO. Protótipo:
int verPositividade(int valor)

int verPositividade(int valor){
    if (valor>0){
        return 1;
    }
    if (valor<0){
        return -1;
    } else{
        return 0;
    }
}
int main() {
    int x, r;
    printf("Digite um numero\n");
    scanf("%d",&x);
    r= verPositividade(x);
    printf("O valor eh: %d",r);
    return 0;
}

exercicio 2


// 2) Faça uma função que receba dois números inteiros e retorne a soma dos números inteiros existentes
entre eles. Por exemplo: Para os valores de entrada 2 e 10, a soma será 3+4+5+6+7+8+9.
int somarIntervalo(int n1, int n2)

int somarIntervalo(int n1, int n2){
    int cont,res=0;
    cont=n1;
    for (int i = n1; i < n2; ++i) {
        cont++;
        res=res+cont;
        if (cont==(n2-1)){
            return res;
        }
    }
    return res;
}
int main() {
    int x, y,r;
    printf("Digite o numero 1\n");
    scanf("%d",&x);
    
    printf("Digite o numero 2\n");
    scanf("%d",&y);
    
    r= somarIntervalo(x,y);
    printf("O valor eh: %d\n",r);

    return 0;
}

exercicio3


// 3) Faça uma função que receba três números inteiros: a, b e c, onde a>1; e retorne a soma de todos os
números inteiros de b até c que sejam divisíveis por a. Exemplo: Para os valores de entrada 2 (para a), 5
(para b) e 10 (para c), a soma será 6+8+10= 24.
int somarIntervalorDivisiveis(int a, int b, int c)


int somarIntervalorDivisiveis(int a, int b, int c){
    int res=0,t;
    for (int i = b; i <= c; ++i) {
        t=i%a;
        if (t==0){
            res=res+i;
        }
    }
    return res;
}
int main() {
    int va, vb,vc,r;
    printf("Digite o numero 1\n");
    scanf("%d",&va);
    
    printf("Digite o numero 2\n");
    scanf("%d",&vb);
   
    printf("Digite o numero 3\n");
    scanf("%d",&vc);
    
    r= somarIntervalorDivisiveis(va,vb,vc);
    printf("O valor eh: %d\n",r);

    return 0;
}

exercicio 4


//4) Faça uma função que receba três notas de um aluno e uma letra como parâmetros. Se a letra for A
(Aritmética), a função deve calcular e retornar a média aritmética das notas do aluno (p1+p2+p3)/3, e, se
for P (Ponderada) deve calcular e retornar a média ponderada com pesos 2, 4 e 5.
float calcularMedia(float nota1, float nota2, float nota3, char s)


float calcularMedia(float nota1, float nota2, float nota3, char s){
    float media;
    if (s=='A'){
        media=(nota1+nota2+nota3)/3;
        return media;
    }
    if (s=='B'){
        media=((nota1*2)+(nota2*4)+(nota3*5))/11;
        return media;
    }
}
int main() {
    float v1,v2,v3,r;
    char l;
    printf("Digite o numero 1\n");
    scanf("%f",&v1);

    printf("Digite o numero 2\n");
    scanf("%f",&v2);

    printf("Digite o numero 3\n");
    scanf("%f",&v3);

    printf("Digite o tipo\n");
    scanf(" %c",&l);

    r=calcularMedia(v1,v2,v3,l);
    printf("O valor eh: %.1f\n",r);

    return 0;
}

exercicio 5


// 5. Faça uma função que receba três notas de um aluno e os pesos de cada uma das provas. A, a função deve
calcular e retornar a média ponderada das notas do aluno.
float calcularMedia(float n1, float n2, float n3, int p1, int p2, int p3)


float calcularMedia(float nota1, float nota2, float nota3,int p1, int p2, int p3) {
    float m;
    m=((nota1*p1)+(nota2*p2)+(nota3*p3))/(p1+p2+p3);
    return m;
}
int main() {
    float n1,n2,n3,r;
    int a1,a2,a3;

    printf("Digite a nota 1\n");
    scanf("%f",&n1);
    
    printf("Digite a nota 2\n");
    scanf("%f",&n2);
    
    printf("Digite a nota 3\n");
    scanf("%f",&n3);
    
    printf("Digite o peso 1\n");
    scanf("%d",&a1);
    
    printf("Digite o peso 2\n");
    scanf("%d",&a2);
    
    printf("Digite o peso 3\n");
    scanf("%d",&a3);
    

    r=calcularMedia(n1,n2,n3,a1,a2,a3);
    printf("A media final eh: %.1f\n",r);

exercicio 6


// 6. Faça uma função que leia valores N valores entrados pelo usuário e imprima o maior e o menor valor. A
função deve receber como argumento o próprio N.
void ler(int n)

void ler(int n) {
    int maior,menor,cont=1,n1,i;
    printf("Digite o numero %d\n",cont);
    scanf("%d",&n1);
    menor=n1;
    maior=n1;
    for (i = n-1; i >0 ; --i) {
        cont++;
        printf("digite o numero %d\n",cont);
        scanf("%d",&n1);
        if (n1>maior){
            maior=n1;
        }
        if (n1<menor){
            menor=n1;
        }
    }
    printf("maior %d\n",maior);
    printf("menor %d\n",menor);
}
int main() {
    int n=0;
    printf("Digite quantos numeros vao entrar\n");
    scanf("%d",&n);
    ler(n);

    return 0;
}

exercicio 7


//7. Faça uma função que receba três valores inteiros e retorne a somatória do quadrado de cada um deles.
int somar(int a, int b, int c)

int somar(int a, int b, int c){
    int r;
    r=(a*a)+(b*b)+(c*c);
    
    printf("%d\n",r);
   
}
int main() {
    int a1,b1,c1;
    printf("entre com o numero a:\n");
    scanf("%d",&a1);
    printf("entre com o numero b:\n");
    scanf("%d",&b1);
    printf("entre com o numero c:\n");
    scanf("%d",&c1);
    somar(a1,b1,c1);


    return 0;
}


exercicio 8:
dentro do nain.c:
//#include <stdio.h>
//#include <stdlib.h>
//#include "data.h"

// 8. Faça uma função que receba por parâmetros 3 valores inteiros referentes ao dia, ao mês e ao ano. Retorne
//1 se for uma data válida e 0 se não formar uma data válida.
//int validarData(int dia, int mes, int ano);
//Lembre-se de verificar os anos bissextos. Regra:
//• São bissextos todos os anos múltiplos de 400, p.ex: 1600, 2000, 2400, 2800...
//• São bissextos todos os múltiplos de 4 e não múltiplos de 100, p.ex: 1996, 2004, 2008, 2012, 2016…
//• Não são bissextos todos os demais anos.



int main() {
    int d1,m1,a1,r1;
    printf("Digite o dia, mes e ano no formato dd/mm/aaaa\n");
    printf("digite o dia:\n");
    scanf("%d",&d1);
    printf("digite o mes:\n");
    scanf("%d",&m1);
    printf("digite o ano:\n");
    scanf("%d",&a1);

    r1= validarData(d1,m1,a1);

    printf("O valor do ano digitado eh: %d",r1);


    return 0;
}

dentro do data.c
//#include <stdio.h>
//#include <stdlib.h>
//#include "data.h"
int validarData(int dia,int mes,int ano){
    int teste1,teste2,teste3,jan1,fev2,mar3,abr4,mai5,jun6,jul7,ago8,set9,out10,nov11,dez12;
    teste1=ano%400;
    teste2=ano%4;
    teste3=ano%100;
    if (ano>0){

        if (mes>0&&mes<=12){
            if (mes==1){
                if (dia>0&&dia<=31){
                    return 1;
                }
            }
            if (mes==2){
                if (dia>0&&dia<=28){
                    return 1;
                }
                if (dia==29){
                    if (teste2==0){
                        if (ano<=100){
                            return 1;
                        }
                        if (ano>100&&ano<=400){
                            if (teste3==0||teste2==0){
                                return 1;
                            }
                        }
                        if (ano>400){
                                if (teste1!=0){
                                    return 1;
                            }
                        }
                    }
                }
            }
            if (mes==3){
                if (dia>0&&dia<=31){
                    return 1;
                }
            }
            if (mes==4){
                if (dia>0&&dia<=30){
                    return 1;
                }
            }
            if (mes==5){
                if (dia>0&&dia<=31){
                    return 1;
                }
            }
            if (mes==6){
                if (dia>0&&dia<=30){
                    return 1;
                }
            }
            if (mes==7){
                if (dia>0&&dia<=31){
                    return 1;
                }
            }
            if (mes==8){
                if (dia>0&&dia<=31){
                    return 1;
                }
            }
            if (mes==9){
                if (dia>0&&dia<=30){
                    return 1;
                }
            }
            if (mes==10){
                if (dia>0&&dia<=31){
                    return 1;
                }
            }
            if (mes==11){
                if (dia>0&&dia<=30){
                    return 1;
                }
            }
            if (mes==12){
                if (dia>0&&dia<=31){
                    return 1;
                }
            }
        }
    }
    return 0;
}

    return 0;
}