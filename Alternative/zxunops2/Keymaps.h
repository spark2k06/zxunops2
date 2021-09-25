/*
* Definiciones teclado con scancodes ps/2
*/
//KEY_1: !        KEY_2: @        KEY_3: #        KEY_4: $        KEY_5: %
//KEY_Q: NADA     KEY_W: NADA     KEY_E: NADA     KEY_R: <        KEY_T: >
//KEY_A: ~        KEY_S: |        KEY_D: \        KEY_F: {        KEY_G: }
//KEY_0: _        KEY_9: )        KEY_8: (        KEY_7: ´        KEY_6: &
//KEY_P: "        KEY_O: ;        KEY_I: NADA     KEY_U: ]        KEY_Y: [
//NADA            KEY_Z: :        KEY_X: (libra)  KEY_C: ?        KEY_V: /
//KEY_ENTER: NADA KEY_L: =        KEY_K: +        KEY_J: -        KEY_H: (flecha)
//KEY_SPACE: NADA NADA            KEY_M: .        KEY_N: ,        KEY_B: *

const uint8_t version[8] = { 2,5,0,9,2,0,2,1 }; //DDMMAAAA

const uint8_t rama[1] = { 2 }; // Rama del firmware (1: Original, 2: Alternativa)

#define KEY_ESCAPE 0x76
#define KEY_BACKSP 0x66
#define KEY_SCRLCK 0x7E

#define KEY_LCTRL   0x14
#define KEY_LALT    0x11

//Especiales, requieren E0
#define KEY_INS	    0x70
#define KEY_DELETE  0x71
#define KEY_RIGHT   0x74
#define KEY_LEFT    0x6B
#define KEY_HOME    0x6C
#define KEY_DOWN    0x72
#define KEY_UP      0x75
#define KEY_RCTRL   0x14
#define KEY_RALT    0x11
#define KEY_LWIN    0x1F
#define KEY_RWIN    0x27
#define KEY_APPS    0x2F
#define KEY_PGUP    0x7D
#define KEY_PGDW    0x7A
#define KEY_END     0x69
//Fin Especiales

#define KEY_A       0x1C
#define KEY_B       0x32
#define KEY_C       0x21
#define KEY_D       0x23
#define KEY_E       0x24
#define KEY_F       0x2B
#define KEY_G       0x34
#define KEY_H       0x33
#define KEY_I       0x43
#define KEY_J       0x3B
#define KEY_K       0x42
#define KEY_L       0x4B
#define KEY_M       0x3A
#define KEY_N       0x31
#define KEY_O       0x44
#define KEY_P       0x4D
#define KEY_Q       0x15
#define KEY_R       0x2D
#define KEY_S       0x1B
#define KEY_T       0x2C
#define KEY_U       0x3C
#define KEY_V       0x2A
#define KEY_W       0x1D
#define KEY_X       0x22
#define KEY_Y       0x35
#define KEY_Z       0x1A
#define KEY_1       0x16
#define KEY_2       0x1E
#define KEY_3       0x26
#define KEY_4       0x25
#define KEY_5       0x2E
#define KEY_6       0x36
#define KEY_7       0x3D
#define KEY_8       0x3E
#define KEY_9       0x46
#define KEY_0       0x45

#define KEY_ENTER   0x5A
#define KEY_SPACE   0x29

#define KEY_F1      0x05
#define KEY_F2      0x06
#define KEY_F3      0x04
#define KEY_F4      0x0c
#define KEY_F5      0x03
#define KEY_F6      0x0B
#define KEY_F7      0x83
#define KEY_F8      0x0A
#define KEY_F9      0x01
#define KEY_F10     0x09
#define KEY_F11     0x78
#define KEY_F12     0x07

#define KEY_LSHIFT  0x12
#define KEY_RSHIFT  0x59

#define KEY_CAPS    0x58

#define KEY_TAB     0x0D
#define KEY_BLOQNUM 0x77

