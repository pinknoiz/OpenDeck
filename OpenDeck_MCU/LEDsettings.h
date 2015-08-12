#ifndef LEDSETTINGS_H_
#define LEDSETTINGS_H_

#define NUMBER_OF_START_UP_ROUTINES     6

//blink time
#define BLINK_TIME_MIN                  0x02
#define BLINK_TIME_MAX                  0x0F

//LED switch time on start-up
#define START_UP_SWITCH_TIME_MIN        0x01
#define START_UP_SWITCH_TIME_MAX        0x78

#define FADE_TIME_MIN                   0x00
#define FADE_TIME_MAX                   0x0A

#define NUMBER_OF_TRANSITIONS           64

const uint8_t ledTransitionScale[] = {

    0,
    2,
    4,
    6,
    8,
    10,
    12,
    14,
    16,
    18,
    20,
    22,
    24,
    26,
    28,
    30,
    32,
    34,
    36,
    38,
    40,
    42,
    44,
    46,
    48,
    50,
    52,
    54,
    56,
    58,
    60,
    62,
    64,
    68,
    70,
    75,
    80,
    85,
    90,
    95,
    100,
    105,
    110,
    115,
    120,
    125,
    130,
    135,
    140,
    145,
    150,
    155,
    160,
    165,
    170,
    180,
    190,
    200,
    210,
    220,
    230,
    240,
    250,
    255

};

#endif