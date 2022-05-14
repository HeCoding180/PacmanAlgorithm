#ifndef SPRITE_DEFINED
#define SPRITE_DEFINED

//Direction Macros
#define Sign(a) ((a & 0x05) * 2 - 1)
#define IsOnXAxisFactor(a) (((a) & 0x03) ? 1 : 0 )
#define IsOnYAxisFactor(a) (((a) & 0x0C) ? 1 : 0 )
#define XFactor(a) (((a) & 0x03) ? (((a) & 0x01) ? 1 : -1) : 0 )
#define YFactor(a) (((a) & 0x0C) ? (((a) & 0x04) ? 1 : -1) : 0 )

typedef enum SpriteBehaviour
{
    Player,
    Shadow,
    Speedy,
    Bashful,
    Pokey
} SpriteType_t;

typedef enum Direction
{
    X_POSITIVE = 0x01,
    X_NEGATIVE = 0x02,
    Y_POSITIVE = 0x04,
    Y_NEGATIVE = 0x08
} SpriteDirection_t;

typedef struct Point
{
    int8_t x;
    int8_t y;
} Point_t;

typedef struct Point
{
    float x;
    float y;
} fPoint_t;

typedef struct Sprite
{
    fPoint_t GraphicalPosition;
    Point_t LogicalPosition;
    struct Flags
    {
        SpriteDirection_t SpriteDirection : 4;
        EnvDirection_t SpriteWalls
    };
} Sprite_t;

const Point_t ZERO_POINT = {0.0f, 0.0f};

void moveSprite(Sprite_t *, float);

#endif // SPRITE_DEFINED
