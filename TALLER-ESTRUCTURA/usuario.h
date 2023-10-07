#pragma once
#include <iostream>
#include <string>

using namespace std;

class Usuario{
    protected:
        //ATRIBUTOS
        string nombre;
        string contrasena;
        int edad;
        string correo;
        bool accederLog;

    public:
        //CONSTRUCTOR
        Usuario(string nombre, string contrasena, int edad, string correo, bool accederLog){
            this -> nombre = nombre;
            this -> contrasena = contrasena;
            this -> edad = edad;
            this -> correo = correo;
            this -> accederLog = accederLog;
        }

        //DESTRUCTOR
        ~Usuario(){
            cout << "Se ha eliminado un objeto Usuario" << endl;
        }

        //GETTERS
        string getNombre(){
            return this -> nombre;
        }
        string getContra(){
            return this -> contrasena;
        }
        int getEdad(){
            return this -> edad;
        }
        string getCorreo(){
            return this -> correo;
        }   
        bool getLog(){
            return this -> accederLog;
        }

        //SETTERS
        void setNombre(string nuevoNombre) {
            this -> nombre = nuevoNombre;
        }

        void setContrasena(string nuevaContrasena) {
            this -> contrasena = nuevaContrasena;
        }

        void setEdad(int nuevaEdad) {
            this -> edad = nuevaEdad;
        }

        void setCorreo(string nuevoCorreo) {
            this -> correo = nuevoCorreo;
        }

        void setAccederLog(bool nuevoAccederLog) {
            this -> accederLog = nuevoAccederLog;
        }
};

//CLASE ADMINISTRADOR
class Administrador : public Usuario {
    public:
        //CONSTRUCTOR   
        Administrador(string nombre, string contrasena, int edad, string correo, bool accederLog)
            : Usuario(nombre, contrasena, edad, correo, accederLog) {
        }

        //DESTRUCTOR
        ~Administrador() {
            cout << "Se ha eliminado un objeto Administrador" << endl;
        }
};

//CLASE USERNORMAL
class UserNormal : public Usuario {
    public:
        //CONSTRUCTOR   
        UserNormal(string nombre, string contrasena, int edad, string correo, bool accederLog)
            : Usuario(nombre, contrasena, edad, correo, accederLog) {
        }

        //DESTRUCTOR
        ~UserNormal() {
            cout << "Se ha eliminado un objeto Usuario Normal" << endl;
        }
};

//CLASE USERNIÑO
class UserNino : public Usuario {
    public:
        //CONSTRUCTOR   
        UserNino(string nombre, string contrasena, int edad, string correo, bool accederLog)
            : Usuario(nombre, contrasena, edad, correo, accederLog) {
        }

        //DESTRUCTOR
        ~UserNino() {
            cout << "Se ha eliminado un objeto Usuario niño" << endl;
        }
};