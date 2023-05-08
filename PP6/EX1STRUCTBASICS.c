#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct horario{             //Armazena horas, minutos, e segundos;
    unsigned int hour, min, sec;
} horario;

typedef struct data{                //armazena dias, meses, e anos;
    unsigned int day, mon, yr;
} data;


typedef struct compromisso{         //armazena um horário, uma data, e uma descrição de até 255 caracteres;
    horario hora;
    data dia;
    char desc[256];
} compromisso;


