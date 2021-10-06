## Classwork

In order to familiarize yourself in the overall coding structure and different IO, we've prepared some classwork for you. Please try to finish the tasks before leaving. You can ask for help if you encounter any difficulties.

## TFT library

Please check this [note](https://hackmd.io/@leowong12138/HkCcNwPNF) out to include the LCD TFT library.

## Skeleton code

Get the skeleton code [here](https://github.com/HKUST-Robotics-Team/HKUST-Robotics-Team-SW-Tutorial-2021/blob/main/Tutorial%202%20-%20Basic%20IO/tutorial2_hw_skeleton.c) and drag it into your directory. Comment out the lcd include first, we are not using it for now. Also, add the function prototypes in `main.c` for the declaration of the functions.

```c
/* main.c */
/* USER CODE BEGIN PFP */
void gpio_classwork(void);
void tft_classwork(void);
/* USER CODE END PFP */
```

#### Task1

- When BTN1 is held, LED1 should be on.
- When BTN2 is held, LED2 should be flashing (toggle in 50ms).
- When both BTN1 and BTN2 are held, the following sequence is conducted:
  - LED1 and LED3 are on while LED2 and LED4 are flashing.
  - After 1 second, LED1 and LED3 are flashing while LED2 and LED4 are on.
  - After 1 second, repeat from step 1.

#### Task 2

- Print the time elapsed with the format of `mm:ss:sssZ` where `sssZ` means millisecond. e.g. `00:23:109`
- Print a 50px \* 50px square directly under the elapsed time where its color changes when 1 second passed.

You may find these defines in `lcd.h` useful:

```c
#define CHAR_WIDTH 8
#define CHAR_HEIGHT 16

#define MAX_WIDTH 128
#define MAX_HEIGHT 160

#define CHAR_MAX_X_VERTICAL 16
#define CHAR_MAX_Y_VERTICAL 10

#define CHAR_MAX_X_HORIZONTAL 20
#define CHAR_MAX_Y_HORIZONTAL 8

#define CHAR_MAX_X 20  // max between CHAR_MAX_X_VERTICAL and CHAR_MAX_X_HORIZONTAL
#define CHAR_MAX_Y 10  // max between CHAR_MAX_Y_VERTICAL and CHAR_MAX_Y_HORIZONTAL
```

## Homework

#### Edge vs Level Triggering

Consider 2 uses for a button:

Level Triggering (5 marks)

- While the button is down print `Hello, (Your name)` on TFT (2m), while it is not, flash the LED (2m). Two actions should not happen simultaneously (1m).
  - In this case every time the loop comes around, we are concerned with the current state (or level) of the buttons GPIO Pin
  - The implementation of the button reading here should be obvious and simple

Edge Triggering (10 marks)

- What if, we wanted to print `Hello, (Your name)` for 1 second when the button is first clicked, but only once, so holding the button does nothing more (5m). When the button is first released, we want to flash the LED, but again only once(5m)
  - The event of a signal going from low to high is called the _rising edge_ and the opposite is the _falling edge_
  - The `gpio_read()` macro gives us the current state, but edge triggering also requires knowledge of the past state as well as some logic

**_Thinking Time_**: How can we design some code that can call a function _only_ when the button is first clicked? (Rising edge)

#### (Bonus) - For those who want some fun (15 marks)

- Create a sprite in the middle of the screen. (Can be in any shape other than simple rectangle) (3m)
- It will move to the left for one CHAR_WIDTH when BTN1 is pressed, move to the right for one CHAR_WIDTH when BTN2 is pressed. (5m)
- Long press (> 250ms) and release BTN1 for it to move up for one CHAR_HEIGHT. Long press and release BTN2 for it to move down for one CHAR_HEIGHT. (7m)

## Format of submitting Homework

#### Demonstration

You are required to demonstate the homework to seniors at Room CYT3007. Seniors will help your to review your homework and record the performance of your code.

#### Github

It is highly recommanded that you push the code on Github after the demonstration. There are a few things to notice:

- Create a new folder for every task
- Push only the file you have changed (e.g. gpio.c, main.c, ...)
- Update the README in the folder and state your date&time of demonstration with the name of senior which you are demonstrated to.

It may go like this

```
# Homework 2
Please push your code here after we have checked your homework at CYT3007

Date of demonstration: 7 Sep 20:31
Name of senior: Robocon - Leo

```
