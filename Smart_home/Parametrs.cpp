#include "Parametrs.h"

// �������� ����� �� ���������� ��� �����������
bool parametrs::IsRightTemp(float temp)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (temp < -20 || temp > 40)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� ���������
bool parametrs::IsRightHum(float hum)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (hum < 0 || hum > 100)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� ������������ CO2
bool parametrs::IsRightCO2(float co2)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (co2 < 0 || co2 > 50)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� ������� �����
bool parametrs::IsRightBright(int bright)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (bright < 0 || bright > 100)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� ������ �����
bool parametrs::IsRightLight(int l)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (l < 0 || l > 1)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

// �������� ����� �� ���������� ��� �������� ����������
bool parametrs::IsRightSpeed(int speed)
{
	bool res = true;
	try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
	{
		if (speed < 0 || speed > 100)           // ���� ������������ ���� �������� �����, �� ������������� ����������
			throw "Incorrect value.";       // ������������� ���������� ���� const char*
	}
	catch (const char* exception)           // ���������� ���������� ���� const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}

	return res;
}

//�����������
parametrs::parametrs()
{
	air_temp = 0;
	air_hum = 0;
	conc_co2 = 0;
	brightness = 0;
	light = 2;
	vent_speed = 0;
}

//����������� � ����� ����������
parametrs::parametrs(float temp)
{
	if (IsRightTemp(temp))
		air_temp = temp;
	air_hum = 0;
	conc_co2 = 0;
	brightness = 0;
	light = 2;
	vent_speed = 0;
}

//����������� � �����������
parametrs::parametrs(float temp, float hum, float co2, int bright, int l, int speed)
{
	if (IsRightTemp(temp))
		air_temp = temp;
	if (IsRightHum(hum))
		air_hum = hum;
	if (IsRightCO2(co2))
		conc_co2 = co2;
	if (IsRightBright(bright))
		brightness = bright;
	if (IsRightLight(l))
		light = l;
	if (IsRightSpeed(speed))
		vent_speed = speed;
}

//������� ��������� ������ �� �����
float parametrs::Get_air_temp()
{
	return this->air_temp;
}

float parametrs::Get_air_hum()
{
	return this->air_hum;
}

float parametrs::Get_conc_co2()
{
	return this->conc_co2;
}

int parametrs::Get_brightness()
{
	return this->brightness;
}

int parametrs::Get_light()
{
	return this->light;
}

int parametrs::Get_vent_speed()
{
	return this->vent_speed;
}

//������� ��������� ������ �� ����� ����� ������
void parametrs::Get_air_temp_link(float& temp)
{
	temp = this->air_temp;
}

void parametrs::Get_air_hum_link(float& hum)
{
	hum = this->air_hum;
}

void parametrs::Get_conc_co2_link(float& co2)
{
	co2 = this->conc_co2;
}

void parametrs::Get_brightness_link(int& bright)
{
	bright = this->brightness;
}

void parametrs::Get_light_link(int& l)
{
	l = this->light;
}

void parametrs::Get_vent_speed_link(int& speed)
{
	speed = this->vent_speed;
}

//������� ������������� �����
void parametrs::Set_air_temp(float temp)
{
	if (IsRightTemp(temp))
		air_temp = temp;
}

void parametrs::Set_air_hum(float hum)
{
	if (IsRightHum(hum))
		air_hum = hum;
}

void parametrs::Set_conc_co2(float co2)
{
	if (IsRightCO2(co2))
		conc_co2 = co2;
}

void parametrs::Set_brightness(int bright)
{
	if (IsRightBright(bright))
		brightness = bright;
}

void parametrs::Set_light(int l)
{
	if (IsRightLight(l))
		light = l;
}

void parametrs::Set_vent_speed(int speed)
{
	if (IsRightSpeed(speed))
		vent_speed = speed;
}

//����������
parametrs::~parametrs()
{
	;
}

//������������� ������ ���������
void parametrs::Set_parametrs(float temp, float hum, float co2, int bright, int l, int speed)
{
	if (IsRightTemp(temp))
		air_temp = temp;
	if (IsRightHum(hum))
		air_hum = hum;
	if (IsRightCO2(co2))
		conc_co2 = co2;
	if (IsRightBright(bright))
		brightness = bright;
	if (IsRightLight(l))
		light = l;
	if (IsRightSpeed(speed))
		vent_speed = speed;
}

// �������� ������ ������
void parametrs::NewList()
{
	lastPar = NULL;
}


// ���������� �������� � ����� ������
void parametrs::Add(void)
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

// ����� �� ������� ����������� ������
void parametrs::reprint(void)
{
	parametrs* uk;   // ��������������� ���������
	uk = lastPar;
	if (uk == NULL)
	{
		cout << "������ ����!";
		return;
	}
	else
		cout << "\n���������� ������:\n";

	// ���� ������ � �������� ������� �������� ��������� ������:
	while (uk != NULL)
	{
		cout << uk->air_temp << '\t';
		uk = uk->prev;
	}

	cout << "\n" << endl;
}

// ���������� ��������� '+' (parametrs + float)
parametrs operator+(const parametrs& param, float temp)
{
	if (param.air_temp + temp > 40)
		return param;
	else
	{
		parametrs tmp;
		tmp = param;
		tmp.Set_air_temp(param.air_temp + temp);
		return tmp;
	}
}

// ���������� ����������� ��������� '++'
parametrs& parametrs::operator++()
{
	air_temp += 1;
	return *this;
}

// ���������� ������������ ��������� '++'
parametrs parametrs::operator++ (int)
{
	parametrs p1 = *this;
	++* this;
	return p1;
}

//����� ���������� �� �����
void parametrs::Display()
{
	cout << endl << "���������� �������: " << air_temp << " ��" << endl;
	cout << "��������� �������: " << air_hum << " %" << endl;
	cout << "������������ CO2: " << conc_co2 << " %" << endl;
	cout << "������� �����: " << brightness << " %" << endl;
	cout << "������ �����: " << light << endl;
	cout << "�������� ����������: " << vent_speed << " %" << endl;
}