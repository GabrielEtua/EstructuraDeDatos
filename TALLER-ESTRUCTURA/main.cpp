#include <iostream>
#include <vector>
#include "software.h"
#include "usuario.h"

using namespace std;

vector<Usuario*> cargar15usuarios(vector<Usuario*> vectorUsuario){
    vectorUsuario = {
        new Administrador("Esteban","pass121",15,"correo1@gmail.com",true),
        new UserNino("Niño1","pass122",10,"",false),
        new UserNino("Niño2","pass123",11,"",false),
        new UserNino("Niño3","pass124",12,"",false),
        new UserNino("Niño4","pass125",13,"",false),
        new UserNormal("Usuario1","pass126",20,"correo2@gmail.com",false),
        new UserNormal("Usuario2","pass127",21,"correo3@gmail.com",false),
        new UserNormal("Usuario3","pass128",22,"correo4@gmail.com",false),
        new UserNormal("Usuario4","pass129",23,"correo5@gmail.com",false),
        new UserNormal("Usuario5","pass130",24,"correo6@gmail.com",false),
        new UserNormal("Usuario6","pass131",25,"correo7@gmail.com",false),
        new UserNormal("Usuario7","pass132",26,"correo8@gmail.com",false),
        new UserNormal("Usuario8","pass133",27,"correo9@gmail.com",false),
        new UserNormal("Usuario9","pass134",28,"correo10@gmail.com",false),
        new UserNormal("Usuario10","pass135",29,"correo11@gmail.com",false)
    };
    return vectorUsuario;
}

vector<Software*> cargar20juegos(vector<Software*> vectorJuegos){
    vectorJuegos = {
        new Juegos("Juego1", "Desarrollador1", 21, 34.99, "FPS"),
        new Juegos("Juego2", "Desarrollador2", 21, 34.99, "FPS"),
        new Juegos("Juego3", "Desarrollador3", 21, 29.99, "MMO"),
        new Juegos("Juego4", "Desarrollador4", 21, 29.99, "MMO"),
        new Juegos("Juego5", "Desarrollador5", 21, 2.99, "PUZZLE"),
        new Juegos("Juego6", "Desarrollador6", 10, 2.99, "PUZZLE"),
        new Juegos("Juego7", "Desarrollador7", 10, 50.99, " ACCION"),
        new Juegos("Juego8", "Desarrollador8", 10, 50.99, " ACCION"),
        new Juegos("Juego9", "Desarrollador9", 10, 70.99, "PLATAFORMA"),
        new Juegos("Juego10", "Desarrollador10", 12, 70.99, "PLATAFORMA"),
        new Juegos("Juego11", "Desarrollador11", 12, 40.99, "RTS"),
        new Juegos("Juego12", "Desarrollador12", 12, 40.99, "RTS"),
        new Juegos("Juego13", "Desarrollador13", 12, 20.99, "DEPORTES"),
        new Juegos("Juego14", "Desarrollador14", 12, 20.99, "DEPORTES"),
        new Juegos("Juego15", "Desarrollador15", 12, 19.99, "CARRERAS"),
        new Juegos("Juego16", "Desarrollador16", 12, 19.99, "CARRERAS"),
        new Juegos("Juego17", "Desarrollador17", 12, 29.99, "ROL"),
        new Juegos("Juego18", "Desarrollador18", 12, 29.99, "ROL"),
        new Juegos("Juego19", "Desarrollador19", 12, 9.99, "SIMULACION"),
        new Juegos("Juego20", "Desarrollador20", 12, 9.99, "SIMULACION")
    };
    return vectorJuegos;
}
vector<Software*> cargar5ofimatica(vector<Software*> vectorOfimatica){
    vectorOfimatica = {
        new Ofimatica("Ofimatica1", "Desarrollador1", 0, 110.99, 1),
        new Ofimatica("Ofimatica2", "Desarrollador2", 0, 120.99, 1),
        new Ofimatica("Ofimatica3", "Desarrollador3", 0, 130.99, 1),
        new Ofimatica("Ofimatica4", "Desarrollador4", 0, 140.99, 1),
        new Ofimatica("Ofimatica5", "Desarrollador5", 0, 150.99, 1)
    };
    return vectorOfimatica;
}
//SOLO +18
vector<Software*> cargar4produccion(vector<Software*> vectorProduccion){
    vectorProduccion = {
        new Produccion("Produccion1", "Desarrollador1", 21, 110.99, "video"),
        new Produccion("Produccion2", "Desarrollador2", 21, 120.99, "musica"),
        new Produccion("Produccion3", "Desarrollador3", 21, 130.99, "straming"),
        new Produccion("Produccion4", "Desarrollador4", 21, 140.99, "fotos")
    };
    return vectorProduccion;
}
vector<Software*> cargar2navegadores(vector<Software*> vectorNavegador){
    vectorNavegador = {
        new Navegador("Navegador1", "Desarrollador1", 21, 110.99),
        new Navegador("Navegador2", "Desarrollador2", 21, 120.99)
    };
    return vectorNavegador;
}
//SOLO ADMINISTRADORES
vector<Software*> cargar6seguridad(vector<Software*> vectorSeguridad){
    vectorSeguridad = {
        new Seguridad("Seguridad1", "Desarrollador1", 21, 110.99, "Ransomware"),
        new Seguridad("Seguridad2", "Desarrollador2", 21, 120.99, "Spyware"),
        new Seguridad("Seguridad3", "Desarrollador3", 21, 130.99, "botnets"),
        new Seguridad("Seguridad4", "Desarrollador4", 21, 140.99, "rootkits"),
        new Seguridad("Seguridad5", "Desarrollador5", 21, 150.99, "gusanos"),
        new Seguridad("Seguridad6", "Desarrollador6", 21, 160.99, "troyanos")
    };
    return vectorSeguridad;
}
//SOLO USUARIOS CON +2 AMIGOS (niños amigos solo de otros niños)
vector<Software*> cargar2social(vector<Software*> vectorSocial){
    vectorSocial = {
        new Social("Social1", "Desarrollador1", 4, 2.99),
        new Social("Social2", "Desarrollador2", 4, 1.99)
    };
    return vectorSocial;
}


