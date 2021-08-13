# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "--------------------------" << std::endl;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wCat = new WrongCat();
    std::cout << wCat->getType() << " " << std::endl;
    wCat->makeSound();

    std::cout << "--------------------------" << std::endl;

    delete j;
    delete i;
    delete meta;
    delete wCat;
    delete wrong;

}