#include <stdio.h>
#include <assert.h>
#include "CheckBatteryStatus.h"

int checkIfItIsInSpecifiedRange(float givenValue, float lowerLimit, float upperLimit){
  if(givenValue < lowerLimit || givenValue > upperLimit) {
        return 0;
  }
  return 1;
}

int checkIfItIsInRange(float givenValue, float threshold){
  if(givenValue > threshold){
        return 0;
  }
  return 1;
}

int checkBatteryTemperature(float temp){
  int status = checkIfItIsInSpecifiedRange(temp, LOWER_TEMPERATURE_LIMIT, HIGHER_TEMPERATURE_LIMIT);
  return status;
}

int checkSoCRange(float soc){
    int status = checkIfItIsInSpecifiedRange(soc, LOWER_SOC_LIMIT, HIGHER_SOC_LIMIT);
  return status;
}

int checkChargeRate(float chargeRate){
    int status = checkIfItIsInRange(chargeRate, CHARGERATE_THRESHOLD);
  return status;
}

int checkBatteryHealth(float temp, float soc, float chargeRate){
    int batteryStatus = (checkBatteryTemperature(temp)) + (checkSoCRange(soc)) + (checkChargeRate(chargeRate));
  return batteryStatus;
}
