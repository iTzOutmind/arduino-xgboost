void setup() {
    Serial.begin(9600);
}
void loop() {
    Serial.println("inoScore0;inoScore1;inoLabel");
    inputContainer();
    delay(5000);
}
void infer(double input[]){
    int distinctLabels = 2;
    int printPrecision = 52;
    double result[distinctLabels];
    
    score(input, result);
    printScore(result, distinctLabels, printPrecision);
}
void printScore(double input[], int length, int precision) { // Format: Score0, Score1\n
    double x0 = input[0];
    double x1 = input[1];

    for(int i = 0; i < length; i++) {
        Serial.print(input[i],precision);
        Serial.print(";");
    }

    if(x0>x1) { Serial.println(0); } 
    else { Serial.println(1); }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
}

// Custom Content goes here:

