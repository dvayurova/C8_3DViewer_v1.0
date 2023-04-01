#ifndef SRC_BACKEND_H
#define SRC_BACKEND_H

#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { X_COORD = 0, Y_COORD = 1, Z_COORD = 2 };

typedef struct data_struct {
  unsigned int countVertex;
  unsigned int countFacets;
  unsigned int countEdges;
  double *vector_3d;
  unsigned int *poligons;
} data_struct;

int readOne(char *fileName, data_struct *myData);
void readTwo(char *fileName, data_struct *myData);
int getCountMemory(char *str);
void getDigit(char *str, data_struct *myData, int *index);
double findMax(double *mas_d, int c);
double findMin(double *mas_d, int c);
void changeScale(data_struct *myData, double value);
void cleanAll(data_struct *myData);

// =====//
void rote_X(data_struct *myData, double angle);
void rote_Y(data_struct *myData, double angle);
void rote_Z(data_struct *myData, double angle);

#endif // SRC_BACKEND_H
