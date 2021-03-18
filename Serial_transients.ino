int incoming_byte = 0; 
int output_pin=3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(output_pin, OUTPUT);
digitalWrite(output_pin, LOW);    // initialize with known state

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {// check for serial data
    incoming_byte = Serial.read(); // read the incoming byte
    if (incoming_byte=='A'){ // check for the overvoltage transient
     delay_A_overvoltage_transient();
}
    else if (incoming_byte=='B') {// check for the overvoltage transient
    delay_B_overvoltage_transient();  
}
    else if (incoming_byte=='C') {// check for the overvoltage transient
    delay_C_overvoltage_transient();  
    }
    else if (incoming_byte=='D') {// check for the overvoltage transient
    delay_D_overvoltage_transient();  
   
}
    else if (incoming_byte=='D') {// check for the overvoltage transient
    delay_D_overvoltage_transient();  
    
   }
   else if (incoming_byte=='E') {// check for the overvoltage transient
    delay_E_overvoltage_transient();  
    
   }
   else if (incoming_byte=='F') {// check for the overvoltage transient
    delay_F_overvoltage_transient();  
    
   }
   else if (incoming_byte=='G') {// check for the overvoltage transient
    delay_G_overvoltage_transient();  
    
   }
   else if (incoming_byte=='H') {// check for the overvoltage transient
    delay_H_overvoltage_transient();  
    
   }
   else if (incoming_byte=='I') {// check for the overvoltage transient
    delay_I_overvoltage_transient();  
    
   }
   else if (incoming_byte=='J') {// check for the overvoltage transient
    delay_J_overvoltage_transient();  
    
   }
   else if (incoming_byte=='K') {// check for the undervoltage transient
    delay_K_undervoltage_transient();  
    
   }
   else if (incoming_byte=='L') {// check for the undervoltage transient
    delay_L_undervoltage_transient();  
    
   }
   else if (incoming_byte=='M') {// check for the undervoltage transient
    delay_M_undervoltage_transient();  
    
   }
   else if (incoming_byte=='N') {// check for the undervoltage transient
    delay_N_undervoltage_transient();  
    
   }
   else if (incoming_byte=='O') {// check for the undervoltage transient
    delay_O_undervoltage_transient();  
    
   }
   else if (incoming_byte=='P') {// check for the undervoltage transient
    delay_P_undervoltage_transient();  
    
   }
   else if (incoming_byte=='Q') {// check for the undervoltage transient
    delay_Q_undervoltage_transient();  
    
   }
   else if (incoming_byte=='R') {// check for the undervoltage transient
    delay_R_undervoltage_transient();  
    
   }
   else if (incoming_byte=='S') {// check for the undervoltage transient
    delay_S_undervoltage_transient();  
    
   }
   else if (incoming_byte=='T') {// check for the undervoltage transient
    delay_T_undervoltage_transient();  
    
   }
  
  
}

else { 
  Serial.println("Waiting for a command"); // waiting 
}
}

void delay_K_undervoltage_transient(){// 28v and 8v  'K'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 50ms  )
  delay(56);  
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}
void delay_L_undervoltage_transient(){// 28v and 8v  'L'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 38ms  )
  delay(44);  
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}
void delay_M_undervoltage_transient(){// 28v and 8v  'M'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 170ms  )
  delay(176);  
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}
void delay_N_undervoltage_transient(){ // 28v and 8v  'N'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 128ms  )
  delay(134);  
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}
void delay_O_undervoltage_transient(){ // 28v and 8v  'N'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 12ms  )
  delay(18);  
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}
void delay_P_undervoltage_transient(){ // 28v and 8v  'N'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 50ms  )
  delay(56);  
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}
void delay_Q_undervoltage_transient(){ // 28v and 8v  'N'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 38ms  )
  delay(44);  
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}
void delay_R_undervoltage_transient(){ // 28v and 8v  'N'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 170ms  )
  delay(176); 
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}
void delay_S_undervoltage_transient(){ // 28v and 8v  'N'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 128ms  )
  delay(134); 
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}
void delay_T_undervoltage_transient(){ // 28v and 8v  'N'
  digitalWrite(output_pin, HIGH);   // generate a pulse for 12ms  )
  delay(18); 
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);   // remove the pulse and go to initial state
 
}

void delay_A_overvoltage_transient(){ //20 ms for 28v and 70v   'A'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 20ms)
  delay(26);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}
void delay_B_overvoltage_transient(){ //15ms for 28v and 70v 'B'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 15ms)
  delay(21);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}
void delay_C_overvoltage_transient(){ //75ms for 28v and 70v  'C'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 75ms)
  delay(81);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}

void delay_D_overvoltage_transient(){ //55ms for 28v and 70v  'D'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 55ms)
  delay(61);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}
void delay_E_overvoltage_transient(){ //12 ms for 28v and 70v   'E'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 12ms)
  delay(18);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}
void delay_F_overvoltage_transient(){ //20 ms for 28v and 70v   'F'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 20ms)
  delay(26);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}
void delay_G_overvoltage_transient(){ //15 ms for 28v and 70v   'G'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 15ms)
  delay(21);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}
void delay_H_overvoltage_transient(){ //75 ms for 28v and 70v   'H'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 75ms)
  delay(81);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}
void delay_I_overvoltage_transient(){ //55 ms for 28v and 70v   'I'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 55ms)
  delay(61);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}
void delay_J_overvoltage_transient(){ //12 ms for 28v and 70v   'J'
  digitalWrite(output_pin, HIGH);   // (generate a pulse for 12ms)
  delay(61);
  delayMicroseconds(140);
  digitalWrite(output_pin, LOW);    // remove the pulse and go to initial state
}
