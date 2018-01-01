#ifndef _TTY_H_
#define _TTY_H_

typedef void (*outbound_byte_fn)(uint8_t b);

void tty_init(outbound_byte_fn);
void tty_work(void);
void tty_write_str(char *s);

#endif
