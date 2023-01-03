
#ifndef PROYECTO1ESTRUCTURAS_CLIENTE_H
#define PROYECTO1ESTRUCTURAS_CLIENTE_H

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
class Cliente {
private:
    string nombre;
    long long id;
    string nino;
    string embarazada;
    string adultoMayor;
    int categoria;
    int porcentaje;
public:
    Cliente(const string &nombre, long long int id, const string &nino, const string &embarazada,
            const string &adultoMayor, int categoria);

    Cliente();

    string toString();

    virtual ~Cliente();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    long long int getId() const;

    void setId(long long int id);

    const string &getNino() const;

    void setNino(const string &nino);

    const string &getEmbarazada() const;

    void setEmbarazada(const string &embarazada);

    const string &getAdultoMayor() const;

    void setAdultoMayor(const string &adultoMayor);

    int getCategoria() const;

    void setCategoria(int categoria);

    int getPorcentaje() const;

    void setPorcentaje(int porcentaje);


};


#endif //PROYECTO1ESTRUCTURAS_CLIENTE_H
