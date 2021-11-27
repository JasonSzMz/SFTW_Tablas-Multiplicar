#include <iostream>


using namespace std;

int main(){
    system("cls");
    int data,resOP;

    printf("Bienvenido al programa de tablas de multiplicar\n\nIngresa el numero del que quieras conocer su tabla de multiplicar: ");
    cin >> data;

    for (int i=0; i<=10; i++){
        resOP = data*i;
        printf("%d x %d = %d\n",data,i,resOP);
    }
}

/////////////////////////////////////////    DO - WHILE ////////////////////////////////////////////////////////////////
/*
int main()
{
    system("cls");
    int data, multData = 1, resOp;
    printf("Bienvenido al programa de tablas de multiplicar\n\nIngresa el numero del que quieras conocer su tabla de multiplicar: ");
    cin >> data;

    do
    {
        resOp = data * multData;
        printf("%d x %d = %d\n",data, multData, resOp);
        multData++;
    } while (multData<=10);
}
*/

/////////////////////////////////////////  WHILE ////////////////////////////////////////////////////////////////
/*
int main()
{
    system("cls");
    int data,multData = 1,resOp;
    printf("Bienvenido al programa de tablas de multiplicar\n\nIngresa el numero del que quieras conocer su tabla de multiplicar: ");
    cin >> data;

     while (multData<=10){
          resOp = data * multData;
          printf("%d x %d = %d\n",data,multData,resOp);
          multData++;
     }
}
*/
