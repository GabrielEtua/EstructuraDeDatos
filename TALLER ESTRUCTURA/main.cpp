#include <iostream>
#include <vector>
#include "usuario.h"
#include "software.h"

using namespace std;

vector<Usuario*> cargar15usuarios(vector<Usuario*> vectorUsuario){
    Usuario* u1 = new Administrador("Esteban","pass121",15,"correo1@gmail.com",true);
    Usuario* u2 = new UserNino("Niño1","pass122",10,"",false);
    Usuario* u3 = new UserNino("Niño2","pass123",11,"",false);
    Usuario* u4 = new UserNino("Niño3","pass124",12,"",false);
    Usuario* u5 = new UserNino("Niño4","pass125",13,"",false);
    Usuario* u6 = new UserNormal("Usuario1","pass126",20,"correo2@gmail.com",false);
    Usuario* u7 = new UserNormal("Usuario2","pass127",21,"correo3@gmail.com",false);
    Usuario* u8 = new UserNormal("Usuario3","pass128",22,"correo4@gmail.com",false);
    Usuario* u9 = new UserNormal("Usuario4","pass129",23,"correo5@gmail.com",false);
    Usuario* u10 = new UserNormal("Usuario5","pass130",24,"correo6@gmail.com",false);
    Usuario* u11 = new UserNormal("Usuario6","pass131",25,"correo7@gmail.com",false);
    Usuario* u12 = new UserNormal("Usuario7","pass132",26,"correo8@gmail.com",false);
    Usuario* u13 = new UserNormal("Usuario8","pass133",27,"correo9@gmail.com",false);
    Usuario* u14 = new UserNormal("Usuario9","pass134",28,"correo10@gmail.com",false);
    Usuario* u15 = new UserNormal("Usuario10","pass135",29,"correo11@gmail.com",false);

    vectorUsuario.push_back(u1);
    vectorUsuario.push_back(u2);
    vectorUsuario.push_back(u3);
    vectorUsuario.push_back(u4);
    vectorUsuario.push_back(u5);
    vectorUsuario.push_back(u6);
    vectorUsuario.push_back(u7);
    vectorUsuario.push_back(u8);
    vectorUsuario.push_back(u9);
    vectorUsuario.push_back(u10);
    vectorUsuario.push_back(u11);
    vectorUsuario.push_back(u12);
    vectorUsuario.push_back(u13);
    vectorUsuario.push_back(u14);
    vectorUsuario.push_back(u15);
    return vectorUsuario;
}

