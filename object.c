#include "object.h"
#include "intobject.h"

Object *new(Class *class){
	Object *obj = malloc(class->size);
	obj->class = class;
	class->constructor(obj);
	return obj;
}

void delete(Object *obj){
	obj->class->destructor(obj);
	free(obj);
}

int main(){
	Integer *var1 = (Integer *)new(&IntegerClass);
	delete((Object *)var1);
}