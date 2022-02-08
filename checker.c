#include <stdio.h>
#include <assert.h>
#include "CheckBatteryStatus.h"

void testCheckBatteryTemperature(float temp , int status){
      assert(checkBatteryTemperature(temp) == status);
}

void testCheckSoCRange(float soc , int status){
      assert(checkSoCRange(soc) == status);
}

void testCheckChargeRate(float chargeRate , int status){
      assert(checkChargeRate(chargeRate) == status);
}

void testBatteryHealth(float temp, float soc, float chargeRate , int status){
      assert(checkBatteryHealth(temp, soc, chargeRate) == status);
}


int main() {
  testCheckBatteryTemperature(25, 1);
  testCheckBatteryTemperature(50, 0);
  testCheckBatteryTemperature(-10, 0);
  testCheckSoCRange(70, 1);
  testCheckSoCRange(10, 0);
  testCheckSoCRange(85, 0);
  testCheckChargeRate(0.7, 1);
  testCheckChargeRate(0.9, 0);
  testBatteryHealth(25, 70, 0.7, 3);
  testBatteryHealth(-15, 30, 0.5, 2);
  testBatteryHealth(50, 90, 0.75, 1);
  testBatteryHealth(70, 100, 0.95, 0);

}
