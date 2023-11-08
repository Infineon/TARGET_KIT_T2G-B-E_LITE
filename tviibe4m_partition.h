#if !defined(LAYOUT_TVIIBE4M_H)
#define LAYOUT_TVIIBE4M_H

#define STACK_SIZE                      0x1000
#define RAMVECTORS_ALIGNMENT            8

#define SRAM_START_RESERVE              0
#define SRAM_PRIVATE_FOR_SROM           0x800 /* 2K Private SRAM for SROM (e.g. API processing). Reserved at the beginning */

/* RAM */
#define SRAM_BASE_ADDRESS               0x08000000  /* SRAM START */
#define CM0PLUS_SRAM_RESERVE            0x00020000  /* 128K (SRAM0/128KB) -> cm0plus */

/* FLASH */
#define CODE_FLASH_BASE_ADDRESS         0x10000000  /* FLASH START */
#define CM0PLUS_CODE_FLASH_RESERVE      0x00080000  /* 512K CM0P FLASH SIZE */
#define CM4_0_CODE_FLASH_RESERVE        0x00380000  /* 3670K CM4_0 FLASH SIZE */

/* SRAM reservations */
#define BASE_SRAM_CM0P                  SRAM_BASE_ADDRESS + SRAM_START_RESERVE + SRAM_PRIVATE_FOR_SROM
#define SIZE_SRAM_CM0P                  CM0PLUS_SRAM_RESERVE - SRAM_START_RESERVE - SRAM_PRIVATE_FOR_SROM
#define BASE_SRAM_CM4_0                 SRAM_BASE_ADDRESS + CM0PLUS_SRAM_RESERVE

/* Code flash reservations */
#define BASE_CODE_FLASH_CM0P            CODE_FLASH_BASE_ADDRESS
#define SIZE_CODE_FLASH_CM0P            CM0PLUS_CODE_FLASH_RESERVE
#define BASE_CODE_FLASH_CM4_0           CODE_FLASH_BASE_ADDRESS + CM0PLUS_CODE_FLASH_RESERVE
#define SIZE_CODE_FLASH_CM4_0           CM4_0_CODE_FLASH_RESERVE


#endif /* LAYOUT_TVIIBE4M_H */


/* [] END OF FILE */
