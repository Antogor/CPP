#include "Serialize.hpp"

Serialize::Serialize(){

}

Serialize::~Serialize(){

}

uintptr_t Serialize::serialize(Data *ptr){
    uintptr_t raw;

    raw = reinterpret_cast<uintptr_t>(ptr);
    return raw;
}

Data* Serialize::deserialize(uintptr_t raw){
	
    Data *d;

    d = reinterpret_cast<Data*>(raw);
    return d;
}