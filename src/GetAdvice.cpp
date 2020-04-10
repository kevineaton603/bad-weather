/* PRE: string: Weather Condition, Double: temperature
 * POST: string: advice given
 * RETURNS: string
 */
#include "GetAdvice.h"

std::string getAdvice(int cond, double temperature) {
    std::string condAdvice = "", tempAdvice = "";

    if(cond >= 200 && cond <= 232) { // Thunderstorm
        condAdvice = "Big Metal Rod";
    } else if (cond >= 300 && cond <= 321) { // Drizzle
        condAdvice = "Leather Sandals";
    } else if (cond >= 500 && cond <= 531) { // Rain
        condAdvice = "Crocs with Socks";
    } else if (cond >= 600 && cond <= 622) { // Snow
        condAdvice = "Sneakers";
    } else if (cond >= 701 && cond <= 781) { // Atmosphere
        condAdvice = "Short Shorts";
    } else if (cond == 800) { // Clear
        condAdvice = "Rain Cap";
    } else if (cond >= 801 && cond <= 804) { // Clouds
        condAdvice = "Medical Mask";
    } else {
        condAdvice = "Birthday Suite";
    }


    if(temperature < 0.0){
        tempAdvice = "Muscle Tee";
    } else if (temperature < 32.0) {
        tempAdvice = "Favorite T-Shirt";
    } else if (temperature < 75) {
        tempAdvice = "Sleeveless Sweatshirt";
    } else {
        tempAdvice = "Warmest Jacket";
    }

    return "Don't forget to wear your " + condAdvice + " and " + tempAdvice;
}