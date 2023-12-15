# Audio-Sampler
This project takes in audio input from a Node.js server and a Sparkfun Electronics Electret Microphone connected to the BeagleBone using an analog to digital pin. It can display the audio signals analyzed by a fast fourier transform library using a 16x32 LED display and a react web page with a virtual LED display. This project can also display the current time on the 16x32 LED display. Colors for the LED display can be changed using the potentiometer on the Zen cape. Users can choose from the following colors: black, red, green, yellow, blue, magenta, teal and white. Additionally, users can change modes using the joystick: by pressing up or down, users can change whether the input comes from the Electret Microphone or the Node.js server, and by pressing left or right, users can display the current time or the audio visualizer. Lastly, the system also plays back the audio received from the Node.js server through asound.

## To Run:
&nbsp; &nbsp; &nbsp; Type "Make" into the host's terminal  \
&nbsp; &nbsp; &nbsp; ./finalProjectStart <- for application \
&nbsp; &nbsp; &nbsp; ./finalProjectStartReact <- to start the react server \
&nbsp; &nbsp; &nbsp; ./finalProjectStartUDP <- to start the node server 

## Demo 


https://user-images.githubusercontent.com/105681721/235852495-2128370b-4c79-460f-9584-a705b4c68137.mp4

![20230405_135036](https://user-images.githubusercontent.com/105681721/235852506-0b212bf9-6e2b-46cc-bd29-76227ea3529f.jpg)

![Picture2](https://user-images.githubusercontent.com/105681721/235852884-759e0745-b6e1-4e60-a80f-d3729e9765a6.png)
![Picture3](https://user-images.githubusercontent.com/105681721/235853012-3018c84b-ca1c-443f-890e-1402713330ff.png)
