#include<iostream>
#include<fstream>
// #include<cstdlib>  
// #include<algorithm>
#include<cstdio>

using namespace std;

int main(int argc, char* argv[]){
    ifstream archivo("/home/figue/Documents/Codigos/EDA/Tareas/tarea2/figuini_EDA_tarea_2/test.html"); //hay que editar esto dependiendo el caso, pero en mi caso es asi.
    string texto;

    string palabras_reservadas[12] = {"<body>","</body>","<center>","</center>","<h1>","</h1>","<p>","</p>","<ol>","</ol>","<li>","</li>"};

    //este freopen sera para escribir en el main.log
    freopen("/home/figue/Documents/Codigos/EDA/Tareas/tarea2/figuini_EDA_tarea_2/main.log", "w", stdout); //hay que editar esto para que sea en tu caso
    
    if(archivo.fail()){
        cout<<"no se pudo abrir"<<endl;
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

        //en las siguientes lineas he hecho un codigo que encuentra las palabras reservadas en cada linea, 
        // ahora hay que ver si ocupamos stack  como en el ejercicio de los parentesis que subi 
        // o si intentamos hacer otra cosa.

        //posiblemante haremos un for o algo aqui, jajajajaja
        if (texto.find(palabras_reservadas[0]) != std::string::npos) {
            std::cout << "found!" << '\n';
        }
        if (texto.find(palabras_reservadas[1]) != std::string::npos) {
            std::cout << "found!" << '\n';
        }
        if (texto.find(palabras_reservadas[2]) != std::string::npos) {
            std::cout << "found!" << '\n';
        }
        if (texto.find(palabras_reservadas[3]) != std::string::npos) {
            std::cout << "found!" << '\n';
        }
        if (texto.find(palabras_reservadas[4]) != std::string::npos) {
            std::cout << "found!" << '\n';
        }
        if (texto.find(palabras_reservadas[5]) != std::string::npos) {
            std::cout << "found!" << '\n';
        }
        
    }

    archivo.close();
    std::fclose(stdout);
    // printf("me caes bien");
    return 0;
}