#define KEY_TLD     0x0E //Izxda del 1
#define KEY_MENOS   0x4E //Drcha del 0
#define KEY_IGUAL   0x55 //Izda de Backspace
#define KEY_ACORCHE 0x54 //Drcha de la P
#define KEY_CCORCHE 0x5B //Siguiente a la de la Drcha de la P
#define KEY_BKSLASH 0x5D //Izda del Enter (Puede estar en la fila de la P o de la L
#define KEY_PTOCOMA 0x4C //La Ñ
#define KEY_COMILLA 0x52 //Derecha de la Ñ
#define KEY_COMA    0x41 //Decha de la M
#define KEY_PUNTO   0x49 //Siguiente del de la Derecha de la M
#define KEY_SLASH   0x4A //Izda del Shift Derecho
#define KEY_LESS    0x61 //Izda de la Z

//SCANCODES SET 1
#define KS1_RELEASE 0x80 //Valor que se suma al codeigo de la tecla para soltarla
#define KS1_ESCAPE 0x01
#define KS1_DELETE 0x53
#define KS1_BACKSP 0x0E
#define KS1_SCRLCK 0x46

#define KS1_LCTRL   0x1D
#define KS1_LALT    0x38

//Especiales, requieren E0
#define KS1_RIGHT   0x4D
#define KS1_LEFT    0x4B
#define KS1_DOWN    0x50
#define KS1_UP      0x48

#define KS1_RCTRL   0x1D
#define KS1_RALT    0x38

#define KS1_LWIN    0x5B
#define KS1_RWIN    0x5C
#define KS1_APPS    0x5D

#define KS1_PGUP    0x49
#define KS1_PGDW    0x51
#define KS1_HOME    0x47
#define KS1_END     0x4F
#define KS1_INS     0x52
#define KS1_DEL     0x53
//Fin Especiales

#define KS1_A       0x1E
#define KS1_B       0x30
#define KS1_C       0x2E
#define KS1_D       0x20
#define KS1_E       0x12
#define KS1_F       0x21
#define KS1_G       0x22
#define KS1_H       0x23
#define KS1_I       0x17
#define KS1_J       0x24
#define KS1_K       0x25
#define KS1_L       0x26
#define KS1_M       0x32
#define KS1_N       0x31
#define KS1_O       0x18
#define KS1_P       0x19
#define KS1_Q       0x10
#define KS1_R       0x13
#define KS1_S       0x1F
#define KS1_T       0x14
#define KS1_U       0x16
#define KS1_V       0x2F
#define KS1_W       0x11
#define KS1_X       0x2D
#define KS1_Y       0x15
#define KS1_Z       0x2C
#define KS1_1       0x02
#define KS1_2       0x03
#define KS1_3       0x04
#define KS1_4       0x05
#define KS1_5       0x06
#define KS1_6       0x07
#define KS1_7       0x08
#define KS1_8       0x09
#define KS1_9       0x0A
#define KS1_0       0x0B

#define KS1_ENTER   0x1C
#define KS1_SPACE   0x39

#define KS1_F1      0x3B
#define KS1_F2      0x3C
#define KS1_F3      0x3D
#define KS1_F4      0x3E
#define KS1_F5      0x3F
#define KS1_F6      0x40
#define KS1_F7      0x41
#define KS1_F8      0x42
#define KS1_F9      0x43
#define KS1_F10     0x44
#define KS1_F11     0x57
#define KS1_F12     0x58

#define KS1_LSHIFT  0x2A
#define KS1_RSHIFT  0x36

#define KS1_CAPS    0x3A

#define KS1_TAB     0x0F
#define KS1_BLOQNUM 0x45

#define KS1_TLD     0x29 //Izxda del 1
#define KS1_MENOS   0x0C //Drcha del 0
#define KS1_IGUAL   0x0D //Izda de Backspace
#define KS1_ACORCHE 0x1A //Drcha de la P
#define KS1_CCORCHE 0x1B //Siguiente a la de la Drcha de la P
#define KS1_BKSLASH 0x2B //Izda del Enter (Puede estar en la fila de la P o de la L
#define KS1_PTOCOMA 0x27 //La Ñ
#define KS1_COMILLA 0x28 //Derecha de la Ñ
#define KS1_COMA    0x33 //Decha de la M
#define KS1_PUNTO   0x34 //Siguiente del de la Derecha de la M
#define KS1_SLASH   0x35 //Izda del Shift Derecho
#define KS1_LESS    0x56 //Izda de la Z

#define KS1PAD_MENOS     0x4A // Keypad -
#define KS1PAD_MAS       0x4E // Keypad +
#define KS1PAD_ASTERISK  0x37 // Keypad *

#define KS1PAD_0     0x52 // Keypad 0
#define KS1PAD_1     0x4F // Keypad 1
#define KS1PAD_2     0x50 // Keypad 2
#define KS1PAD_3     0x51 // Keypad 3
#define KS1PAD_4     0x4B // Keypad 4
#define KS1PAD_5     0x4C // Keypad 5
#define KS1PAD_6     0x4D // Keypad 6
#define KS1PAD_7     0x47 // Keypad 7
#define KS1PAD_8     0x48 // Keypad 8
#define KS1PAD_9     0x49 // Keypad 9

#define KEYPAD_MENOS     0x7B // Keypad -
#define KEYPAD_MAS       0x79 // Keypad +
#define KEYPAD_ASTERISK  0x7C // Keypad *

#define KEYPAD_0         0x70 // Keypad 0
#define KEYPAD_1         0x69 // Keypad 1
#define KEYPAD_2         0x72 // Keypad 2
#define KEYPAD_3         0x7A // Keypad 3
#define KEYPAD_4         0x6B // Keypad 4
#define KEYPAD_5         0x73 // Keypad 5
#define KEYPAD_6         0x74 // Keypad 6
#define KEYPAD_7         0x6C // Keypad 7
#define KEYPAD_8         0x75 // Keypad 8
#define KEYPAD_9         0x7D // Keypad 9


#define MODO_A       ori
#define MODO_B       sam
#define MODO_C       jup
#define MODO_D       zx81
#define MODO_E       c16
#define MODO_F       ht8
#define MODO_G       galak
#define MODO_H       multi
#define MODO_I       zx80
#define MODO_J       atom
#define MODO_K       cpet
#define MODO_L       eg2000
#define MODO_M       lynx
#define MODO_N       enterp
#define MODO_O       -1
#define MODO_P       -1
#define MODO_Q       -1
#define MODO_R       -1
#define MODO_S       -1
#define MODO_T       -1
#define MODO_U       -1
#define MODO_V       -1
#define MODO_W       -1
#define MODO_X       -1
#define MODO_Y       -1
#define MODO_Z       -1
#define MODO_SS      -1
#define MODO_CS      -1
#define MODO_ENTER   -1
#define MODO_SPACE   -1
#define MODO_1       zx
#define MODO_2       cpc
#define MODO_3       msx
#define MODO_4       c64
#define MODO_5       at8
#define MODO_6       bbc
#define MODO_7       electron
#define MODO_8       ap2
#define MODO_9       vic
#define MODO_0       pc

#define NUMSW 2 //Numero de botones externos en Arduino
#define MAXKB pc //Numero de mapas de teclado maximo (sin contar el de ZX) el pc siempre sera el ultimo.

const uint8_t versionKeyCodes[10] = { KEY_0,KEY_1,KEY_2,KEY_3,KEY_4,KEY_5,KEY_6,KEY_7,KEY_8,KEY_9 };
const uint8_t eepromsavename[10] = { KEY_C,KEY_F,KEY_G,KEY_F,KEY_L,KEY_A,KEY_S,KEY_H,KEY_E,KEY_D };

const uint8_t fkbmode0[15] = { KEY_Z,KEY_X,KEY_P,KEY_A,KEY_R,KEY_T,KEY_I,KEY_A,KEY_L,KEY_C,KEY_O,KEY_M,KEY_B,KEY_O,KEY_S };
const uint8_t fkbmode1[12] = { KEY_Z,KEY_X, KEY_F,KEY_U,KEY_L,KEY_L,KEY_C,KEY_O,KEY_M,KEY_B,KEY_O,KEY_S };
const uint8_t fkbmode2[6] = { KEY_Z,KEY_X,KEY_P,KEY_U,KEY_R,KEY_E };

typedef enum { zx, cpc, msx, c64, at8, bbc, electron, ap2, vic, ori, sam, jup, zx80, zx81, c16, ht8, galak, multi, atom, cpet, eg2000, lynx, enterp, pc, pcxt, kbext } KBMODE;

