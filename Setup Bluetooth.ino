char data;

void setup(){
    Serial.begin(9600);
}

void loop(){
    if (Serial.available() > 0) {
        data = Serial.read();
    }

    else if (data == 'a'){
        //Isi Perintah
    }

    else if (data == 'a'){
        //Isi Perintah
    }

    else if (data == 'a'){
        //Isi Perintah
    }
}
