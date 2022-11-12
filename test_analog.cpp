//this program runs the analogin class
//it starts with a value of 0 then reads the number of the adc value
#include "analogin.h"

int main(int argc, char* argv[])
{
    cout << "Starting testing analog program: " << endl << endl;
    
    analogin AIN0(0); //assigns analogin with adc 0 value
    
    int adcNum = AIN0.getNumber();	//gets adc num
	int adcVal = AIN0.readADCsample();	//gets adc value
	
	cout << "The ADC number is:  " << adcNum << endl;
	cout << "The ADC value is: " << adcVal <<  endl;

	return 0;

}

