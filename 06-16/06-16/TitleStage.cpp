#include "TitleStage.h"
#include "global.h"

TitleStage::TitleStage()
{

}

void TitleStage::Render()
{
	TextureElement* element = textureManager.GetTexture(TITLE_PNG);
	element->sprite->Begin(D3DXSPRITE_ALPHABLEND);
	
	RECT srcRect;
	srcRect.left = 0;
	srcRect.top = 0;
	srcRect.right = 480;
	srcRect.bottom = 640;

	D3DXVECTOR3 pos(0, 0, 0);
	element->sprite->Draw(element->texture, &srcRect, nullptr, &pos, COLOR);

	element->sprite->End();
	
}


void TitleStage::Update()
{
	if (inputManager.prevKeyBuffer[VK_LBUTTON] == 1 
		&& inputManager.keyBuffer[VK_LBUTTON] == 0)
	{
		int a = 10;
	}
}