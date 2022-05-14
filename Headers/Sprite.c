#include <inttypes.h>
#include "Sprite.h"

 void moveSprite(Sprite_t *ReferenceSprite, float Amount)
 {
     ReferenceSprite->SpritePosition.x += (float)XFactor((int8_t)ReferenceSprite->SpriteDirection) * Amount;
     ReferenceSprite->SpritePosition.y += (float)YFactor((int8_t)ReferenceSprite->SpriteDirection) * Amount;
 }
