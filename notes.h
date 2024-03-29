/***************************************************************
 * Frequencies for an entire piano keyboard. We pulled this info
 * from this website:
 * http://www.phy.mtu.edu/~suits/notefreqs.html
 * 
 * Note names are organized by octave and sharp (s) or flat (b).
 *
 * Note: #define is a pre-compiler directive, so on the first pass
 * through your code, the compiler will replace anything that
 * has a #define statement associated with it with the appropriate
 * string or value. 
 *
 * Notice that #define does not use an '=' or a ';' mark.
 *
 * It's convenient because it doesn't use up any processor resources 
 * and the math is done by the compiling computer rather than on
 * the Arduino.
 * 
 ***************************************************************/
#define beatLength 200  // # of milliseconds per beat

// Define the length of each note
#define WN   beatLength*4  // ...a whole note...
#define HN   beatLength*2  // ...a half note...
#define QN   beatLength    // ...a quarter note...
#define EN   beatLength/2  // ...an eighth note...
#define SN   beatLength/4  // ...and a sixteenth note.

// These are pre-written #defines for every note on a piano
#define Rest 0
#define noteC0 16
#define noteCs0 17
#define noteDb0 17
#define noteD0 18
#define noteDs0 19
#define noteEb0 19
#define noteE0 21
#define noteF0 22
#define noteFs0 23
#define noteGb0 23
#define noteG0 25
#define noteGs0 26
#define noteAb0 26
#define noteA0 28
#define noteAs0 29
#define noteBb0 29
#define noteB0 31
#define noteC1 33
#define noteCs1 35
#define noteDb1 35
#define noteD1 37
#define noteDs1 39
#define noteEb1 39
#define noteE1 41
#define noteF1 44
#define noteFs1 46
#define noteGb1 46
#define noteG1 49
#define noteGs1 52
#define noteAb1 52
#define noteA1 55
#define noteAs1 58
#define noteBb1 58
#define noteB1 62
#define noteC2 65
#define noteCs2 69
#define noteDb2 69
#define noteD2 73
#define noteDs2 78
#define noteEb2 78
#define noteE2 82
#define noteF2 87
#define noteFs2 93
#define noteGb2 93
#define noteG2 98
#define noteGs2 104
#define noteAb2 104
#define noteA2 110
#define noteAs2 117
#define noteBb2 117
#define noteB2 123
#define noteC3 131
#define noteCs3 139
#define noteDb3 139
#define noteD3 147
#define noteDs3 156
#define noteEb3 156
#define noteE3 165
#define noteF3 175
#define noteFs3 185
#define noteGb3 185
#define noteG3 196
#define noteGs3 208
#define noteAb3 208
#define noteA3 220
#define noteAs3 233
#define noteBb3 233
#define noteB3 247
#define noteC4 262
#define noteCs4 277
#define noteDb4 277
#define noteD4 294
#define noteDs4 311
#define noteEb4 311
#define noteE4 330
#define noteF4 349
#define noteFs4 370
#define noteGb4 370
#define noteG4 392
#define noteGs4 415
#define noteAb4 415
#define noteA4 440
#define noteAs4 466
#define noteBb4 466
#define noteB4 494
#define noteC5 523
#define noteCs5 554
#define noteDb5 554
#define noteD5 587
#define noteDs5 622
#define noteEb5 622
#define noteE5 659
#define noteF5 698
#define noteFs5 740
#define noteGb5 740
#define noteG5 784
#define noteGs5 831
#define noteAb5 831
#define noteA5 880
#define noteAs5 932
#define noteBb5 932
#define noteB5 988
#define noteC6 1047
#define noteCs6 1109
#define noteDb6 1109
#define noteD6 1175
#define noteDs6 1245
#define noteEb6 1245
#define noteE6 1319
#define noteF6 1397
#define noteFs6 1480
#define noteGb6 1480
#define noteG6 1568
#define noteGs6 1661
#define noteAb6 1661
#define noteA6 1760
#define noteAs6 1865
#define noteBb6 1865
#define noteB6 1976
#define noteC7 2093
#define noteCs7 2217
#define noteDb7 2217
#define noteD7 2349
#define noteDs7 2489
#define noteEb7 2489
#define noteE7 2637
#define noteF7 2794
#define noteFs7 2960
#define noteGb7 2960
#define noteG7 3136
#define noteGs7 3322
#define noteAb7 3322
#define noteA7 3520
#define noteAs7 3729
#define noteBb7 3729
#define noteB7 3951
#define noteC8 4186
#define noteCs8 4435
#define noteDb8 4435
#define noteD8 4699
#define noteDs8 4978
#define noteEb8 4978