vector<Software*> cargar20juegos(vector<Software*> vectorJuegos){
    Software* j1 = new Juegos("Juego1", "Desarrollador1", 21, 34.99, "FPS");
    Software* j2 = new Juegos("Juego2", "Desarrollador2", 21, 34.99, "FPS");
    Software* j3 = new Juegos("Juego3", "Desarrollador3", 21, 29.99, "MMO");
    Software* j4 = new Juegos("Juego4", "Desarrollador4", 21, 29.99, "MMO");
    Software* j5 = new Juegos("Juego5", "Desarrollador5", 21, 2.99, "PUZZLE");
    Software* j6 = new Juegos("Juego6", "Desarrollador6", 10, 2.99, "PUZZLE");
    Software* j7 = new Juegos("Juego7", "Desarrollador7", 10, 50.99, " ACCION");
    Software* j8 = new Juegos("Juego8", "Desarrollador8", 10, 50.99, " ACCION");
    Software* j9 = new Juegos("Juego9", "Desarrollador9", 10, 70.99, "PLATAFORMA");
    Software* j10 = new Juegos("Juego10", "Desarrollador10", 12, 70.99, "PLATAFORMA");
    Software* j11 = new Juegos("Juego11", "Desarrollador11", 12, 40.99, "RTS");
    Software* j12 = new Juegos("Juego12", "Desarrollador12", 12, 40.99, "RTS");
    Software* j13 = new Juegos("Juego13", "Desarrollador13", 12, 20.99, "DEPORTES");
    Software* j14 = new Juegos("Juego14", "Desarrollador14", 12, 20.99, "DEPORTES");
    Software* j15 = new Juegos("Juego15", "Desarrollador15", 12, 19.99, "CARRERAS");
    Software* j16 = new Juegos("Juego16", "Desarrollador16", 12, 19.99, "CARRERAS");
    Software* j17 = new Juegos("Juego17", "Desarrollador17", 12, 29.99, "ROL");
    Software* j18 = new Juegos("Juego18", "Desarrollador18", 12, 29.99, "ROL");
    Software* j19 = new Juegos("Juego19", "Desarrollador19", 12, 9.99, "SIMULACION");
    Software* j20 = new Juegos("Juego20", "Desarrollador20", 12, 9.99, "SIMULACION");

    vectorJuegos.push_back(j1);
    vectorJuegos.push_back(j2);
    vectorJuegos.push_back(j3);
    vectorJuegos.push_back(j4);
    vectorJuegos.push_back(j5);
    vectorJuegos.push_back(j6);
    vectorJuegos.push_back(j7);
    vectorJuegos.push_back(j8);
    vectorJuegos.push_back(j9);
    vectorJuegos.push_back(j10);
    vectorJuegos.push_back(j11);
    vectorJuegos.push_back(j12);
    vectorJuegos.push_back(j13);
    vectorJuegos.push_back(j14);
    vectorJuegos.push_back(j15);
    vectorJuegos.push_back(j16);
    vectorJuegos.push_back(j17);
    vectorJuegos.push_back(j18);
    vectorJuegos.push_back(j19);
    vectorJuegos.push_back(j20);
    return vectorJuegos;
}
vector<Software*> cargar5ofimatica(vector<Software*> vectorOfimatica){
    Software* o1 = new Ofimatica("Ofimatica1", "Desarrollador1", 0, 110.99, 1);
    Software* o2 = new Ofimatica("Ofimatica2", "Desarrollador2", 0, 120.99, 1);
    Software* o3 = new Ofimatica("Ofimatica3", "Desarrollador3", 0, 130.99, 1);
    Software* o4 = new Ofimatica("Ofimatica4", "Desarrollador4", 0, 140.99, 1);
    Software* o5 = new Ofimatica("Ofimatica5", "Desarrollador5", 0, 150.99, 1);

    vectorOfimatica.push_back(o1);
    vectorOfimatica.push_back(o2);
    vectorOfimatica.push_back(o3);
    vectorOfimatica.push_back(o4);
    vectorOfimatica.push_back(o5);
    return vectorOfimatica;
}
//SOLO +18
vector<Software*> cargar4produccion(vector<Software*> vectorProduccion){
    Software* p1 = new Produccion("Produccion1", "Desarrollador1", 21, 110.99, "video");
    Software* p2 = new Produccion("Produccion2", "Desarrollador2", 21, 120.99, "musica");
    Software* p3 = new Produccion("Produccion3", "Desarrollador3", 21, 130.99, "straming");
    Software* p4 = new Produccion("Produccion4", "Desarrollador4", 21, 140.99, "fotos");

    vectorProduccion.push_back(p1);
    vectorProduccion.push_back(p2);
    vectorProduccion.push_back(p3);
    vectorProduccion.push_back(p4);
    return vectorProduccion;
}
vector<Software*> cargar2navegadores(vector<Software*> vectorNavegador){
    Software* n1 = new Navegador("Navegador1", "Desarrollador1", 21, 110.99);
    Software* n2 = new Navegador("Navegador2", "Desarrollador2", 21, 120.99);

    vectorNavegador.push_back(n1);
    vectorNavegador.push_back(n2);
    return vectorNavegador;
}
//SOLO ADMINISTRADORES
vector<Software*> cargar6seguridad(vector<Software*> vectorSeguridad){
    Software* s1 = new Seguridad("Seguridad1", "Desarrollador1", 21, 110.99, "Ransomware");
    Software* s2 = new Seguridad("Seguridad2", "Desarrollador2", 21, 120.99, "Spyware");
    Software* s3 = new Seguridad("Seguridad3", "Desarrollador3", 21, 130.99, "botnets");
    Software* s4 = new Seguridad("Seguridad4", "Desarrollador4", 21, 140.99, "rootkits");
    Software* s5 = new Seguridad("Seguridad5", "Desarrollador5", 21, 150.99, "gusanos");
    Software* s6 = new Seguridad("Seguridad6", "Desarrollador6", 21, 160.99, "troyanos");

    vectorSeguridad.push_back(s1);
    vectorSeguridad.push_back(s2);
    vectorSeguridad.push_back(s3);
    vectorSeguridad.push_back(s4);
    vectorSeguridad.push_back(s5);
    vectorSeguridad.push_back(s6);
    return vectorSeguridad;
}
//SOLO USUARIOS CON +2 AMIGOS (niños amigos solo de otros niños)
vector<Software*> cargar2social(vector<Software*> vectorSocial){
    Software* c1 = new Social("Social1", "Desarrollador1", 4, 2.99);
    Software* c2 = new Social("Social2", "Desarrollador2", 4, 1.99);

    vectorSocial.push_back(c1);
    vectorSocial.push_back(c2);
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
                        cout << "¡Hola!" << endl;
                        login = true;
                        break;
                    }
                }
            } else if (opcion == 2) {
                cout << "Saliendo del programa." << endl;
                break;
            } else {
                cout << "Opcion invalida. Ingrese una opcion valida." << endl;
            }
        } else {
            switch (opcion) {
                case 3:
                    // Implementar la lógica para agregar software
                    break;
                case 4:
                    // Implementar la lógica para eliminar software
                    break;
                case 5:
                    // Implementar la lógica para buscar software
                    break;
                case 6:
                    // Implementar la lógica para acceder al log de software
                    break;
                case 7:
                    login = false;  // Cerrar sesión
                    usuActual = nullptr;
                    cout << "Cerrando sesión. Hasta luego, " << usuActual->getNombre() << "!" << endl;
                    break;
                default:
                    cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
                    break;
            }
        }
    }
    


    return 0;
}