const int Sensor_Fuerza = A0; //Pin del sensor de fuerza

void setup(){
    Serial.begin(9600); //Inicia la comunicación serial
    pinMode(Sensor_Fuerza, INPUT); //Configura el pin del sensor de fuerza como entrada
}

void loop(){
    int fuerza = analogRead(Sensor_Fuerza); //Lee el valor del sensor de fuerza
    Serial.println(fuerza); 
    delay(500); 
}