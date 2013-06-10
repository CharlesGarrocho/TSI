typedef struct voo 
{
	char nome[6]; /*indicador do c�digo do voo*/
	int indicadorDP; /*indicador se o avi�o est? pousando ou decolando*/
	int comb; /*indicador de combust�vel*/
	struct voo* prox;
}Voo;

typedef struct fila 
{ /*estrutura que indica inicio e final de fila*/
	Voo* inicio;
	Voo* fim;
} fila;

fila* criaFila(void);/*fun��o para criar a fila*/

int filaVazia(fila*) ;/*fun��o para verificar se a fila esta vazia*/

Voo* criaVoo(fila*, int , int , int ); /*cria voo a ser inserido ao final da lista*/

void terminaFila(fila*);/*fun��o para terminar as listas*/

void imprime(fila*);/*fun��o para imprimir as filas*/

int geraNomeVoo(int*,int);/*fun��o para gerar n de voo aleatoriamente*/

int geraRand(int,int);/*fun��o para gerar numero aleatoriamente*/

void insereInicio(fila**,int,int,int);/*fun��o para inserir no inicio da fila*/

void insereFim(fila**,int,int,int);/*fun��o para inserir no final da fila*/

void setAux(int*);/*coloca -1 em todas as posi��es de aux*/