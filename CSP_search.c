#include <stdlib.h>
#include <stdio.h>

int A, B, C, D, E, F, G, H;

// These are the Constraints in the Constraint satisfaction Problem. 

int check(int i){
	switch(i) {
		case 1:
		if(A<G) return 1;
		case 2:
		if(!(A<H)) return 2;
		case 3:
		if(!(abs(F-B)==1)) return 3;
		case 4:
		if(!(G<H)) return 4;
		case 5:
		if(!(abs(G-C)==1)) return 5;
		case 6:
		if(!((abs(H-C)%2==0))) return 6;
		case 7:
		if(!(H!=D)) return 7;
		case 8:
		if(!(D>=G)) return 8;
		case 9:
		if(!(D!=C)) return 9;
		case 10:
		if(!(E!=C)) return 10;
		case 11:
		if(!(E<(D-1))) return 11;
		case 12:
		if(!(E!=(H-2))) return 12;
		case 13:
		if(!(G!=F)) return 13;
		case 14:
		if (!(H!=F)) return 14;
		case 15:
		if(!(C!=F)) return 15;
		case 16:
		if(!(D!=F)) return 16;
		case 17:
		if(!((abs(E-F)%2==1))) return 17;
		default:
		return 20;
	}
}

// Search in CSP network for the solutions. Solutions are all printed out as they are found. Branches are pruned as soon as inconsistancy is found. 
// Uses domain 1 to 4 for simplicity.

int main(){
	int z = 0;
	int success = 0;
	for (A = 1; A <= 4; A++) {
		for (B = 1; B <= 4; B++) {
			for (C = 1; C <= 4; C++) {
				for (D = 1; D <= 4; D++) {
					if(check(9) == 9){
						printf("A=%d, B=%d, C=%d, D=%d FAILURE\n", A,B,C,D);
						z++;
						continue;
					} else
					for (E = 1; E <= 4; E++) {
						if(check(10) == 10) {
							printf("A=%d, B=%d, C=%d, D=%d, E=%d FAILURE\n", A,B,C,D,E);
							z++;
							continue;
						} else
						if(check(11) == 11) {
							printf("A=%d, B=%d, C=%d, D=%d, E=%d FAILURE\n", A,B,C,D,E);
							z++;
							continue;
						} else
						for (F = 1; F <= 4; F++) {
							if(check(3) == 3) {
								printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d FAILURE\n", A,B,C,D,E,F);
								z++;
								continue;
							} else
							if(check(15) == 15) {
								printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d FAILURE\n", A,B,C,D,E,F);
								z++;
								continue;
							} else
							if(check(16) == 16) {
								printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d FAILURE\n", A,B,C,D,E,F);
								z++;
								continue;
							} else
							if(check(17) == 17) {
								printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d FAILURE\n", A,B,C,D,E,F);
								z++;
								continue;
							} else
							for (G = 1; G <= 4; G++) {
								if(check(1) == 1) {
									printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d FAILURE\n", A,B,C,D,E,F,G);
									z++;
									continue;
								} else
								if(check(5) == 5) {
									printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d FAILURE\n", A,B,C,D,E,F,G);
									z++;
									continue;
								} else
								if(check(8) == 8) {
									printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d FAILURE\n", A,B,C,D,E,F,G);
									z++;
									continue;
								} else
								if(check(13) == 13) {
									printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d FAILURE\n", A,B,C,D,E,F,G);
									z++;
									continue;
								} else
								for (H = 1; H <= 4; H++) {
									if(check(2) == 2){
										printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d, H=%d FAILURE\n", A,B,C,D,E,F,G,H);
										z++;
										continue;
									} else
									if(check(4) == 4){
										printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d, H=%d FAILURE\n", A,B,C,D,E,F,G,H);
										z++;
										continue;
									} else
									if(check(6) == 6){
										printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d, H=%d FAILURE\n", A,B,C,D,E,F,G,H);
										z++;
										continue;
									} else
									if(check(7) == 7){
										printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d, H=%d FAILURE\n", A,B,C,D,E,F,G,H);
										z++;
										continue;
									} else
									if(check(12) == 12){
										printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d, H=%d FAILURE\n", A,B,C,D,E,F,G,H);
										z++;
										continue;
									} else
									if(check(14) == 14){
										printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d, H=%d FAILURE\n", A,B,C,D,E,F,G,H);
										z++;
										continue;
									} else
									printf("A=%d, B=%d, C=%d, D=%d, E=%d, F=%d, G=%d, H=%d SUCCESS\n", A,B,C,D,E,F,G,H);
									success++;
								}
							}
						}
					}
				}
			}
		}
	}
	printf("count of failed branches = %d\n", z);
	printf("count of success branches = %d\n", success);
}