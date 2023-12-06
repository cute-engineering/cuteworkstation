#include <stdint.h>

enum
  {
	OP_LUI     = 0b0110111,
	OP_AUIPC   = 0b0010111,
	OP_JAL     = 0b1101111,
	OP_JALR    = 0b1100111,
	OP_BRANCH  = 0b1100011,
	OP_LOAD    = 0b0000011,
	OP_STORE   = 0b0100011,
	OP_SYSTEM  = 0b1110011,
	OP_IMM     = 0b0010011,
	OP_REG     = 0b0110011,
	OP_FENCE   = 0b0001111,
	OP_AMO     = 0b0101111,
  };

enum
  {
	ISN32_MASK_OPCODE = 0b0000000000000000000000000111111,
	ISN32_MASK_FUNCT7 = 0b1111111000000000000000000000000,
	ISN32_MASK_RS2    = 0b0000000111110000000000000000000,
	ISN32_MASK_RS1    = 0b0000000000001111100000000000000,
	ISN32_MASK_FUNCT3 = 0b0000000000000000011100000000000,
	ISN32_MASK_RD     = 0b0000000000000000000011111000000,
	ISN32_MASK_IMM12  = 0b1111111111110000000000000000000,
	ISN32_MASK_IMM7   = 0b1111111000000000000000000000000,
	ISN32_MASK_IMM5   = 0b0000000000000000000011111000000,
	ISN32_MASK_IMM20  = 0b1111111111111111111100000000000,
  };

#define ISN_LEN_16(x) ((x & 0b11) != 0b11)

/* 16bit compressed instruction mask */
enum
  {
	ISN16_MASK_OP     = 0b0000000000000011,
	ISN16_MASK_FUNCT4 = 0b1111000000000000,
	ISN16_MASK_RS1    = 0b0000111110000000,
	ISN16_MASK_RS2    = 0b0000000001111100,
	ISN16_MASK_FUNCT3 = 0b1110000000000000,
	ISN16_MASK_IMM1   = 0b0001000000000000,
	ISN16_MASK_IMM5   = 0b0000000001111100,
	ISN16_MASK_IMM6   = 0b0001111110000000,
	ISN16_MASK_IMM8   = 0b0001111111100000,
	ISN16_MASK_RDP    = 0b0000000000011100,
	ISN16_MASK_IMM3   = 0b0001110000000000,
	ISN16_MASK_RS1P   = 0b0000001110000000,
	ISN16_MASK_IMM2   = 0b0000000001100000,
	ISN16_MASK_RS2P   = 0b0000000000011100,
	ISN16_MASK_FUNCT6 = 0b1111110000000000,
	ISN16_MASK_FUNCT2 = 0b0000000001100000,
	ISN16_MASK_OFFST3 = 0b0001110000000000,
	ISN16_MASK_OFFST5 = 0b0000000001111100,
	ISN16_MASK_JMP    = 0b0001111111111100
  };

