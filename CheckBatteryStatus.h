#define LOWER_TEMPERATURE_LIMIT 0
#define HIGHER_TEMPERATURE_LIMIT 45
#define LOWER_SOC_LIMIT 20
#define HIGHER_SOC_LIMIT 80
#define CHARGERATE_THRESHOLD 0.8

extern int checkBatteryTemperature(float temp);
extern int checkSoCRange(float soc);
extern int checkChargeRate(float chargeRate);
extern int checkBatteryHealth(float temp, float soc, float chargeRate);
