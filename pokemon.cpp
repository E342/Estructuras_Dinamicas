#include <iostream>
#include <string>
using namespace std;

enum tipo{agua, fuego, veneno, planta, bicho, volador, tierra, hielo, acero, roca, dragon, psiquico, lucha, hada, normal, electrico};
struct Pokemon{
    string nombre;
    int indice;
    tipo t1;
    tipo t2;
};

// Funciones que dependen del tipo de dato de los nodos
Pokemon solicitarDato(){
    Pokemon unPokemon;
    cout << "Nombre del pokemon: ";
    getline(cin, unPokemon.nombre);
    cout << "indice: ";
    cin >> unPokemon.indice; cin.ignore();
    bool continuar = true;
    do{
        char opcion = 0;
        cout << "Tipo 1 de pokemon: 1-agua|2-fuego|3-veneno|4-planta|5-bicho|6-volador|7-tierra|8-hielo|9-acero|10-roca|11-dragon|12-psiquico|13-lucha|14-hada|15-normal|16-electrico: \n";
        cin >> opcion;
        switch(opcion){
            case '1': unPokemon.t1 = agua; continuar = false; break;
            case '2': unPokemon.t1 = fuego; continuar = false; break;
            case '3': unPokemon.t1 = veneno; continuar = false; break;
            case '4': unPokemon.t1 = planta; continuar = false; break;
            case '5': unPokemon.t1 = bicho; continuar = false; break;
            case '6': unPokemon.t1 = volador; continuar = false; break;
            case '7': unPokemon.t1 = tierra; continuar = false; break;
            case '8': unPokemon.t1 = hielo; continuar = false; break;
            case '9': unPokemon.t1 = acero; continuar = false; break;
            case '10': unPokemon.t1 = roca; continuar = false; break;
            case '11': unPokemon.t1 = dragon; continuar = false; break;
            case '12': unPokemon.t1 = psiquico; continuar = false; break;
            case '13': unPokemon.t1 = lucha; continuar = false; break;
            case '14': unPokemon.t1 = hada; continuar = false; break;
            case '15': unPokemon.t1 = normal; continuar = false; break;
            case '16': unPokemon.t1 = electrico; continuar = false; break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    }while(continuar);
    do{
        char opcion = 0;
        cout << "Tipo 2 de pokemon: 1-agua|2-fuego|3-veneno|4-planta|5-bicho|6-volador|7-tierra|8-hielo|9-acero|10-roca|11-dragon|12-psiquico|13-lucha|14-hada|15-normal|16-electrico: \n";
        cin >> opcion;
        switch(opcion){
            case '1': unPokemon.t2 = agua; continuar = false; break;
            case '2': unPokemon.t2 = fuego; continuar = false; break;
            case '3': unPokemon.t2 = veneno; continuar = false; break;
            case '4': unPokemon.t2 = planta; continuar = false; break;
            case '5': unPokemon.t2 = bicho; continuar = false; break;
            case '6': unPokemon.t2 = volador; continuar = false; break;
            case '7': unPokemon.t2 = tierra; continuar = false; break;
            case '8': unPokemon.t2 = hielo; continuar = false; break;
            case '9': unPokemon.t2 = acero; continuar = false; break;
            case '10': unPokemon.t2 = roca; continuar = false; break;
            case '11': unPokemon.t2 = dragon; continuar = false; break;
            case '12': unPokemon.t2 = psiquico; continuar = false; break;
            case '13': unPokemon.t2 = lucha; continuar = false; break;
            case '14': unPokemon.t2 = hada; continuar = false; break;
            case '15': unPokemon.t2 = normal; continuar = false; break;
            case '16': unPokemon.t2 = electrico; continuar = false; break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    }while(continuar);
    return unPokemon;
}
void mostrarDato(Pokemon unPokemon){
    cout << "Nombre del pokemon: " << unPokemon.nombre;
    cout << "Indice: " << unPokemon.indice;
    cout <<"Tipo 1 de pokemon: ";
    switch(unPokemon.t1){
            case agua: cout << "agua" << endl; break;
            case fuego: cout << "fuego" << endl; break;
            case veneno: cout << "veneno" << endl; break;
            case planta: cout << "planta" << endl; break;
            case bicho: cout << "bicho" << endl; break;
            case volador: cout << "volador" << endl; break;
            case tierra: cout << "tierra" << endl; break;
            case hielo: cout << "hielo" << endl; break;
            case acero: cout << "acero" << endl; break;
            case roca: cout << "roca" << endl; break;
            case dragon: cout << "dragon" << endl; break;
            case psiquico: cout << "psiquico" << endl; break;
            case lucha: cout << "lucha" << endl; break;
            case hada: cout << "hada" << endl; break;
            case normal: cout << "normal" << endl; break;
            case electrico: cout << "electrico" << endl; break;
    }
    cout <<"Tipo 2 de pokemon: ";
    switch(unPokemon.t2){
            case agua: cout << "agua" << endl; break;
            case fuego: cout << "fuego" << endl; break;
            case veneno: cout << "veneno" << endl; break;
            case planta: cout << "planta" << endl; break;
            case bicho: cout << "bicho" << endl; break;
            case volador: cout << "volador" << endl; break;
            case tierra: cout << "tierra" << endl; break;
            case hielo: cout << "hielo" << endl; break;
            case acero: cout << "acero" << endl; break;
            case roca: cout << "roca" << endl; break;
            case dragon: cout << "dragon" << endl; break;
            case psiquico: cout << "psiquico" << endl; break;
            case lucha: cout << "lucha" << endl; break;
            case hada: cout << "hada" << endl; break;
            case normal: cout << "normal" << endl; break;
            case electrico: cout << "electrico" << endl; break;
    }
}

enum comparacion{menorque,mayorque,igualque};

bool comparar(Pokemon a, comparacion operador, Pokemon b){
    bool resultado = false;
    switch(operador){
        case menorque: resultado = a.indice < b.indice; break;
        case mayorque: resultado = a.indice > b.indice; break;
        case igualque: resultado = a.indice == b.indice; break;
    }
    return resultado;
}

//------ Creacion de nodo y de arbol ------
typedef Pokemon T;

struct Nodo{
    T info;
    struct Nodo *izq;
    struct Nodo *der;
};
typedef struct Nodo *Arbol;

Arbol crearArbol(T x);

//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, T unDato);
void asignarDer(Arbol a, T unDato);
void agregarNodo(Arbol a);

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a);
void inorden(Arbol a);
void postorden(Arbol a);
void recorrerArbol(Arbol a);
void crearPersonalizado(Arbol p);

int main(){
    cout<<"Inicializando arbol...\nValor contenido en la raiz:\n";
    Arbol arbol = crearArbol(solicitarDato());
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\nMenu: \n";
        cout << "\t1) Agregar pokemon.\n";
        cout << "\t2) Recorrer arbol.\n";
        cout << "\t3) Salir.\n";
        cout << "\tOpcion elegida: ";
        cin >> opcion; cin.ignore();
        switch(opcion){
            case 1: agregarNodo(arbol); break;
            case 2: recorrerArbol(arbol); break;
            case 3: continuar = false; break;
            default: cout << "Opcion erronea!" << endl; break;
        }
    }while(continuar);
    
    return 0;
}