#ifdef atmega644
const uint8_t mapZX[ROWS][COLS] = {
{      KEY_1,      KEY_2,      KEY_3,      KEY_4,      KEY_5,            0,          0,          0,          0,             0,             0 },
{      KEY_Q,      KEY_W,      KEY_E,      KEY_R,      KEY_T,            0,          0,          0,          0,             0,             0 },
{      KEY_A,      KEY_S,      KEY_D,      KEY_F,      KEY_G,            0,          0,          0,          0,             0,             0 },
{      KEY_0,      KEY_9,      KEY_8,      KEY_7,      KEY_6,            0,          0,          0,          0,             0,             0 },
{      KEY_P,      KEY_O,      KEY_I,      KEY_U,      KEY_Y,            0,          0,          0,          0,             0,             0 },
{          0,      KEY_Z,      KEY_X,      KEY_C,      KEY_V,            0,          0,          0,          0,             0,             0 },
{  KEY_ENTER,      KEY_L,      KEY_K,      KEY_J,      KEY_H,            0,          0,          0,          0,             0,             0 },
{  KEY_SPACE,          0,      KEY_M,      KEY_N,      KEY_B,            0,          0,          0,          0,             0,             0 },
// Teclas extendidas +2A/+3
{          0,          0,          0,          0,          0,            0,          0,          0,         0,    KEY_COMILLA,   KEY_PTOCOMA },
{          0,          0,          0,          0,          0,    KEY_PUNTO,   KEY_COMA,          0,         0,              0,             0 },
{          0,          0,          0,          0,          0,       KEY_F3,     KEY_F4,     KEY_F1,  KEY_CAPS,              0,      KEY_LEFT },
{          0,          0,          0,          0,          0,    KEY_RIGHT,     KEY_UP, KEY_BACKSP,   KEY_F9,               0,      KEY_DOWN },
{          0,          0,          0,          0,          0,            0,          0, KEY_ESCAPE,   KEY_TAB,              0,             0 }
};
#else
const uint8_t mapZX[ROWS][COLS] = {
{      KEY_1,      KEY_2,      KEY_3,      KEY_4,      KEY_5 },
{      KEY_Q,      KEY_W,      KEY_E,      KEY_R,      KEY_T },
{      KEY_A,      KEY_S,      KEY_D,      KEY_F,      KEY_G },
{      KEY_0,      KEY_9,      KEY_8,      KEY_7,      KEY_6 },
{      KEY_P,      KEY_O,      KEY_I,      KEY_U,      KEY_Y },
{          0,      KEY_Z,      KEY_X,      KEY_C,      KEY_V },
{  KEY_ENTER,      KEY_L,      KEY_K,      KEY_J,      KEY_H },
{  KEY_SPACE,          0,      KEY_M,      KEY_N,      KEY_B }
};
#endif
const uint8_t mapEXT[ROWS8][COLS5] = { //Mapa especial con caps shift (Igual en todos los Keymaps)
{     KEY_F2,   KEY_CAPS,          0,          0,   KEY_LEFT },
{          0,          0,          0,          0,          0 },
{          0,          0,          0,          0,          0 },
{ KEY_BACKSP,          0,  KEY_RIGHT,     KEY_UP,   KEY_DOWN },
{          0,          0,          0,          0,          0 },
{          0,          0,          0,          0,          0 },
{          0,          0,          0,          0,          0 },
{ KEY_ESCAPE,          0,          0,          0,          0 }
};
#ifdef atmega644
const uint8_t mapSET1[ROWS][COLS] = { //MAPA Codeset 1
{      KS1_1,      KS1_2,      KS1_3,      KS1_4,      KS1_5,            0,          0,          0,          0,             0,             0 },
{      KS1_Q,      KS1_W,      KS1_E,      KS1_R,      KS1_T,            0,          0,          0,          0,             0,             0 },
{      KS1_A,      KS1_S,      KS1_D,      KS1_F,      KS1_G,            0,          0,          0,          0,             0,             0 },
{      KS1_0,      KS1_9,      KS1_8,      KS1_7,      KS1_6,            0,          0,          0,          0,             0,             0 },
{      KS1_P,      KS1_O,      KS1_I,      KS1_U,      KS1_Y,            0,          0,          0,          0,             0,             0 },
{          0,      KS1_Z,      KS1_X,      KS1_C,      KS1_V,            0,          0,          0,          0,             0,             0 },
{  KS1_ENTER,      KS1_L,      KS1_K,      KS1_J,      KS1_H,            0,          0,          0,          0,             0,             0 },
{  KS1_SPACE,          0,      KS1_M,      KS1_N,      KS1_B,            0,          0,          0,          0,             0,             0 },
// Teclas extendidas +2A/+3
{          0,          0,          0,          0,          0,          0,          0,          0,          0,KS1_COMILLA,KS1_PTOCOMA },
{          0,          0,          0,          0,          0,  KS1_PUNTO,   KS1_COMA,          0,          0,          0,          0 },
{          0,          0,          0,          0,          0,     KS1_F3,     KS1_F4,     KS1_F1,   KS1_CAPS,          0,   KS1_LEFT },
{          0,          0,          0,          0,          0,  KS1_RIGHT,     KS1_UP, KS1_BACKSP,     KS1_F9,          0,   KS1_DOWN },
{          0,          0,          0,          0,          0,          0,          0, KS1_ESCAPE,    KS1_TAB,          0,          0 }
};
#else
const uint8_t mapSET1[ROWS][COLS] = { //MAPA Codeset 1
{      KS1_1,      KS1_2,      KS1_3,      KS1_4,      KS1_5 },
{      KS1_Q,      KS1_W,      KS1_E,      KS1_R,      KS1_T },
{      KS1_A,      KS1_S,      KS1_D,      KS1_F,      KS1_G },
{      KS1_0,      KS1_9,      KS1_8,      KS1_7,      KS1_6 },
{      KS1_P,      KS1_O,      KS1_I,      KS1_U,      KS1_Y },
{          0,      KS1_Z,      KS1_X,      KS1_C,      KS1_V },
{  KS1_ENTER,      KS1_L,      KS1_K,      KS1_J,      KS1_H },
{  KS1_SPACE,          0,      KS1_M,      KS1_N,      KS1_B }
};
#endif
const uint8_t mapEXT1[ROWS8][COLS5] = { //Mapa especial con caps shift para Codeset1(Igual en todos los Keymaps)
{     KS1_F2,   KS1_CAPS,          0,          0,   KS1_LEFT },
{          0,          0,          0,          0,          0 },
{          0,          0,          0,          0,          0 },
{ KS1_BACKSP,          0,  KS1_RIGHT,     KS1_UP,   KS1_DOWN },
{          0,          0,          0,          0,          0 },
{          0,          0,          0,          0,          0 },
{    KS1_TAB,          0,          0,          0,          0 },
{ KS1_ESCAPE,          0,          0,          0,          0 }
};

