#include <iostream>
#include "empresas.h"
using namespace std;

void menuempresas(){
  while (true) {
        system("cls");
        cout << "MENU EMPRESAS" << endl;
        cout << "------------------" << endl;
        cout << "1) AGREGAR EMPRESA" << endl;
        cout << "2) LISTAR EMPRESA POR NUMERO" << endl;
        cout << "3) LISTAR TODAS LAS EMPRESAS" << endl;
        cout << "4) MODIFICAR FECHA DE CREACION" << endl;
        cout << "5) ELIMINAR REGISTRO" << endl;
        cout << "--------------------------------" << endl;
        cout << "0) SALIR" << endl;
        int op;
        cout << "INGRESAR OPCION: ";
        cin >> op;

        switch (op) {
            case 1:
                //agregarEmpresa();
                break;
            case 2:
                //listarEmpresaPorNumero();
                break;
            case 3:
                //listarTodasLasEmpresas();
                break;
            case 4:
                //modificarFechaDeCreacion();
                break;
            case 5:
                //eliminarRegistroEmpresa();
                break;
            case 0:
                return ;
            default:
                system("cls");
                cout << "POR FAVOR INGRESE UNA OPCION VALIDA" << endl;
                break;
        }

        system("pause");
    }

}













