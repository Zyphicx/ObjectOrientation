#ifndef OBJECT_H
#define OBJECT_H

#include <stdlib.h>

/*
*	It would be possible to put struct object first in all the different objects,
*	but, then I would have to access things by doing obj->object.class
*/

#define OBJ_HEAD	\
	Class *class;	\
	int refs;	

struct class;
typedef struct class Class;

struct object;
typedef struct object Object;

struct class{	//This carries things which all classes need and are unchangeable
	const char *name;
	const size_t size;
	void (*constructor)(Object *self);
	void (*destructor)(Object *self);
	int (*compare)(Object *self, Object *other);
};

struct object{	//All objects can be cast to this, polymorphism, carries changeable things
	OBJ_HEAD
};

Object *new(Class *class);
void delete(Object *obj);

#endif