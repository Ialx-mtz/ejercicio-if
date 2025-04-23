#include <iostream>

using namespace std;

int main(){
   int note=0;

   cout << "Inserta tu calificacion" << endl;
   cin >> note;

   if (note>=90 and note<=100){

      cout << "Tu calificacion es excelente " << note << " Aprobaste" << endl;

      cout << "Felicidades por tu esfuerzo! " << endl;

   }else if (note>=80 and note<=89){

      cout << "Tu calificacion es muy buena " << note << " Aprobaste" << endl;

      cout << "Sigue asi :) " << endl;

   }else if (note>=70 and note <=79){
      
      cout << "Tu calificacion es buena " << note << " Aprobaste" << endl;

      cout << "Muy bien, pero puedes mejorar " << endl;

   }else if (note>=60 and note <=69){

      cout << "Tu calificacion es regular " << note << " Aprobaste" << endl;

      cout << "Aprobaste, pero puedes mejorar mucho mas! " << endl;

   }else if (note>=50 and note <=59){

      cout << "Tu calificacion es insuficiente " << note << " Aprobaste" << endl;

      cout << "Aprobaste por poco, estudia un poco mas " << endl;

   }else if (note>=0 and note <=49){

      cout << "Tu calificacion es muy baja" << note << " Reprobaste" << endl;

      cout << "Hazlo mejor la proxima vez " << endl;

   }else{

      cout << "Ingresa un numero valido entre el 0 y el 100" << endl;

   }

   cout << "Gracias por usar el programa, te esperamos la proxima vez :) " << endl;

   return 0;
}