#ifndef INTOBJECT_H
#define INTOBJECT_H

#ifndef OBJECT_H
#include "object.h"
#endif

struct integer;
typedef struct integer Integer;

struct integer{
	OBJ_HEAD
	int value;
};

void IntConstructor(Object *self);
void IntDestructor(Object *self);
int IntCompare(Object *self, Object *other);

extern Class IntegerClass;

#endif