const uint8_t mapXT1[ROWS8][COLS5] = { //Mapa de PC-XT CodeSet1 pulsando Control (symbol shift)
{      KS1_1,      KS1_2,      KS1_3,      KS1_4,      KS1_5 },
{    KS1_TLD,    KS1_TLD,  KS1_IGUAL,   KS1_LESS,   KS1_LESS },
{        126,      KS1_1,    KS1_TLD,KS1_COMILLA,KS1_BKSLASH },
{  KS1_SLASH,      KS1_9,      KS1_8,  KS1_MENOS,      KS1_6 },
{      KS1_2,   KS1_COMA,  KS1_IGUAL,KS1_CCORCHE,KS1_ACORCHE },
{          0,  KS1_PUNTO,        156,  KS1_MENOS,      KS1_7 },
{          0,      KS1_0,KS1_CCORCHE,  KS1_SLASH,KS1_ACORCHE },
{          0,          0,  KS1_PUNTO,   KS1_COMA,KS1_CCORCHE }
};
const uint8_t modXT1[ROWS8][COLS5] = { //Mod de PC-XT CodeSet1 1 hay q usar Shift, 0 no hay que usar
{          1,          8,          8,          1,          1 },
{          0,          1,          0,          0,          1 },
{       0x40,          8,          8,          8,          8 },
{          1,          1,          1,          0,          1 },
{          1,          1,          1,          8,          8 },
{          0,          1,       0x40,          1,          1 },
{          0,          1,          0,          0,          1 },
{          0,          0,          0,          0,          1 }
};

