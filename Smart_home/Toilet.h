#pragma once
#include "Parametrs.h"

class Kitchen;
class Bedroom;
class Bathroom;

class Toilet : public Parametrs
{
private:
	//Parametrs* param_toil = new Parametrs(); //Параметры туалета
public:
	//Конструктор
	Toilet();

	// Конструктор с одним параметром
	Toilet(float temp);

	//Конструктор с параметрами
	Toilet(float temp, float hum, float co2, int bright, int l, int speed);

	//Функции получения данных из полей
	/*float Get_air_temp_toil();
	float Get_air_hum_toil();
	float Get_conc_co2_toil();
	int Get_brightness_toil();
	int Get_light_toil();
	int Get_vent_speed_toil();*/

	// Функции получения данных из полей через указатель
	/*void Get_air_temp_toil_point(float* temp);
	void Get_air_hum_toil_point(float* hum);
	void Get_conc_co2_toil_point(float* co2);
	void Get_brightness_toil_point(int* bright);
	void Get_light_toil_point(int* l);
	void Get_vent_speed_toil_point(int* speed);*/

	//Функции инициализации полей
	/*void Set_air_temp_toil(float temp);
	void Set_air_hum_toil(float hum);
	void Set_conc_co2_toil(float co2);
	void Set_brightness_toil(int bright);
	void Set_light_toil(int l);
	void Set_vent_speed_toil(int speed);*/

	//Деструктор
	~Toilet();

	//Инициализация класса туалет
	//void Set_parametrs_toil(float temp, float hum, float co2, int bright, int l, int speed);
	
	// Ввод параметров туалета
	virtual void Inp();

	//Вывод параметров туалета на экран
	void DisplayToil();

	//Дружественная функция задания температур классов Toilet, Kitchen, Bedroom, Bathroom
	//friend void temp_set_all(Toilet& toil, Kitchen& kitch, Bedroom& bed, Bathroom& bath, float temp);

	// Понижение температуры на 5 градусов
	float Temp_up();

	// Перегрузка оператора '=' (Toilet = Parametrs)
	Toilet& operator=(Parametrs& parametrs);

	// Расширение действий оператора <<
	friend std::ostream& operator<< (std::ostream& out, const Toilet& toilet);
};

void menu_toil(); // Функция вызова меню параметров для туалета