int main(){
    //USUARIOS
    vector<Usuario*> vectorUsuario;
    vectorUsuario = cargar15usuarios(vectorUsuario);

    //JUEGOS
    vector<Software*> vectorJuegos;
    vectorJuegos = cargar20juegos(vectorJuegos);
    //OFIMATICA
    vector<Software*> vectorOfimatica;
    vectorOfimatica = cargar5ofimatica(vectorOfimatica);
    //PRODUCCION
    vector<Software*> vectorProduccion;
    vectorProduccion = cargar4produccion(vectorProduccion);
    //NAVEGADOR
    vector<Software*> vectorNavegador;
    vectorNavegador = cargar2navegadores(vectorNavegador);
    //SEGURIDAD
    vector<Software*> vectorSeguridad;
    vectorSeguridad = cargar6seguridad(vectorSeguridad);
    //SOCIAL
    vector<Software*> vectorSocial;
    vectorSocial = cargar2social(vectorSocial);

    /*
    string genero = static_cast<Juegos*>(vectorJuegos[7])->getGeneros();
    cout << "hola " << genero << endl; 
    */

    bool login = false;
    Usuario* usuActual = nullptr;

    while (true){
        cout << "Menu Principal: " << endl;
        if(!login){
            cout << "1. Iniciar sesion" << endl;
            cout << "2. Salir." << endl;
        }
        else{
            cout << "3. Comprar software y añadir a biblioteca" << endl;
            cout << "4. Eliminar software de la biblioteca" << endl;
            cout << "5. Buscar software en la biblioteca" << endl;
            cout << "6. Acceder al log del software" << endl;
            cout << "7. Cerrar sesion" << endl;
            cout << "8. Salir" << endl;
        }
        
        int opcion;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;

        if (!login) {
            if (opcion == 1) {
                // Implementar la lógica de inicio de sesión
                // Verificar usuario y contraseña
                // Establecer isLoggedIn y usuarioActual en consecuencia
                string nombre, contrasena;
                cout << "Ingrese nombre y contraseña: " << endl;
                cout << "nombre: ";
                cin >> nombre;
                cout << "contraseña: ";
                cin >> contrasena;
                int i;
                for (i = 0; i < vectorUsuario.size(); i++) {
                    if (vectorUsuario[i]->getNombre() == nombre && vectorUsuario[i]->getContra() == contrasena) {
                        cout << "Inicio de sesion exitoso" << endl;
                        login = true;
                        usuActual = vectorUsuario[i];
                        break;
                    }
                }
            } else if (opcion == 2) {
                cout << "Saliendo del programa." << endl;
                break;
            } else {
                cout << "Opcion invalida. Ingrese una opcion valida." << endl;
            }
        } 
        else {
            //VARIABLES DECLARADAS
            string nombreSoftware;
            int opcionSoft;
            int opcionAnadir;
            int iteradorGeneral;
            switch (opcion) {
                case 3:{
                    // Implementar la lógica para agregar software
                    cout << "Menu añadir: " << endl;
                    cout << "1. Software juegos" << endl;
                    cout << "2. Software ofimatica" << endl;
                    cout << "3. Software produccion" << endl;
                    cout << "4. Software navegador" << endl;
                    cout << "5. Software seguridad" << endl;
                    cout << "6. Software social" << endl;

                    cout << "Elija opcion: ";
                    cin >> opcionAnadir;
                    switch (opcionAnadir){
                        case 1:{
                            //VECTOR JUEGOS
                            for(int i=0;i<vectorJuegos.size();i++){
                                cout << i << vectorJuegos[i]->getNombre() << vectorJuegos[i]->getDeveloper()<< endl;
                            }
                            cout << "Elija un juego (la iteradora)" << endl;
                            cout << "juego:";
                            cin >> iteradorGeneral;
                            usuActual->addSoftware(vectorJuegos[iteradorGeneral]);
                            vectorJuegos[iteradorGeneral]->addUsuario(usuActual);
                            break;
                            }
                        case 2:{
                            //VECTOR OFIMATICA
                            for(int i=0;i<vectorOfimatica.size();i++){
                                cout << i << vectorOfimatica[i]->getNombre() << vectorOfimatica[i]->getDeveloper() << endl;
                            }
                            cout << "Elija un software de ofimatica (iteracion)" << endl;
                            cout << "ofimatica:";
                            cin >> iteradorGeneral;
                            usuActual->addSoftware(vectorOfimatica[iteradorGeneral]);
                            vectorJuegos[iteradorGeneral]->addUsuario(usuActual);
                            break;
                        }
                        case 3:{
                            //VECTOR PRODUCCION
                            for(int i=0;i<vectorProduccion.size();i++){
                                cout << i << vectorProduccion[i]->getNombre() << vectorProduccion[i]->getDeveloper() << endl;
                            }
                            cout << "Elija un software de produccion (iteracion)" << endl;
                            cout << "produccion:";
                            cin >> iteradorGeneral;
                            usuActual->addSoftware(vectorProduccion[iteradorGeneral]);
                            vectorJuegos[iteradorGeneral]->addUsuario(usuActual);
                            break;
                        }
                        case 4:{
                            //VECTOR NAVEGADOR
                            for(int i=0;i<vectorNavegador.size();i++){
                                cout << i << vectorNavegador[i]->getNombre() << vectorNavegador[i]->getDeveloper() << endl;
                            }
                            cout << "Elija un software de navegacion (iteracion)" << endl;
                            cout << "navegacion:";
                            cin >> iteradorGeneral;
                            usuActual->addSoftware(vectorNavegador[iteradorGeneral]);
                            vectorJuegos[iteradorGeneral]->addUsuario(usuActual);
                            break;
                        }
                        case 5:{
                            //VECTOR SEGURIDAD
                            for(int i=0;i<vectorSeguridad.size();i++){
                                cout << i << vectorSeguridad[i]->getNombre() << vectorSeguridad[i]->getDeveloper() << endl;
                            }
                            cout << "Elija un software de seguridad (iteracion)" << endl;
                            cout << "seguridad:";
                            cin >> iteradorGeneral;
                            usuActual->addSoftware(vectorSeguridad[iteradorGeneral]);
                            vectorJuegos[iteradorGeneral]->addUsuario(usuActual);
                            break;
                        }
                        case 6:{
                            //VECTOR SOCIAL
                            for(int i=0;i<vectorSocial.size();i++){
                                cout << i << vectorSocial[i]->getNombre() << vectorSocial[i]->getDeveloper() << endl; 
                            }
                            cout << "Elija un software de social (iteracion)" << endl;
                            cout << "social:";
                            cin >> iteradorGeneral;
                            usuActual->addSoftware(vectorSocial[iteradorGeneral]);
                            vectorJuegos[iteradorGeneral]->addUsuario(usuActual);
                            break;
                        }
                        default:{
                            cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
                            break;
                    }
                    }
                    break;
                }
                case 4:{
                    // Implementar la lógica para eliminar software
                    cout << "Menu Eliminacion: " << endl;
                    cout << "1. Software juegos" << endl;
                    cout << "2. Software ofimatica" << endl;
                    cout << "3. Software produccion" << endl;
                    cout << "4. Software navegador" << endl;
                    cout << "5. Software seguridad" << endl;
                    cout << "6. Software social" << endl;

                    cout << "Ingrese una opcion";
                    cin >> opcionSoft;

                    switch (opcionSoft) {
                        case 1:{
                            //VECTOR JUEGOS
                            for (int i = 0; i < vectorJuegos.size(); i++) {
                                cout << i << vectorJuegos[i]->getNombre() << vectorJuegos[i]->getDeveloper() << endl;
                            }
                            cout << "Elija un juego (la iteradora)" << endl;
                            cout << "juego:";
                            cin >> iteradorGeneral;
                            usuActual->eliminarSoftware(vectorJuegos[iteradorGeneral]);
                            break;
                        }
                        case 2:{
                            //VECTOR OFIMATICA
                            break;
                        }
                        case 3:{
                            //VECTOR PRODUCCION
                            break;
                        }
                        case 4:{
                            //VECTOR NAVEGADOR
                            break;
                        }
                        case 5:{
                            //VECTOR SEGURIDAD
                            break;
                        }
                        case 6:{
                            //VECTOR SOCIAL
                            break;
                        }
                        default:{
                            cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
                            break;
                        }
                    }
                    break;
                }
                case 5:{
                    // BUSCAR SOFTWARE EN BIBLIOTECA
                    cout << "Ingrese el nombre del software que desea buscar: ";
                    cin >> nombreSoftware;

                    // Recorre la biblioteca del usuario en busca del software por nombre
                    bool encontrado = false;
                    for (Software* software : usuActual->getBiblioteca()) {
                        if (software->getNombre() == nombreSoftware) {
                            // Se encontró el software
                            cout << "Software encontrado:" << endl;
                            cout << "Nombre: " << software->getNombre() << endl;
                            cout << "Desarrollador: " << software->getDeveloper() << endl;
                            // Agrega aquí más detalles del software si es necesario
                            encontrado = true;
                            break;  // No es necesario seguir buscando
                        }
                        break;
                    }

                    if (!encontrado) {
                        cout << "El software no se encuentra en su biblioteca." << endl;
                    }
                    break;
                }
                case 6:{
                    // Implementar la lógica para acceder al log de software
                    cout << "hola" << endl;
                    break;
                }
                case 7:{
                    login = false;
                    usuActual = nullptr;
                    cout << "Cerrando sesion. Hasta luego, " << usuActual->getNombre() << "!" << endl;
                    break;
                }
                case 8:{
                    cout << "Saliendo del programa." << endl;
                    break;
                }
                default:{
                    cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
                    break;
                }
            }
        }
    }
    //LIBERAR LA INFORMACION
    for (Usuario* usuario : vectorUsuario) {
        delete usuario;
    }
    for (Software* juego : vectorJuegos) {
        delete juego;
    }
    for (Software* ofimatica : vectorOfimatica) {
        delete ofimatica;
    }
    for (Software* produccion : vectorProduccion) {
        delete produccion;
    }
    for (Software* navegador : vectorNavegador) {
        delete navegador;
    }
    for (Software* seguridad : vectorSeguridad) {
        delete seguridad;
    }
    for (Software* social : vectorSocial) {
        delete social;
    }
    vectorUsuario.clear();
    vectorJuegos.clear();
    vectorOfimatica.clear();
    vectorProduccion.clear();
    vectorNavegador.clear();
    vectorSeguridad.clear();
    vectorSocial.clear();

    return 0;
}