const int8_t mapMODO[ROWS8][COLS5] = {
{     MODO_1,     MODO_2,     MODO_3,     MODO_4,     MODO_5 },
{     MODO_Q,     MODO_W,     MODO_E,     MODO_R,     MODO_T },
{     MODO_A,     MODO_S,     MODO_D,     MODO_F,     MODO_G },
{     MODO_0,     MODO_9,     MODO_8,     MODO_7,     MODO_6 },
{     MODO_P,     MODO_O,     MODO_I,     MODO_U,     MODO_Y },
{    MODO_SS,     MODO_Z,     MODO_X,     MODO_C,     MODO_V },
{ MODO_ENTER,     MODO_L,     MODO_K,     MODO_J,     MODO_H },
{ MODO_SPACE,    MODO_CS,     MODO_M,     MODO_N,     MODO_B }
};
//#endif

// CKm=Multiplicador de CK1 y CK2
const uint8_t nomZX[] = { 2,KEY_Z,KEY_X,1 }; //Numero de Letras,(letras[n],,),CKm)
const uint8_t nomCPC[] = { 3,KEY_C,KEY_P,KEY_C,4};
const uint8_t nomMSX[] = { 3,KEY_M,KEY_S,KEY_X,4};
const uint8_t nomC64[] = { 3,KEY_C,KEY_6,KEY_4,4};
const uint8_t nomAT8[] = { 5,KEY_A,KEY_T,KEY_A,KEY_R,KEY_I,4};
const uint8_t nomBBC[] = { 3,KEY_B,KEY_B,KEY_C,4};
const uint8_t nomELECTRON[] = { 8,KEY_E,KEY_L,KEY_E,KEY_C,KEY_T,KEY_R,KEY_O,KEY_N,4};
const uint8_t nomAP2[] = { 5,KEY_A,KEY_P,KEY_P,KEY_L,KEY_E,4};
const uint8_t nomVIC[] = { 3,KEY_V,KEY_I,KEY_C,4};
const uint8_t nomPC[] = { 4,KEY_P,KEY_C,KEY_X,KEY_T,4};

const uint8_t nomORI[] = { 4,KEY_O,KEY_R,KEY_I,KEY_C,4};
const uint8_t nomSAM[] = { 3,KEY_S,KEY_A,KEY_M,4};
const uint8_t nomJUP[] = { 7,KEY_J,KEY_U,KEY_P,KEY_I,KEY_T,KEY_E,KEY_R,4};
const uint8_t nomZX81[] = { 4,KEY_Z,KEY_X,KEY_8,KEY_1,4 };
const uint8_t nomC16[] = { 3,KEY_C,KEY_1,KEY_6,4 };
const uint8_t nomHT8[] = { 5,KEY_T,KEY_R,KEY_S, KEY_8, KEY_0,6 };
const uint8_t nomGALAK[] = { 9,KEY_G,KEY_A,KEY_L,KEY_A,KEY_K,KEY_S,KEY_I,KEY_J,KEY_A,4 };
const uint8_t nomMULTI[] = { 9,KEY_M,KEY_U,KEY_L,KEY_T,KEY_I,KEY_C,KEY_O,KEY_M,KEY_P,4 };
const uint8_t nomZX80[] = { 4,KEY_Z,KEY_X,KEY_8,KEY_0,4 };
const uint8_t nomATOM[] = { 4,KEY_A,KEY_T,KEY_O,KEY_M,4 };
const uint8_t nomCPET[] = { 4,KEY_C,KEY_P,KEY_E,KEY_T,4 };
const uint8_t nomEG2000[] = { 6,KEY_E,KEY_G,KEY_2,KEY_0,KEY_0,KEY_0,4 };
const uint8_t nomLYNX[] = { 4,KEY_L,KEY_Y,KEY_N,KEY_X,4 };
const uint8_t nomenterp[] = { 6,KEY_E,KEY_N,KEY_T,KEY_E,KEY_R,KEY_P,4 };
