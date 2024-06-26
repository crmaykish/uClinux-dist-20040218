/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED
#define CONFIG_UCLINUX 1

/*
 * Code maturity level options
 */
#define CONFIG_EXPERIMENTAL 1

/*
 * Loadable module support
 */
#undef  CONFIG_MODULES

/*
 * Platform dependant setup
 */
#define CONFIG_M68000 1
#undef  CONFIG_M68EN302
#undef  CONFIG_M68328
#undef  CONFIG_M68EZ328
#undef  CONFIG_M68332
#undef  CONFIG_M68360
#undef  CONFIG_M68376
#undef  CONFIG_M5204
#undef  CONFIG_M5206
#undef  CONFIG_M5206e
#undef  CONFIG_M5249
#undef  CONFIG_M5272
#undef  CONFIG_M5307
#undef  CONFIG_M5407
#define CONFIG_CLOCK_AUTO 1
#undef  CONFIG_CLOCK_11MHz
#undef  CONFIG_CLOCK_16MHz
#undef  CONFIG_CLOCK_20MHz
#undef  CONFIG_CLOCK_24MHz
#undef  CONFIG_CLOCK_25MHz
#undef  CONFIG_CLOCK_33MHz
#undef  CONFIG_CLOCK_40MHz
#undef  CONFIG_CLOCK_45MHz
#undef  CONFIG_CLOCK_48MHz
#undef  CONFIG_CLOCK_50MHz
#undef  CONFIG_CLOCK_54MHz
#undef  CONFIG_CLOCK_60MHz
#undef  CONFIG_CLOCK_64MHz
#undef  CONFIG_CLOCK_66MHz
#undef  CONFIG_CLOCK_70MHz
#undef  CONFIG_CLOCK_140MHz

/*
 * Platform
 */
#undef  CONFIG_SM2010
#define CONFIG_MACKEREL 1
#define CONFIG_RAMAUTO 1
#undef  CONFIG_RAM05MB
#undef  CONFIG_RAM1MB
#undef  CONFIG_RAM2MB
#undef  CONFIG_RAM4MB
#undef  CONFIG_RAM8MB
#undef  CONFIG_RAM16MB
#undef  CONFIG_RAM32MB
#undef  CONFIG_RAM64MB
#define CONFIG_AUTOBIT 1
#undef  CONFIG_RAM8BIT
#undef  CONFIG_RAM16BIT
#undef  CONFIG_RAM32bit
#undef  CONFIG_RAMKERNEL
#define CONFIG_ROMKERNEL 1

/*
 * General setup
 */
#undef  CONFIG_PCI
#undef  CONFIG_NET
#undef  CONFIG_SYSVIPC
#define CONFIG_REDUCED_MEMORY 1
#define CONFIG_BINFMT_FLAT 1
#undef  CONFIG_BINFMT_ZFLAT
#define CONFIG_KERNEL_ELF 1
#undef  CONFIG_CONSOLE

/*
 * Floppy, IDE, and other block devices
 */
#define CONFIG_BLK_DEV_BLKMEM 1
#define CONFIG_NOFLASH 1
#undef  CONFIG_AMDFLASH
#undef  CONFIG_INTELFLASH
#undef  CONFIG_BLK_DEV_IDE

/*
 * Additional Block/FLASH Devices
 */
#undef  CONFIG_BLK_DEV_LOOP
#undef  CONFIG_BLK_DEV_MD
#define CONFIG_BLK_DEV_RAM 1
#undef  CONFIG_RD_RELEASE_BLOCKS
#undef  CONFIG_BLK_DEV_INITRD
#undef  CONFIG_DEV_FLASH
#undef  CONFIG_BLK_DEV_NFA

/*
 * Filesystems
 */
#undef  CONFIG_QUOTA
#undef  CONFIG_MINIX_FS
#undef  CONFIG_EXT_FS
#define CONFIG_EXT2_FS 1
#undef  CONFIG_XIA_FS
#undef  CONFIG_NLS
#define CONFIG_PROC_FS 1
#undef  CONFIG_HPFS_FS
#undef  CONFIG_SYSV_FS
#undef  CONFIG_AUTOFS_FS
#undef  CONFIG_AFFS_FS
#define CONFIG_ROMFS_FS 1
#undef  CONFIG_JFFS_FS
#undef  CONFIG_UFS_FS

/*
 * Character devices
 */
#undef  CONFIG_72001_SERIAL
#undef  CONFIG_DS1743

/*
 * Sound support
 */
#undef  CONFIG_M5249AUDIO

/*
 * Kernel hacking
 */
#undef  CONFIG_FULLDEBUG
#define CONFIG_ALLOC2 1
#undef  CONFIG_PROFILE
