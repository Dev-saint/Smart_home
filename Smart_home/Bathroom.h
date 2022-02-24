#pragma once
#include "Parametrs.h"
#include "Bedroom.h"

struct bathroom
{
    float water_temp; //Температура воды
    int flag_water; //Флаг набора воды
    parametrs param_bath;
};

void water_bath(bathroom bath1); //Функция набора воды в ванную
void air_temp_bath(bathroom bath1,float t); //Функция именения температуры воздуха в ванной
void air_hum_bath(bathroom bath1,float hum); //Функция изменения влажности воздуха в ванной
void conc_co2_bath(bathroom bath1,float co2); //Функция изменения концентрации CO2 в ванной
void brightness_bath(bathroom bath1,int bright); //Функция изменения яркости в ванной
void light_bath(bathroom bath1); //Функция включения/выключения света в ванной
void vent_speed_bath(bathroom bath1,int speed); //Функция изменения скорости вентиляции в ванной
void menu_bath(); // Функция вызова меню параметров для ванной