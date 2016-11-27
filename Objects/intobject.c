#include "intobject.h"

Class IntegerClass = {
	"Integer",
	sizeof(Integer),
	&IntConstructor,
	&IntDestructor,
	&IntCompare
};

void IntConstructor(Object *self){

}

void IntDestructor(Object *self){

}

int IntCompare(Object *self, Object *other){
	return ((Integer *)self)->value - ((Integer *)other)->value;
}