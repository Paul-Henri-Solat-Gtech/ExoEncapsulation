#include "AMovable.h"

AMovable::AMovable(Vector2 dir, float spe):direction(dir),speed(spe) {

}
AMovable::AMovable(Vector2 dir) :direction(dir), speed(0) {

}
void AMovable::SetDirection(Vector2 dir) {
	direction = dir;
}
void AMovable::SetSpeed(float spe) {
	speed = spe;
}