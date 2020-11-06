int S_A = 10;  //speed motor a
int M_A1 = 2; //motor a = +
int M_A2 = 3; //motor a = -
int M_B1 = 4; //motor b = -
int M_B2 = 5; //motor b = +
int S_B = 11;  //speed motor b
 //Syed Zakir Hossain Rayhan
int R_S = A0; //sensor R
int S_S = A1; //sensor S
int L_S = A2; //sensor L
 
void setup() 
{
pinMode(M_B1, OUTPUT);
pinMode(M_B2, OUTPUT);
pinMode(M_A1, OUTPUT);
pinMode(M_A2, OUTPUT);
pinMode(S_B, OUTPUT);
pinMode(S_A, OUTPUT);
 
pinMode(L_S, INPUT);
pinMode(S_S, INPUT);
pinMode(R_S, INPUT);
 
analogWrite(S_A,75); 
analogWrite(S_B,75); 
delay(200);
}
void loop()
{  
if ((digitalRead(L_S) == 0)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 0)){forword();}
 
if ((digitalRead(L_S) == 1)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 0)){turnLeft();}
if ((digitalRead(L_S) == 1)&&(digitalRead(S_S) ==0)&&(digitalRead(R_S) == 0)) {turnLeft();}
 
if ((digitalRead(L_S) == 0)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 1)){turnRight();}
if ((digitalRead(L_S) == 0)&&(digitalRead(S_S) == 0)&&(digitalRead(R_S) == 1)){turnRight();}
 
if ((digitalRead(L_S) == 1)&&(digitalRead(S_S) == 1)&&(digitalRead(R_S) == 1)){Stop();}
}
 
void forword(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, HIGH);
digitalWrite(M_B1, HIGH);
digitalWrite(M_B2, LOW);
analogWrite(S_A, 250); 
analogWrite(S_B, 250);   
}
 
 
void turnRight(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, HIGH);
digitalWrite(M_B2, LOW); 
analogWrite(S_A, 50); 
analogWrite(S_B, 50); 
}
 
void turnLeft(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, HIGH);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
analogWrite(S_A, 50); 
analogWrite(S_B, 50);
}
 
void Stop(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
}
 
