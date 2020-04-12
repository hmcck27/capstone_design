const int trigPin = 2;
const int echoPin = 5;

long duration;
int distance;


void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(115200);

  pinMode(23, OUTPUT);
  pinMode(13, OUTPUT);
}

int i = 0;
float prev = 0;

void loop() {
  // put your main code here, to run repeatedly:
  int _time;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration*0.034/2;

  Serial.print("Distance: ");

  Serial.print(distance);
  Serial.print("\n");



  Serial.print("start!\n");


    
 
    Serial.print("good\n");
    /*
    if(prev < distance) 
    {
       digitalWrite(23, 1);
       delay(round(distance));
        digitalWrite(23, 0);
    }
    else
    {
      digitalWrite(23, 1);
      delay(round(prev - distance));
      digitalWrite(23, 0);
    }*/

    digitalWrite(23, 1);
    
    delay(round(distance)/3);
    
    digitalWrite(23, 0);
    
    
  
  
  Serial.print("end!\n");
  prev = distance;  
  
}
