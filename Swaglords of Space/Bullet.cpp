#include "Bullet.h"

Bullet::Bullet()
{

}

Bullet::Bullet(sf::Texture* texture, float pos_x, float pos_y, float dir_x, float dir_y, float movement_speed)
{
	this->shape.setTexture(*texture);

	this->shape.setScale(0.1f, 0.05f);
	this->shape.setPosition(pos_x, pos_y);
	this->derection.x = dir_x;
	this->derection.y = dir_y;
	this->movementSpeed = movement_speed;
}

Bullet::~Bullet()
{

}

const sf::FloatRect Bullet::getBounds() const
{
	return this->shape.getGlobalBounds();
}

void Bullet::update()
{
	// Movement
	this->shape.move(this->movementSpeed * this->derection);
}

void Bullet::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
