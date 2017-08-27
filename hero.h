/* 
 * File:   hero.h
 * Author: Nathan Duma
 *
 */

#ifndef HERO_H
#define HERO_H

#include "vector.h"
#include "weapon.h"
#include <malloc.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct hero{
    char type;
    bool hit;
    int quiverCount;
    vector *v;
    weapon *w;
    animation *alive;
    animation *dead;
    
    void (*playNextAnimation)(struct hero *self, display_context_t *disp, bool pressed);
    void (*move)(struct hero *self, char dir);
    void (*destructHero)(struct hero *self, int quiverMax);
} hero;

hero *initHero(int quiverMax);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* HERO_H */