// Implementacion de funciones de arboles
Arbol crearArbol(T x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, T unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, T unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a){
    //solicitar informacion (dato a agregar)
    cout << "Dato a agregar:\n";
    T unDato = solicitarDato();
    
    Arbol p = a;
    
    //desplazarse hasta el lugar adecuado
    while(true){
        if(comparar(unDato, igualque, p->info)){
            cout << "Error: dato ya existe!" << endl;
            return;
        }
        else if(comparar(unDato, menorque, p->info)){//ir a la izquierda
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    //agregar el nuevo nodo
    if(comparar(unDato, menorque, p->info))
        asignarIzq(p, unDato);
    else
        asignarDer(p, unDato);
}

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a){
    if(a != NULL){
        cout << "\n"; mostrarDato(a->info);
        preorden(a->izq);
        preorden(a->der);
    }
}
void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << "\n"; mostrarDato(a->info);
        inorden(a->der);
    }
}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout << "\n"; mostrarDato(a->info);
    }
}

void recorrerArbol(Arbol a){
    cout << "\nRecorrido PRE orden:-----"; preorden(a); cout << endl;
    cout << "\nRecorrido IN orden:-----"; inorden(a); cout << endl;
    cout << "\nRecorrido POST orden:-----"; postorden(a); cout << endl;
}