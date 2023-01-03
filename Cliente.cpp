

#include "Cliente.h"

Cliente::Cliente(const string &nombre, long long int id, const string &nino, const string &embarazada,
                 const string &adultoMayor, int categoria) : nombre(nombre), id(id), nino(nino), embarazada(embarazada),
                                                             adultoMayor(adultoMayor), categoria(categoria) {
    this->porcentaje=0;
    if (nino=="Yes"){
        this->porcentaje+=20;
    }if (embarazada=="Yes"){
        this->porcentaje+=25;
    }if (adultoMayor=="Yes"){
        this->porcentaje+=35;
    }if (categoria==1){
        this->porcentaje+=20;
    }if (categoria==2){
        this->porcentaje+=10;
    }
}
Cliente::Cliente() {}

Cliente::~Cliente() {

}

const string &Cliente::getNombre() const {
    return nombre;
}

void Cliente::setNombre(const string &nombre) {
    Cliente::nombre = nombre;
}

long long int Cliente::getId() const {
    return id;
}

void Cliente::setId(long long int id) {
    Cliente::id = id;
}

const string &Cliente::getNino() const {
    return nino;
}

void Cliente::setNino(const string &nino) {
    Cliente::nino = nino;
}

const string &Cliente::getEmbarazada() const {
    return embarazada;
}

void Cliente::setEmbarazada(const string &embarazada) {
    Cliente::embarazada = embarazada;
}

const string &Cliente::getAdultoMayor() const {
    return adultoMayor;
}

void Cliente::setAdultoMayor(const string &adultoMayor) {
    Cliente::adultoMayor = adultoMayor;
}

int Cliente::getCategoria() const {
    return categoria;
}

void Cliente::setCategoria(int categoria) {
    Cliente::categoria = categoria;
}

int Cliente::getPorcentaje() const {
    return porcentaje;
}

void Cliente::setPorcentaje(int porcentaje) {
    Cliente::porcentaje = porcentaje;
}
string Cliente::toString() {
    stringstream ss;
    ss<<"---------Datos del Cliente---------"<<endl;
    ss<<"Nombre: "<< nombre;
    ss<<" Id: "<< id<<endl;
    ss<<"Ingresa con nino: "<<nino<<endl;
    ss<<"Esta Embarazada: "<<embarazada<<endl;
    ss<<"Es adulto mayor: "<<adultoMayor<<endl;
    ss<<"Categoria: "<<categoria;
    ss<<" Porcentaje de Prioridad: "<<porcentaje<<endl;
    return ss.str();
}
