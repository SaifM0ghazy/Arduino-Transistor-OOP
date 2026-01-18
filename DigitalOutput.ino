
class DigitalOutput {
private:
	byte pin;
    bool isActive;
  	bool isActiveHigh;
  	
  void initialPinBegin( void ) {
  	if (isActiveHigh) {
      	digitalWrite(pin , LOW);
      } else {
      	digitalWrite(pin , HIGH);
      }
  }
  
public:
	DigitalOutput(byte p) 
    : pin(p) ,isActiveHigh(true) , isActive(false) {}
  
  	DigitalOutput(byte p , bool IAH)
    : pin( p ) ,isActiveHigh(IAH) , isActive(false){}
  
    void begin( void ) {
      pinMode(pin , OUTPUT);
      initialPinBegin();
      return;
    } 

    void on( void ) {
      if(!isActive) {
          digitalWrite(pin , isActiveHigh ? HIGH : LOW);
          isActive = true;
          return;
      }
    }
  
    void off( void ) {
      if(isActive) {
      	digitalWrite(pin , isActiveHigh ? LOW : HIGH);
        isActive = false;
        return;
      }
    }
  
    bool getState( void ) {
		return isActive;
    }
  
    void toggle( void ) {
		isActive ? off() : on();
        return;
    }
  
};

DigitalOutput pnpTransistor( 4 , false );
DigitalOutput npnTransistor( 11 );

void setup() {
  	Serial.begin(9600);
	pnpTransistor.begin();
  	npnTransistor.begin();
  
  	npnTransistor.on();
  	pnpTransistor.on();
}

void loop() {


}