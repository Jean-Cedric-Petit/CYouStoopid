#ifndef CYOUSTOOPID
#define CYOUSTOOPID
#define CYOUSTOOPID_VERSION 1.0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>

#define func int
#define boolean bool

#define AND &&
#define OR ||
#define NOT !
#define and &&
#define or ||
#define not !
#define True true
#define False false
#define TRUE true
#define FALSE false

#define begin {
#define end }
#define Begin {
#define End }
#define BEGIN {
#define END }
#define top_level main
#define Top_Level main
#define TOP_LEVEL main

#define crashout() (*(volatile int*)0 = 0)
#define Crashout() (*(volatile int*)0 = 0)
#define CRASHOUT() (*(volatile int*)0 = 0)


#endif /* CYOUSTOOPID */