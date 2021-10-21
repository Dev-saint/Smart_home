#pragma once

void water_bath(); //Функция набора воды определенной температуры в ванную
void air_temp_bath(int t); //Функция именения температуры воздуха в ванной
void air_hum_bath(); //Функция изменения влажности воздуха в ванной
void conc_co2_bath(); //Функция изменения концентрации CO2 в ванной
void brightness_bath(); //Функция изменения яркости в ванной
void light_bath(); //Функция включения/выключения света в ванной
void vent_speed(); //Функция изменения скорости вентиляции в ванной

struct bathroom
{
    float water_temp; //Температура воды
    float air_temp; //Температура воздуха
    float air_hum; //Влажность воздуха
    int flag_water; //Флаг набора воды
    float conc_co2; //Концентрация CO2
    int brightness; //Яркость света
    int light; //Включение/выключение света
    int vent_speed; //Скорость вентиляции
}bath;

