#include <lcom/lcf.h>
#include <stdint.h>
#include <stdio.h>

#define DELAY_US 20000
#define OUT_BUF 0x60
#define IN_BUF 0x60
#define WRITE_CMD 0x60
#define STAT_REG 0x64
#define ESC_BREAK 0X81
#define OBF 0x01
#define IBF 0x02
#define PAR_ERR 0x80
#define TO_ERR 0x40
#define READ_CMD 0x20
#define AUX 0x20
#define DATA_REPORT_ENABLE 0xF4
#define DATA_REPORT_DISABLE 0xF5
#define SET_REMOTE_MODE 0xF0
#define SET_STREAM_MODE 0xEA
#define READ_DATA 0xEB
#define ACK 0xFA
#define ERROR 0xFC
#define WRITE_TO_MOUSE 0xD4

int (mouse_enable_data_report)();

int(mouse_disable_data_report)();

int (mouse_subscribe_int)(uint8_t *bit_no);

int (mouse_unsubscribe_int)();

int(mouse_set_remote)();

int(mouse_set_stream)();

void (mouse_ih)();

int (send_command_mouse)(u32_t command);

bool (parse_packet)(struct packet *pack);

int (out_buf_read)();
