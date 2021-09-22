#pragma once

void water_in_bath();

struct bathroom
{
    float water_temp;
    float air_temp;
    float air_hum;
    int flag_water;
    float conc_co2;
    int brightness;
    int light;
};

