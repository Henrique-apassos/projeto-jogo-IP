#include "visao.h"
#include "jogador.h"

// Camera Centralizada com o jogador
void UpdateCameraCenter(Camera2D *camera, Player *player, EnvItem *envItems, int envItemsLength, float delta, int width, int height)
{
    camera->offset = (Vector2){ width/2.0f, height/2.0f};
    camera->target = player->position;
}