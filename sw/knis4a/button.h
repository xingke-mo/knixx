#ifndef BUTTON_H_
#define BUTTON_H_

enum button {
	BUTTON_1, /* B9 */
	BUTTON_2, /* A15 */
	BUTTON_3, /* A4 */
	BUTTON_4, /* A7 */
	MAX_BUTTONS
};

void button_setup(void);

#endif
