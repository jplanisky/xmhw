#pragma once

enum XMODEM_STATES {XMODEM_INITIAL, XMODEM_SEND_REQUEST_FOR_TRANSFER, XMODEM_WAIT_FOR_TRANSFER_ACK, XMODEM_TIMEOUT_TRANSFER_ACK,
                    XMODEM_TIMEOUT_WAIT_READ_BLOCK, XMODEM_ABORT_TRANSFER, XMODEM_READ_BLOCK, XMODEM_TRANSFER_ACK_RECEIVED,
                    XMODEM_TRANSFER_COMPLETE, XMODEM_BLOCK_RECEIVED, XMODEM_INVALID_BLOCK, XMODEM_ACK_BLOCK, XMODEM_VALID_BLOCK,
                    XMODEM_UNKNOWN } typedef xmodem_state_t;

xmodem_state_t xmodem_state();
bool xmodem_init();
bool xmodem_process(const uint32_t current_time);
bool xmodem_cleanup();


