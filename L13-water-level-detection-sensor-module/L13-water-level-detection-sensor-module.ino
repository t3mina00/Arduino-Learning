int adc_id = 0;
int HistoryValue = 0;
char printBuffer[128];

void setup() {
    Serial.begin(9600);
}

void loop() {
    // Get adc value
    int value = analogRead(adc_id); 

    // Print out if the change is enough big
    if(((HistoryValue>=value) && ((HistoryValue - value) > 10)) || ((HistoryValue<value) && ((value - HistoryValue) > 10))) {
        sprintf(printBuffer,"ADC%d level is %d\n",adc_id, value);
        Serial.print(printBuffer);
        HistoryValue = value;
    }
}
