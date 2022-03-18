#include "Parametrs.h"

/*// Проверка числа на подходящее для температуры
bool Parametrs::IsRightTemp(float temp)
{
	bool res = true;
	try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{
		if (temp < -20 || temp > 40)           // Если пользователь ввел неверное число, то выбрасывается исключение
			throw "Incorrect value.";       // выбрасывается исключение типа const char*
	}
	catch (const char* exception)           // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// Проверка числа на подходящее для влажности
bool Parametrs::IsRightHum(float hum)
{
	bool res = true;
	try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{
		if (hum < 0 || hum > 100)           // Если пользователь ввел неверное число, то выбрасывается исключение
			throw "Incorrect value.";       // выбрасывается исключение типа const char*
	}
	catch (const char* exception)           // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// Проверка числа на подходящее для концентрации CO2
bool Parametrs::IsRightCO2(float co2)
{
	bool res = true;
	try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{
		if (co2 < 0 || co2 > 50)           // Если пользователь ввел неверное число, то выбрасывается исключение
			throw "Incorrect value.";       // выбрасывается исключение типа const char*
	}
	catch (const char* exception)           // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// Проверка числа на подходящее для яркости света
bool Parametrs::IsRightBright(int bright)
{
	bool res = true;
	try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{
		if (bright < 0 || bright > 100)           // Если пользователь ввел неверное число, то выбрасывается исключение
			throw "Incorrect value.";       // выбрасывается исключение типа const char*
	}
	catch (const char* exception)           // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// Проверка числа на подходящее для флажка света
bool Parametrs::IsRightLight(int l)
{
	bool res = true;
	try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{
		if (l < 0 || l > 1)           // Если пользователь ввел неверное число, то выбрасывается исключение
			throw "Incorrect value.";       // выбрасывается исключение типа const char*
	}
	catch (const char* exception)           // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// Проверка числа на подходящее для скорости вентиляции
bool Parametrs::IsRightSpeed(int speed)
{
	bool res = true;
	try                                     // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{
		if (speed < 0 || speed > 100)           // Если пользователь ввел неверное число, то выбрасывается исключение
			throw "Incorrect value.";       // выбрасывается исключение типа const char*
	}
	catch (const char* exception)           // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}*/

//Конструктор
Parametrs::Parametrs()
{
	air_temp = 0;
	air_hum = 0;
	conc_co2 = 0;
	brightness = 0;
	light = 2;
	vent_speed = 0;
}

//Конструктор с одним параметром
Parametrs::Parametrs(float temp)
{
	//if (IsRightTemp(temp))
	air_temp = temp;
	air_hum = 0;
	conc_co2 = 0;
	brightness = 0;
	light = 2;
	vent_speed = 0;
}

//Конструктор с параметрами
Parametrs::Parametrs(float temp, float hum, float co2, int bright, int l, int speed)
{
	//if (IsRightTemp(temp))
	air_temp = temp;
	//if (IsRightHum(hum))
	air_hum = hum;
	//if (IsRightCO2(co2))
	conc_co2 = co2;
	//if (IsRightBright(bright))
	brightness = bright;
	//if (IsRightLight(l))
	light = l;
	//if (IsRightSpeed(speed))
	vent_speed = speed;
}

// Повышение температуры на 5 градусов
float Parametrs::Temp_up()
{
	air_temp += 5;
	cout << "Увеличение на 5 градусов" << endl;
	return air_temp;
}

// Проверка увеличения температуры, взаимодействие с пользователем
void Parametrs::Temp_check()
{
	float t;
	t = Temp_up();
	cout << "Температура изменилась. Текущая температура: " << air_temp << endl;
}

//Функции получения данных из полей
float Parametrs::Get_air_temp()
{
	return this->air_temp;
}

float Parametrs::Get_air_hum()
{
	return this->air_hum;
}

float Parametrs::Get_conc_co2()
{
	return this->conc_co2;
}

int Parametrs::Get_brightness()
{
	return this->brightness;
}

int Parametrs::Get_light()
{
	return this->light;
}

int Parametrs::Get_vent_speed()
{
	return this->vent_speed;
}

//Функции получения данных из полей через ссылку
void Parametrs::Get_air_temp_link(float& temp)
{
	temp = this->air_temp;
}

void Parametrs::Get_air_hum_link(float& hum)
{
	hum = this->air_hum;
}

