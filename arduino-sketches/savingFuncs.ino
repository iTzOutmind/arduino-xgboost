void printScore(double input[], int length) { // Format Score0: value \n Score1: value\n...
    for(int i = 0; i < 2; i++) {
        Serial.print("Score ");
        Serial.print(i);
        Serial.print(": ");
        Serial.println(input[i]);
    }
}
  
void printScoreCompare(double input[], int length, int pc) { // Prints inference scores and sets label according to the larger value
    int x0 = input[0];
    int x1 = input[1];
    for(int i = 0; i < 2; i++) {
        Serial.print("Inference on Arduino: ");
        Serial.print("Score ");
        Serial.print(i);
        Serial.print(": ");
        Serial.print(input[i]);
        Serial.print("  |  ");
    }
    Serial.println();
    Serial.print("Label on Arduino: ");
    if(input[0]>input[1]){
        Serial.print(0);
    } else {
        Serial.print(1);
    }
    Serial.print("  |  ");
    Serial.print("Label on PC: ");
    Serial.println(pc);
    Serial.println();
}

void printScoreCSV(double input[], int length) { // Format: Score0, Score1\n
    int precision = 4;

    int x0 = input[0];
    int x1 = input[1];

    for(int i = 0; i < 2; i++) {
        Serial.print(input[i],precision);
        if(i==0) {
        Serial.print(",");
        }
    }
    Serial.println();
}

void changeColor() { // Changes status LED color on every func-call
    switch(color) {
        case 0: // GREEN
        digitalWrite(LEDR, HIGH);
        digitalWrite(LEDG, LOW);
        digitalWrite(LEDB, HIGH);
        color = 1;
        break;
        case 1: // YELLOW
        digitalWrite(LEDR, LOW);
        digitalWrite(LEDG, LOW);
        digitalWrite(LEDB, HIGH);
        color = 2;
        break;
        case 2: // RED
        digitalWrite(LEDR, LOW);
        digitalWrite(LEDG, HIGH);
        digitalWrite(LEDB, HIGH);
        color = 3;
        break;
        case 3: // RGB OFF
        digitalWrite(LEDR, HIGH);
        digitalWrite(LEDG, HIGH);
        digitalWrite(LEDB, HIGH);
        color = 0;
        break;
    }
}

void repeat(int repeatTime){  // Pauses for repeatTime between program-loops - prints message as indicator for each cycle
	Serial.println();
	Serial.println("##### REPEATING... #####");
	Serial.println();
	delay(repeatTime);
}

void infer(int time, int csv) { // time: delay between each inference, csv: 1 prints column-names for csv, else prints start|stop-values
	if(csv==1){
        Serial.println("aScore0,aScore1");        // Printing header to name columns in csv
    } else {
        Serial.println("Start: 0 | End: 250");    // Printing Range
    }

	// Declarations:
	int length = 2;
	double result[length];

	// Model Inference
	double x_0[] = {-0.623154, 3.131787, 11.257041, -0.736, -0.059642, 0.56997};
	int y_0 = 1;
	score(x_0, result);
	printScoreCSV(result, length, y_0);
	delay(time);

	double x_1[] = {1.366808, 2.376458, 11.491304, -0.219388, 0.297717, -0.341959};
	int y_1 = 1;
	score(x_1, result);
	printScoreCSV(result, length, y_1);
	delay(time);

    // Repeat as necessary
}