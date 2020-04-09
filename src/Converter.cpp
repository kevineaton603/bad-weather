/* PRE: Temperature in Kelvins
 * POST: Temperature in Fahrenheit
 * RETURNS: Double
 */
#include "Converter.h"

double convert(double temp){
    double converted = (temp - 273.15) * 9/5 + 32;
    return roundf(converted * 100) / 100;
}