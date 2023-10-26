#ifndef USUARIO_
#define USUARIO_
#include <string>
#include <iostream>



class Usuario{
    private:
    std::string nome;
    int cpf;

    Usuario(){
        this->nome = {};
        this->cpf = 0;
    }
    
    public:
    Usuario::setUsuario(std::string, int);

    Usuario::getUsuario(std::string);
    Usuario::getUsuario(int); //Sobrecarga

    Usuario::remUsuario(std::string);
    Usuario::remUsuario(int); //Sobrecarga 

    Usuario::impUsuario(std::string);
    Usuario::impUsuario(int) //Sobrecarga teste
    
};

#endif USUARIO_
