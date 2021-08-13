# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main(){
    int amountOfAnimals = 4;
    Animal* animals[amountOfAnimals];
    int i = 0;
    int j = amountOfAnimals / 2;

    std::cout << "---- CONSTRUCTORS CALL ----" << std::endl;
    while (i < amountOfAnimals)
    {
        if (i == j){
            while (i < amountOfAnimals)
            {
                animals[i] = new Dog();
                i++;
                std::cout << "-----------------------------" << std::endl;

            }
        }
        else{
            animals[i] = new Cat();
            std::cout << "-----------------------------" << std::endl;
            i++;
        }
    }

    std::cout << "\n---- DESTRUCTORS CALL ----" << std::endl;
    i = 0;
    while (i < amountOfAnimals)
    {
        delete animals[i];
        std::cout << "-----------------------------" << std::endl;
        i++;
    }
}