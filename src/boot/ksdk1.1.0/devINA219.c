#include <stdint.h>
#include "fsl_rtc_driver.h"
#include "fsl_i2c_master_driver.h"

#include "warp.h"
#include "devINA219.h"

extern volatile WarpI2CDeviceState deviceINA219state;
deviceINA219state.i2cAddress = 0x40;

