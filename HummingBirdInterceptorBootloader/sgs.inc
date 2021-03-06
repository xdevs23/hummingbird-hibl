;   Hummingbird Interceptor Boot Loader (HIBL)
;
;   Copyright 2011 Dominik Marszk
;
;   Licensed under the Apache License, Version 2.0 (the "License");
;   you may not use this file except in compliance with the License.
;   You may obtain a copy of the License at
;
;       http://www.apache.org/licenses/LICENSE-2.0
;
;   Unless required by applicable law or agreed to in writing, software
;   distributed under the License is distributed on an "AS IS" BASIS,
;   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
;   See the License for the specific language governing permissions and
;   limitations under the License.

@@:
db 'iROM rev 1.0'
db 32 - ($-@r) dup 0

 dw 0xD000C90C ;mirror_copy_start
 dw 0x70       ;init_vars_size
 dw 0xD00354D0 ;upload_ep_ptr
 dw 0xD0035400 ;init_vars_start
 dw 0xD0035458 ;uart_reg
 dw 0xD0035470 ;otg_info

 dw 0xD0007CAC ;init_system
 dw 0xD0007D78 ;start_usb_booting
 dw 0xD0005444 ;system_pause
 dw 0xD0005620 ;debug_print_irom
 dw 0xD00055B4 ;debug_print_byte_irom

IRQ_enable		     equ 0xD000C694
get_irq_status		     equ 0xD0003CFC
SD_boot 		     equ 0xD000728C 
USB_Init		     equ 0xD0000340 
calculate_checksum	     equ 0xD0004EF8 
check_OTG		     equ 0xD0000224 
check_seckey		     equ 0xD0007EB8 
clear_VicAddress	     equ 0xD0003BCC 
complicate_math 	     equ 0xD000C66C 
config_USB		     equ 0xD00001D0 
config_USBOTG		     equ 0xD00001B0 
configure_oneNAND	     equ 0xD0003E70 
copy_sign_to_secboot_stack   equ 0xD0004E44 
debug_mode_boot 	     equ 0xD00087F4
disableVIC		     equ 0xD0003AC8 
enableVIC		     equ 0xD0003A34 
fill_mem_with_FF	     equ 0xD000590C 
fillmem 		     equ 0xD000AFAC 
generate_hmac_xor_efuse_hash equ 0xD000ACCC 
handle_usb_interrupt	     equ 0xD0001C4C 
init_debug_uart 	     equ 0xD0005810
init_sha1_values_for_chunk   equ 0xD000AA64
is_otg_on		     equ 0xD0002020 
load_sign_info		     equ 0xD0004E90 
memcpy			     equ 0xD000AEB8  
oneNAND_read1		     equ 0xD0004194 
oneNAND_read2		     equ 0xD0004AD4 
onenand_Boot		     equ 0xD0007A8C 
prepare_boot_uart	     equ 0xD000843C 
print_error		     equ 0xD0007EF4 
receive_byte		     equ 0xD0008594 
receive_usb_buffer	     equ 0xD000206C 
send_ping_recv_pong	     equ 0xD00085D0 
setVIC_handler		     equ 0xD0003B68 
set_timer		     equ 0xD0006138 
set_timer_interrupt	     equ 0xD0005164 
setup_boot_uart 	     equ 0xD00083C8 
setup_otg_controller	     equ 0xD00020B8 
start_uart_booting	     equ 0xD0008640
store_magics		     equ 0xD0004DF4
timer_interrupt_handler equ 0xD0006100	
timers_control		equ 0xD0005134 
usb_dload_code		equ 0xD0007CF4 
usb_interrupt_handler	equ 0xD0007CD0	
validate_code		equ 0xD000A924 
validate_public_rsa	equ 0xD000A7B4 
validate_sign		equ 0xD0007E6C 
xor_hmac_with_efuse	equ 0xD000B020 
zero_usb_stack		equ 0xD0002054