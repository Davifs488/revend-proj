#include <iostream>

using namespace std;

int main()
{
   float n1,n2,n3,medturma;
   char  nome [30],nomerua[15],numrua[4] ;

   cout << " Digeite a primeira nota n1 : \n";
   cin >> n1;
   cout << "Digite a segunda nota n2 : \n";
   cin >> n2;
   cout << "Digite a terceira nota n3 : \n ";
   cin >> n3;
   cout << "Digite a media da turma ";
   cin >> medturma;

   float medialuno = ( n1 + n2 + n3)/3;

   cout << "Media final do aluno e : << medialuno << endl";
   if (medialuno < medturma){
    cout << "O aluno esta abaixo da media !";
   }else if (medialuno == medturma){
    cout << "O aluno esta na media !";
   }else {
   cout << "O aluno esta aciama da media !";
   }


       return 0;
}
