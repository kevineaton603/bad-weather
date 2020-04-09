#include "UserInput.h"
/* PRE: Input Stream
 * POST: Intger Value given by user
 * RETURN: Integer Value
 */
int getUserInput(istream& input){
    int value;
    input >> value;
    return value;
}