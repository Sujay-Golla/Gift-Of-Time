# Gift-Of-Time
## By: Sujay 
### Description
I was inspired by a fancy clock on Instagram called "A Million Times," and I wanted to make a more modern, practical and perhaps interactive version of it. So, I built a clock with the same core idea, but included a built-in speaker that can detect audio and display patterns to visualize the music, buttons for special and interactive effects, LED lights for a modern effect, and a screen that can control the information played (ie. customized text, weather, date). 

I made this project because I wanted to challenge myself and combine multiple different projects that I've been really interested in for the past few months, like building my own interactive speaker. I'm a beginner to hardware, so I also like the balance of convoluted but repetitive hardware and challenging software, helping me build on my current skills and learn something new.   

### Assembled CAD
Front view: 
<img width="2336" height="1039" alt="image" src="https://github.com/user-attachments/assets/c144a17a-5498-4467-9f82-1831a70874c6" />

Isometric view:
<img width="1695" height="1102" alt="image" src="https://github.com/user-attachments/assets/a3479e13-1dea-484d-82ec-f865afac801a" />

Side view:
<img width="437" height="1179" alt="image" src="https://github.com/user-attachments/assets/8dd91e72-8a35-4097-aade-ebcd50725894" />

Back view:
<img width="2353" height="1069" alt="image" src="https://github.com/user-attachments/assets/a0a8bbdd-6e49-45cf-a6e2-83a38a0eb74f" />

Back view with wood:
<img width="2024" height="922" alt="image" src="https://github.com/user-attachments/assets/2ecf3b27-79f1-4b94-8592-8ca39bb3dfd4" />

### BOM

| Expense Details | Quantity | CAD Unit Cost | USD Unit Cost | USD Total Cost (including tax) | Link |
|-----------------|----------|----------------|----------------|-------------------------------|------|
| 10 pcs 360 degree Servo | 5 | $11.82 | $8.63 | $48.75 | [Link](https://www.aliexpress.com/item/1005007173214082.html) |
| Nano ESP32 Pre soldered | 1 | $0.00 | $0.00 | $0.00 | [Link](https://www.aliexpress.com/item/1005007277867368.html) |
| 3 pcs - 16 channel servo controller | 1 | $5.03 | $3.67 | $4.15 | [Link](https://www.aliexpress.com/item/1005005670283526.html) |
| Time Module | 1 | $0.00 | $0.00 | $0.00 | [Link](https://www.aliexpress.com/item/1005007143596890.html) |
| Jumper Wire kits | 2 | $0.00 | $0.00 | $0.00 | [Link](https://www.aliexpress.com/item/1005003219096948.html) |
| 5V 10A Power Supply | 1 | $6.37 | $4.65 | $5.25 | [Link](https://www.aliexpress.com/item/33051556213.html) |
| RGB LED Strips | 1 | $7.49 | $5.47 | $6.18 | [Link](https://www.aliexpress.com/item/1005007914556601.html) |
| 750 point Experimental Breadboard | 1 | $0.00 | $0.00 | $0.00 | [Link](https://www.aliexpress.com/item/1005007399563936.html) |
| 4 Ohm 3W Speaker | 1 | $3.27 | $2.39 | $2.70 | [Link](https://www.aliexpress.com/item/1005005699690954.html) |
| MAX98357 3.2W Audio Amplifier | 1 | $2.33 | $1.70 | $1.92 | [Link](https://www.aliexpress.com/item/1005007629020891.html) |
| 2.8" LCD Touch Screen | 1 | $7.59 | $5.54 | $6.26 | [Link](https://www.aliexpress.com/item/1005006623369442.html) |
| Assortment of buttons | 1 | $3.79 | $2.77 | $3.13 | [Link](https://www.aliexpress.com/item/1005004198996493.html) |
| 300 pcs resistors set | 1 | $0.00 | $0.00 | $0.00 | [Link](https://www.aliexpress.com/item/1005005855324735.html) |
| Soundproofing Foam - 6 pcs - 1ft by 1ft | 1 | $10.48 | $7.65 | $8.64 | [Link](https://www.aliexpress.com/item/1005007009108142.html) |
| White Hardwood | 1 | $22.98 | $16.78 | $18.96 | [Link](https://www.homedepot.ca/product/cutler-group-white-hardboard-1-8-x-4-x-8/1000167407) |
| 24 AWG 10 m Silicone wire | 1 | $3.48 | $2.54 | $2.87 | [Link](https://www.aliexpress.com/item/1005006064722016.html) |
| Panel wood 5/8 in. x 15 3/4 in. x 96 in. | 1 | $17.98 | $13.13 | $14.83 | [Link](https://www.homedepot.ca/product/columbia-forest-products-5-8-in-x-15-3-4-in-x-96-in-smarttop-shelving/1000185643) |

Total cost: 124 USD

## Wiring Diagram
<img width="1478" height="1048" alt="image" src="https://github.com/user-attachments/assets/5b176e98-0ec0-4856-b425-b60e2435274b" />

## Notes for reviewers:
- Although I've sourced most of the electronics at first from AliExpress, one of my cool friends said I could take some of the components I needed, so I won't be buying them with the Hack Club Grant. I've changed the prices of those items to $0
- By saving some money, I also decided to spend some on a growing concern about the noise of 48 servos, so I added soundproofing foam and wood to the BOM to make the clock complete.
- A lot of the CAD assembly has been worked on after submission, as I was trying to rush and submit the project in time.. (The procrastination was real) sorry about that :(
- I also realized that some components weren't in the KiCAD software by default, so I had to improvise and find a similar model. This applied to the LED and the motor driver specifically, and while the LED ended up working fine, I had to use a similar model LED controller instead of the motor driver (PCA9685) in the schematic. The problem is, the LED controller only had one pin to connect to, and since the servo controller and servo have 3 pins, I couldn't connect them together on KiCAD. Hence, I'm also adding a picture that I've annotated by drawing to show the servos connecting to the motor driver. This is just an illustration for 4 of the 16 motors connecting to a single motor driver, and it also applies to the two other motor drivers for a total of 48 servos. The diagram got really messy, so I didn't draw wires for all of the motors as it kind of defeats the purpose of showing the wiring, but luckily, the actual servos come with a single wire that connects to 3 pins, so it isn't as messy as it looks in the diagram. Here's the illustration:
<img width="1485" height="1186" alt="image" src="https://github.com/user-attachments/assets/1febc05c-3e8e-4c07-a525-5725127a9c4b" />
