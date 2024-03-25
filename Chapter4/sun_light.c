#include <stdio.h>

int main() {
	double light_speed = 300000;
	double sun_earth_distance = 149600000;

	printf("빛의 속도는 %fkm/s\n", light_speed);
	printf("태양과 지구와의 거리는 %fkm\n", sun_earth_distance);
	printf("도달 시간은 %f초\n", (sun_earth_distance / light_speed));

	return 0;
}