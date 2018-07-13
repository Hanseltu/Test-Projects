#include<iostream>
using namespace std;
class Pet{
    public :
        virtual void petSound() = 0;
};

class Dog: public Pet{
    public:
        void petSound(){
            cout << "Bow Bow ...\n";
        }
};

class Cat: public Pet{
    public:
        void petSound(){
            cout << "Meaw Meaw...\n";
        }
};

class PetFactory{
    public:
        Pet* getPet(int petType){
            Pet *pet = NULL;

            if (petType == 1)
                pet = new Dog();
            if (petType == 2)
                pet = new Cat();
            return pet;
        }
};

int main(){
    PetFactory *petFactory = new PetFactory();
    Pet *pet = petFactory->getPet(1);
    cout << "Pet Sound...\n";
    pet->petSound();

}
