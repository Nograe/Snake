#ifndef DEF_SETTINGS

#define DEF_SETTINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <graph.h>
#include "struct.h"
#include "menu.h"

void dispSettings (Game *G, Bodies *B, Apple *A, Wall *W);
void advSettings (Game *G, Bodies *B, Wall *W);
void setDefaultSettings ();
void setNewSettings (Game G, Bodies B, Apple A, Wall W);
void readSettings(FILE *fichier, Game *G, Bodies *B, Apple *A, Wall *W);
void changePseudo (Game *G);
couleur choisirCouleur (Theme T, char type);

#endif