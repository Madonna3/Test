void setup() {
    
}


// loop() runs over and over again, as quickly as it can execute.
void loop() {
  for (int i=1 ; i<= 10; i++){
      Particle.publish ("Print", String (i));
      delay(1000);
      
  }
  
}