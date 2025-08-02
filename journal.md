---
title: "Gift Of Time"
author: "Sujay"
description: "Inspired by the clock 'A Million Times', but with additional features and a screen to control unique features"
created_at: "2025-07-30"
total_hrs_submitted: 25
total_hrs_spent: 25 + 15 = 40
---

# July 30 - Brainstorming, research, BOM
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

# July 31 - Wiring diagram, CAD for components
## Hours spent: 15
For one of my previous projects, the wiring was simple so I made it on Canva, but for this project, I believed that making a proper schematic diagram would be appropriate. However, I am not very experienced, so my wiring diagram is a big mess. The wiring itself is fine, I just didn't know how to organize my page, so all the wires seem to overlap randomly. I also realized that some components weren't in the KiCAD software by default, so I had to improvise and find a similar model. This applied to the LED and the motor driver specifically, and while the LED ended up working fine, I had to use a similar model LED driver for the motor driver. I also realized it wont work for the 3 pin servo motor cables, so I didn't end up connecting the wires for the motors and the motor driver, hoping that it is obvious how to connect 16 motors to the 16 channels. I didn't know how buttons worked until today, but after research I figured out that part too. I had to pull up guides for every component, which was time consuming but I'm sure it will help me later on. Here's the finalized wiring diagram:
<img width="1478" height="1048" alt="image" src="https://github.com/user-attachments/assets/014c54dc-d899-4d20-aed5-6a606b16e50a" />

For the CAD, I ended up almost recreating my own version of the key functional components for the individual clocks, which were fairly simple, but making a frame and assembling the model took a while. For a clock of such size, it is not possible to 3D print an entire frame, so I explored options like magnetically attaching fourths of the clock. 

# August 1 - CAD for frame and components, assembly and clean up
## Hours spent: 15
I realized that I could just be printing multiple clocks directly on the flat surface of the big clock and split the whole clock into 4 for 3D printing purposes that can be screwed together, so I changed the clock body file and made it work. The assembly took a while, as it was mostly repetitive but I made it work.
<img width="1473" height="824" alt="image" src="https://github.com/user-attachments/assets/2f9a61be-73b0-4b22-aa99-3cad4e7d739a" />
<img width="1506" height="771" alt="image" src="https://github.com/user-attachments/assets/c8133866-da43-4644-9ff3-91b6a3b85910" />

Then, I thought of making a frame to connect everything together, but it can't printed as one piece either, so I made individual components with holes for screws. Most of the frame's body was symmetrical so I had to design 2 components specifically and mirror the parts, ending up here:
<img width="1559" height="1132" alt="image" src="https://github.com/user-attachments/assets/49935c89-b82f-40b2-93f4-ac042ecba559" />
<img width="1375" height="1006" alt="image" src="https://github.com/user-attachments/assets/1dcb2bee-64d8-45cc-b366-ce0c57c9a0b4" />

But for the last edge, I needed it to be different as it had to hold a speaker and a screen, so I custom designed them (which was repetitive and took a while) but I finished it in a few hours. I had to make a lot of makeshift components as rectangular prism placeholders as it was impractical and unnecessary to find individual CAD models for this purpose. I also changed the colors of the frame, makeshift components, wood, etc. to make it look appealing and I finally made small adjustments to make sure everything could be screwed to wood. Final pictures are in the README file. Also had to make a "Notes to Reviewers" section to make sure I could communicate everything neatly. With this, I hope this project goes through :D (and I can finally get some sleep T-T)
