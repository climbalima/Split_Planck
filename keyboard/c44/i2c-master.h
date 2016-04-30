#ifndef I2C_MASTER
#define I2C_MASTER

#include <stdint.h>

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#define I2C_READ 1
#define I2C_WRITE 0

#define I2C_ACK 1
#define I2C_NACK 0

// i2c SCL clock frequency
#define SCL_CLOCK  100000L

void i2c_master_init(void);
uint8_t i2c_master_start(uint8_t address);
void i2c_master_stop(void);
uint8_t i2c_master_write(uint8_t data);
uint8_t i2c_master_read(int);

#endif
