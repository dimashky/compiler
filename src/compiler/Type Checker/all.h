#pragma once

#include "TypeExpression.h"
// simple type
#define TYPE_ERROR 0
#define TYPE_VOID 1
#define TYPE_BOOL 2
#define TYPE_INTEGER 3
#define TYPE_FLOAT 4
#define TYPE_CHAR 5
#define TYPE_STRING 6

#include "TypeBoolean.h"
#include "TypeFloat.h"
#include "TypeInteger.h"
#include "TypeVoid.h"
#include "TypeString.h"
#include "TypeError.h"

// complex type
#define TYPE_ARRAY 7
#define TYPE_FUNCTION 8
#define TYPE_CLASS 9

#include "TypeArray.h"
#include "TypeFunction.h"
#include "TypeClass.h"
