#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

class Software{
    protected:
        //ATRIBUTOS
        string nombre;
        string developer;
        int clasificacionEdad;
        vector<Usuario*> listaUsuarios;
        double precio;
    public:
        //CONSTRUCTOR
        Software(string nombre, string developer, int clasificacionEdad, vector<Usuario*> listaUsuarios, double precio){
            this -> nombre = nombre;
            this -> developer = developer;
            this -> clasificacionEdad = clasificacionEdad;
            this -> listaUsuarios = listaUsuarios;
            this -> precio = precio;
        }

        //DESTRUCTOR
        ~Software(){
            cout << "Se ha destruido un objeto tipo software" << endl;
        }
        //AÑADIR/QUITAR USUARIO
        void anadirUsuario(Usuario* Usuario){
            this -> listaUsuarios.push_back(Usuario);
        }
        void eliminarUsuario(Usuario* usuario) {
            for (auto it = listaUsuarios.begin(); it != listaUsuarios.end(); ++it) {
                if (*it == usuario) {
                    listaUsuarios.erase(it);
                    break;
                }
            }
        }


        //GETTERS
        string getNombre(){
            return this -> nombre;
        }
        string getDeveloper(){
            return this -> developer;
        }
        int getClasificiacionEdad(){
            return this -> clasificacionEdad;
        }
        vector<Usuario*> getVectorUsuario(){
            return this -> listaUsuarios;
        }
        double getPrecio(){
            return this -> precio;
        }

        //SETTERS
        void setNombre(string nuevoNombre){
            this -> nombre = nuevoNombre;
        }
        void setDeveloper(string nuevoDeveloper){
            this -> developer = nuevoDeveloper;
        }
        void setClasificacion(int nuevaClasificacion){
            this -> clasificacionEdad = nuevaClasificacion;
        }
        void setListaUsuario(vector<Usuario*> nuevaLista){
            this -> listaUsuarios = nuevaLista;
        }
        void setPrecio(double nuevoPrecio){
            this -> precio = nuevoPrecio;
        }
};

// CLASE JUEGOS
class Juegos : public Software {
    private:
        string generos;
    public:
        // CONSTRUCTOR
        Juegos(string nombre, string developer, int clasificacionEdad, double precio, string generos)
            : Software(nombre, developer, clasificacionEdad, {}, precio), generos(generos) {
        }

        //GET Y SET
        string getGeneros(){
            return this -> generos;
        }
        void setGeneros(string nuevoGenero){
            this -> generos = nuevoGenero;
        }
};

// CLASE OFIMATICA
class Ofimatica : public Software {
    private:
        int cantidadArchivos;
    public:
        //CONSTRUCTOR
        Ofimatica(string nombre, string developer, int clasificacionEdad, double precio, int cantidadArchivos)
            : Software(nombre, developer, clasificacionEdad, {}, precio) {
            this -> cantidadArchivos = cantidadArchivos;
        }
        //METODO PROPIO
        void crearArchivos(){
            cantidadArchivos++;
        }
        void eliminarArchivos(){
            cantidadArchivos--;
        }
        //GET Y SET
        int getCantArchivos(){
            return this -> cantidadArchivos;
        }
        void setCantArchivos(int nuevoArchivo){
            this -> cantidadArchivos = nuevoArchivo;
        }
};

// CLASE PRODUCCION
class Produccion : public Software {
    private:
        string tipoSolucion;
    public:
        // CONSTRUCTOR
        Produccion(string nombre, string developer, int clasificacionEdad, double precio, string tipoSolucion)
            : Software(nombre, developer, clasificacionEdad, {}, precio), tipoSolucion(tipoSolucion) {
        }

        //GET Y SET
        string getTipoSolucion(){
            return this -> tipoSolucion;
        }
        void setTipoSolucion(string nuevaSolucion){
            this -> tipoSolucion = nuevaSolucion;
        }
};

// CLASE NAVEGADOR
class Navegador : public Software {
    private:
        queue<string> historialNavegacion;
        int contadorHistorial;
    public:
        // CONSTRUCTOR
        Navegador(string nombre, string developer, int clasificacionEdad, double precio)
            : Software(nombre, developer, clasificacionEdad, {}, precio) {
            contadorHistorial = 0;
        }

        //AÑADIR/QUITAR HISTORIAL
        void anadirCola(string pagina){
            historialNavegacion.push(pagina);
            contadorHistorial++;
            if(contadorHistorial<10){
                eliminarCola();
            }
        }
        void eliminarCola(){
            historialNavegacion.pop();
            contadorHistorial --;
        }
        queue<string> getHistorialNavegacion(){
            return this -> historialNavegacion;
        }
};

// CLASE SEGURIDAD
class Seguridad : public Software {
    private:
        string tipoMalware;
    public:
        // CONSTRUCTOR
        Seguridad(string nombre, string developer, int clasificacionEdad, double precio, string tipoMalware)
            : Software(nombre, developer, clasificacionEdad, {}, precio), tipoMalware(tipoMalware) {
        }
        //GET Y SET
        string getMalware(){
            return this -> tipoMalware;
        }
        void setMalware(string nuevoMalware){
            this -> tipoMalware = nuevoMalware;
        }
};

// CLASE SOCIAL
class Social : public Software {
    private: 
        vector<Usuario*> listaAmigos;
    public:
        // CONSTRUCTOR
        Social(string nombre, string developer, int clasificacionEdad, double precio)
            : Software(nombre, developer, clasificacionEdad, {}, precio) {
        }

        //AÑADIR/QUITAR AMIGO
        void anadirAmigo(Usuario* amigo){
            this -> listaAmigos.push_back(amigo);
        }
        void eliminarAmigo(Usuario* amigo) {
            for (auto it = listaAmigos.begin(); it != listaAmigos.end(); ++it) {
                if (*it == amigo) {
                    listaAmigos.erase(it);
                    break;
                }
            }
        }
};