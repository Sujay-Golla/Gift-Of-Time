---
title: "Gift Of Time"
author: "Sujay"
description: "Inspired by the clock 'A Million Times', but with additional features and a screen to control unique features"
created_at: "2025-07-30"
total_hrs: 25
---

# July 30
## Hours spent: 10
I've been wanting to make this clock for a long time, it was mesmerizing and also looked like a fun hardware and programming challenge, so I wanted to do it.  
<img width="1920" height="1166" alt="image" src="https://github.com/user-attachments/assets/fcba7dde-943b-4003-bf02-1e3aed9df048" />

But, to make it my own, I wanted to include certain features that would make it desirable for my workspace:
<img width="360" height="213" alt="image" src="https://github.com/user-attachments/assets/72eb2c15-a4d9-44e1-aba6-e7e4369096d0" />

So, today I researched and found these resources, while working on my BOM:
<img width="1599" height="812" alt="image" src="https://github.com/user-attachments/assets/02d8d52d-1432-4ad0-bb26-a7a39f63390c" />

Some tutorials I was inspired by:
- https://www.electroniclinic.com/bluetooth-speaker-using-esp32-and-max98357-i2s-digital-amplifier/
- https://www.instructables.com/Clockception-How-to-Build-a-Clock-Made-From-Clocks/

Though I am aware the majority of the clock will look similar to the tutorial, I think my unique features and configuring the necessary hardware for these features will make it worth 6 points for the custom category. Tomorrow, I hope to make the wiring diagram and finish CAD, especially as it is the last day of Highway!

# July 31
## Hours spent: 15
For one of my previous projects, the wiring was simple so I made it on Canva, but for this project, I believed that making a proper schematic diagram would be appropriate. However, I am not very experienced, so my wiring diagram is a big mess. The wiring itself is fine, I just didn't know how to organize my page, so all the wires seem to overlap randomly. I also realized that some components weren't in the KiCAD software by default, so I had to improvise and find a similar model. This applied to the LED and the motor driver specifically, and while the LED ended up working fine, I had to use a similar model LED driver for the motor driver. I also realized it wont work for the 3 pin servo motor cables, so I didn't end up connecting the wires for the motors and the motor driver, hoping that it is obvious how to connect 16 motors to the 16 channels. I didn't know how buttons worked until today, but after research I figured out that part too. I had to pull up guides for every component, which was time consuming but I'm sure it will help me later on. Here's the finalized wiring diagram:
<img width="1478" height="1048" alt="image" src="https://github.com/user-attachments/assets/014c54dc-d899-4d20-aed5-6a606b16e50a" />

For the CAD, I ended up almost recreating my own version of the key functional components for the individual clocks, which were fairly simple, but making a frame and assembling the model took a while. For a clock of such size, it is not possible to 3D print an entire frame, so I explored options like magnetically attaching fourths of the clock. 
