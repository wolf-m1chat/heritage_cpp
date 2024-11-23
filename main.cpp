#include <iostream>

class Person {
    public:
        void name(){
            std::cout << "Nao Tenho Nome \n";
        }

};

class Ability : public Person{
    public:
        void language(){
            std::cout << "Portugues \n";
        }
};

int main() {
    Ability ability;
    std::cout << "Nome: ";
    ability.name();
    std::cout << "Idioma: ";
    ability.language();
}
