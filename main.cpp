/*
Project 3 - Part 1a-d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you 
writing C++ code that compiles and to reinforce the syntax habits 
that C++ requires.  
What you create in this project will be used as the basis of 
Project 5 in C++ Language Fundamentals.

************************
Part1 purpose:  Learn to write User-Defined Types (UDTs)

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps, all on the same branch.
    Part 1a: you will learn to think about an object in terms of 
    its sub-objects.
    
    Part 1b: you will write 4 un-related UDTs in plain english.
    
    Part 1c: you will write 1 UDT in plain english that will be 
    made of 5 related sub-objects.
    
    Part 1d: you will write plain-english UDTs for the 5 
    sub-objects that form the UDT defined in Part 1c.
    
    Part 1e: you will convert those 10 plain-english UDTs into code 
    that runs.
************************
*/

/*
Part 1a - Lesson
1) Look at the picture of the car interior (Part1a pic.jpg).  
    It's in the list of files on the left in Replit.
    Fill in the blanks below which break this car interior down 
    into sub-objects.

Several sub-objects are listed below that make up this car's interior.
    you're going to name several things that you'll find on each 
    subobject.
    you're going to name several things that each subobject can do.
    If you've seen "Family Feud", we are going to do what they do 
    in that show.

    A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3) blinkers
        4) horn
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) activate blinkers
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) speedometer
        2) gear indicator
        3) blinker status
        4) board alarm
    Name 3 things you can do with the:   Instrument Cluster
        1) activate blinker
        2) show alarm
        3) show current gear
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) seat heater
        2) air condition 
        3) flow conrol
    Name 3 things you can do with the:   Environment Controls
        1) adjust heating level
        2) adjust temperature
        3) adjust flow control

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) audio volume control
        2) rotary knob
        3) radio station preset buttons
    Name 3 things you can do with the:   Infotainment System
        1) adjust audio volume
        2) navigate infotainment screen
        3) switch radio station

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) horizontal control
        2) vertical control
        3) lumbar support cushion
    Name 2 things you can do with the:   Seat
        1) adjust horizontal position
        2) adjust vertical position
*/

/*
Part 1b - Lesson
Now you have some basic understanding of how to think of an object 
in terms of its sub-objects.

Next, write 4 un-related UDTs in plain english:
*/
/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has 
    eco-friendly cleaning supplies" as one of the properties.
    
    Writing 'has a ___" checks whether or not your object **has the 
    ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of 
    eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you 
    can use 'std::string' to represent strings in this project.
 */

/*
===================
Part 1b Assignment: 1 Step
===================
1)  Fill in the 4 UDTs below with a random UDT in plain english.
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or 
        properties and 3 things it can do.
        b) remember: these properties will eventually become
        primitives.
        c) pick properties that can eventually be represented with 
        'int float double bool char std::string'.
*/

 /*
Part 1c - Lesson
You have just finished practicing writing out a UDT that is has 
5 properties and can perform 3 actions.  

Now you will write 1 UDT in plain english. 

This UDT will be different than the previous 4 you wrote: It will 
use UDTs to describe its 5 properties, as opposed to using C++ 
primitives to describe the 5 properties.

You will define these 5 'property' UDTs in Part 1d.
 */

 /*
Part 1c example:
    Cell Phone

    A Cell Phone is built using the following 5 UDTs:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or 
    "has a cpu" as one of the properties of the CellPhone.
    
    Writing 'has a ___" checks whether or not your object **has 
    the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific 
    objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of 
    these 5 Sub Objects will need to be defined with 5 primitive 
    properties and 3 actions EACH.
*/
/*
===================
Part 1c assignment: 2 steps
===================

1) write the name of the primitive type you'll be using after each 
    property in UDTs 1-4 from Part 1b:
    pick properties that can be represented with 
    'int float double bool char std::string'.
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            area in cm2 (int)
            brand (std::string)

2) Fill in the 10th UDT below.
Define an object that is made of 5 sub-objects.
    These 5 sub-objects will not be defined using Primitives, but instead will be their own UDTs 
    you'll define these 5 sub-objects in Part 1d.
*/

/*
Part 1d - Lesson
You now know how to define a UDT that is composed of other UDT.
Now you will learn how to break down those sub-object UDTs into 
their 5 properties and 3 actions.

The goal of Part 1d is to get you to think about breaking down an 
object into smaller and smaller objects, until the smallest object 
is made of up only C++ primitives and std::string. 

Revisiting the previous example:  
Cell Phone

A Cell Phone is made up of the following 5 properties/sub-objects 
and 3 actions:
    Display
    Memory
    CPU
    Radio
    Applications
3 actions:
    make a call
    send a text
    run an application.

These 5 properties can be broken down into their own sub-objects 
and properties. 

If we break down the first property 'Display' into its 5 properties 
we get:
    brightness
    amount of power consumed.
    pixels
    width in cm
    height in cm

the Display's brightness can be represented with a Primitive, 
such as a double. 

The amount of power consumed can also be represented with a 
Primitive, such as a float or integer (i.e. 250mWa)

The 'pixels' property must be represented with an array of Pixel 
instances, as the screen has more than 1 row of pixels.
    Arrays have not been discussed and can't be used in this 
    project.
    Instead, we can use an Integer primitive to store the 
    Number of Pixels:

Display:
    Number of Pixels
    Amount of Power consumed (milliwatt-hours)
    Brightness
    width in cm
    height in cm

As you can see, the 'Display' UDT has been broken down to the 
point of being able to describe it with C++ primitives. 
*/

