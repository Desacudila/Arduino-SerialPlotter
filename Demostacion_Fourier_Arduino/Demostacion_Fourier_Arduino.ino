/*
 *      -----SINUS PLOTTER-----
 * 
 * Por "Ingeniero en Casa"
 * https://www.youtube.com/channel/UCurfoG9YbFyQmxCLlxZVArg
 * 
 * La distribución y/o modificación del código es totalmente libre.
 */

void setup() {
  delay(3000);
  Serial.begin(115200);
  delay(3000);
  Serial.println("sen(wt) sen(3wt) sen(5wt) sen(7wt) sen(9wt) sen(11wt)");
}

void loop() {
  
    for (int x=0; x<360; x++){
      Serial.print(sin(x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");          
      Serial.println(0);      
      delay(12);  
    }   
    delay(500); 
    for (int x=0; x<360; x++){
      Serial.print(sin(x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(3*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");          
      Serial.println(0);      
      delay(12);  
    }    
    delay(500);
    for (int x=0; x<360; x++){
      Serial.print(sin(x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(3*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(5*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");        
      Serial.println(0);      
      delay(12);  
    }  
    delay(500);  
    for (int x=0; x<360; x++){
      Serial.print(sin(x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(3*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(5*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(7*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");         
      Serial.println(0);      
      delay(12);  
    }  
    delay(500);  
    for (int x=0; x<360; x++){
      Serial.print(sin(x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(3*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(5*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(7*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(9*x*DEG_TO_RAD));
      Serial.print(" ");         
      Serial.println(0);      
      delay(12);  
    }  
    delay(500);  
    for (int x=0; x<360; x++){
      Serial.print(sin(x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(3*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(5*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(7*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.print(sin(9*x*DEG_TO_RAD));
      Serial.print(" ");     
      Serial.println(sin(11*x*DEG_TO_RAD));      
      delay(12);  
    }      
    delay(500);                
    for (int x=0; x<360; x++){ 
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");     
      Serial.print(0);
      Serial.print(" ");  
      Serial.println(sin(x*DEG_TO_RAD) + sin(3*x*DEG_TO_RAD)/3 + sin(5*x*DEG_TO_RAD)/5 
                      + sin(7*x*DEG_TO_RAD)/7 + sin(9*x*DEG_TO_RAD)/9 + sin(11*x*DEG_TO_RAD)/11);
      delay(12);  
    }   
    delay(1000);
}
