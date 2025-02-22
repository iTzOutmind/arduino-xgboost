void setup() {
  // changeColor - Initialize pins as outputs
  // pinMode(LEDR, OUTPUT);
  // pinMode(LEDG, OUTPUT);
  // pinMode(LEDB, OUTPUT);

  // Serial Output
  Serial.begin(115200);
}

void printArray(int ar[], int len){
  for(int i = 0; i < (len-1); i++){
    Serial.print(ar[i]);
    Serial.print(", ");
  }
  Serial.print(ar[(len-1)]);
  Serial.println();
}

void repeat(int repeatTime){  // Pauses for repeatTime between program-loops - prints message as indicator for each cycle
	Serial.println();
	Serial.println("##### REPEATING... #####");
	Serial.println();
	delay(repeatTime);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a[6] = {1,2,3,4,5,6};
  int arraySize = sizeof(a)/sizeof(a[0]);
  Serial.print(sizeof(a));
  Serial.print(" | ");
  Serial.println(sizeof(a)/sizeof(a[0]));
  printArray(a, arraySize);
  repeat(1000);
  // memset(a,{6,5,4,3,2,1},6);
  // printArray(a, arraySize);
}