/*
===================
Part 1d assignment: 3 Parts.
===================

1) Fill in #5 - #9 below with plain-english UDTs for the 5 
properties you created for UDT #10. 
    example: 
        If #10's first property was 'Engine', then `Thing 5)` 
        will be `Engine`. 
        You will need to provide 5 properties and 3 member 
        functions of that Engine object in plain English.
        Remember to pick properties that can be represented 
        with 'int float double bool char std::string'.

2) write the name of the primitive type you'll be using after 
each property for UDTs 5 - 9.
    You already did this for UDTs 1-4 in Part 1c.
    Pick properties that can be represented with 
    'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

Step 3 is written below UDTs 5 - 9
*/

/*
===================
Part 1d assignment: Step 3
===================
You've just defined 10 UDTs!
4 of them are unrelated (UDTs 1-4).
5 of them form the sub-objects that make up the 10th UDT. 

MOVE THEM BELOW this block comment and put them in numerical order 
(1 - 10) starting on line 473
    DO NOT COPY. 
    I do not want to see 2 copies of your Plain-English UDTs.  
    I only want to see the 10 UDTs written BELOW this block comment, in numerical order (1 - 10).

After you have MOVED your 10 UDTs, send me a DM with your pull request link.
I will review the pseudo-code that you have written.
*/











































































































































/*
Thing 1) mixing console
5 properties:
    1) amount of faders (int)
    2) number of buttons (int)
    3) number of rotaries (int)
    4) number of inputs (int)
    5) number of outputs (int)
3 things it can do:
    1) adjust audio level
    2) receive input signal
    3) equalize audio signal
 */

/*
Thing 2) car rental
5 properties:
    1) number of cars (int)
    2) amount of insurance cost (float)
    3) number of garages (int)
    4) number of car cleaners (incl. half time) (float)
    5) days of rental time (int)
3 things it can do:
    1) cleaning the car 
    2) store the car
    3) charge the customer
 */

/*
Thing 3) broadcast company
5 properties:
    1) number of stations (int)
    2) number of broacast vans (int)
    3) percentage of news programs (float)
    4) amount of ad revenue (double)
    5) amount of power consumtion (float)
3 things it can do:
    1) broadcast program
    2) schedule advertisement
    3) pay power bill
 */

/*
Thing 4) electric skateboard
5 properties:
    1) number of wheels
    2) battery capacity
    3) number of motors
    4) maximum speed
    5) breaking power
3 things it can do:
    1) drive
    2) break
    3) load battery
 */

/*
Thing 5) Camera
5 properties:
    1) number of lenses (int)
    2) resolution (double)
    3) bit depth (int)
    4) frame rate (int)
    5) number of sensors (int)
3 things it can do:
    1) switch perspectives
    2) adjust color room
    3) do slow motion
 */

/*
Thing 6) Keyboard
5 properties:
    1) number of keys (int)
    2) key travel distance (float)
    3) brightness of background light (double)
    4) RGB of Background LEDs (int)
    5) battery life indicator (int)
3 things it can do:
    1) change RGB color
    2) show battery life
    3) adjust background light brightness
 */

/*
Thing 7) Motherboard
5 properties:
    1) power consumption (float) 
    2) amount of RAM bus speed (double)
    3) fan control in rpm (int)
    4) sata controller transfer rate (double)  
    5) PCIe bandwidth (double)
3 things it can do:
    1) regulate fan speed
    2) balancing sata load
    3) regulate power supply
 */

/*
Thing 8) Battery
5 properties:
    1) heat sensors (float)
    2) number of cells (int)
    3) number of BMS (int)
    4) charger (float)
    5) i2c bus data rate (double)
3 things it can do:
    1) switch between battery and power supply
    2) control draw
    3) regulate charging voltage
 */

/*
Thing 9) Audio Controller
5 properties:
    1) number of watts (float)
    2) subwoofer crossover frequency (float)
    3) nominal impedance (float)
    4) freqency response (double)
    5) number of sample rates (int)
3 things it can do:
    1) regulate audio level
    2) adjust subwoofer roll off
    3) switch between sample rates
 */

/*
Thing 10) Laptop
5 properties:
    1) Camera
    2) Keyboard
    3) Motherboard
    4) Battery
    5) Audio Controller
3 things it can do:
    1) send binary key scan code to OS 
    2) play audio stream
    3) take picture
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