void Parametrs::Get_conc_co2_link(float& co2)
{
	co2 = this->conc_co2;
}

void Parametrs::Get_brightness_link(int& bright)
{
	bright = this->brightness;
}

void Parametrs::Get_light_link(int& l)
{
	l = this->light;
}

void Parametrs::Get_vent_speed_link(int& speed)
{
	speed = this->vent_speed;
}

//Функции инициализации полей
void Parametrs::Set_air_temp(float temp)
{
	//if (IsRightTemp(temp))
	air_temp = temp;
}

void Parametrs::Set_air_hum(float hum)
{
	//if (IsRightHum(hum))
	air_hum = hum;
}

void Parametrs::Set_conc_co2(float co2)
{
	//if (IsRightCO2(co2))
	conc_co2 = co2;
}

void Parametrs::Set_brightness(int bright)
{
	//if (IsRightBright(bright))
	brightness = bright;
}

void Parametrs::Set_light(int l)
{
	//if (IsRightLight(l))
	light = l;
}

void Parametrs::Set_vent_speed(int speed)
{
	//if (IsRightSpeed(speed))
	vent_speed = speed;
}

// Ввод параметров
void Parametrs::Inp()
{
	cout << "Введите температуру воздуха: ";
	cin >> air_temp;
	cout << "Введите влажность воздуха: ";
	cin >> air_hum;
	cout << "Введите концентрацию CO2: ";
	cin >> conc_co2;
	cout << "Введите яркость света: ";
	cin >> brightness;
	cout << "Введите флаг света: ";
	cin >> light;
	cout << "Введите скорость вентиляции: ";
	cin >> vent_speed;
}

//Деструктор
Parametrs::~Parametrs()
{
	;
}

//Инициализация класса параметры
void Parametrs::Set_parametrs(float temp, float hum, float co2, int bright, int l, int speed)
{
	//if (IsRightTemp(temp))
	air_temp = temp;
	//if (IsRightHum(hum))
	air_hum = hum;
	//if (IsRightCO2(co2))
	conc_co2 = co2;
	//if (IsRightBright(bright))
	brightness = bright;
	//if (IsRightLight(l))
	light = l;
	//if (IsRightSpeed(speed))
	vent_speed = speed;
}

/*// Создание нового списка
void Parametrs::NewList()
{
	lastPar = NULL;
}


// Добавление элемента в конец списка
void Parametrs::Add(void)
{
	if (lastPar == NULL)
		this->prev = NULL;
	else
	{
		lastPar->next = this;
		prev = lastPar;
	}
	lastPar = this;
	this->next = NULL;
}

// Вывод на дисплей содержимого списка
void Parametrs::reprint(void)
{
	Parametrs* uk;   // Вспомогательный указатель
	uk = lastPar;
	if (uk == NULL)
	{
		cout << "Список пуст!";
		return;
	}
	else
		cout << "\nСодержимое списка:\n";

	// Цикл печати в обратном порядке значений элементов списка:
	while (uk != NULL)
	{
		cout << uk->air_temp << '\t';
		uk = uk->prev;
	}

	cout << "\n" << endl;
}*/

// Перегрузка оператора '+' (Parametrs + float)
/*Parametrs operator+(const Parametrs& param, float temp)
{
	if (param.air_temp + temp > 40)
		return param;
	else
	{
		Parametrs tmp;
		tmp = param;
		tmp.Set_air_temp(param.air_temp + temp);
		return tmp;
	}
}*/

// Перегрузка префиксного оператора '++'
Parametrs& Parametrs::operator++()
{
	air_temp += 1;
	return *this;
}

// Перегрузка постфиксного оператора '++'
/*Parametrs Parametrs::operator++ (int)
{
	Parametrs p1 = *this;
	++* this;
	return p1;
}*/

//Вывод параметров на экран
void Parametrs::Display()
{
	cout << endl << "Темература воздуха: " << air_temp << " °С" << endl;
	cout << "Влажность воздуха: " << air_hum << " %" << endl;
	cout << "Концентрация CO2: " << conc_co2 << " %" << endl;
	cout << "Яркость света: " << brightness << " %" << endl;
	cout << "Флажок света: " << light << endl;
	cout << "Скорость вентиляции: " << vent_speed << " %" << endl;
}