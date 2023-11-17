#include "page.hpp"
#include <iostream> 
#define STRING_LEN 20

int main(){
	page *p = new page(LEAF);

	char key[STRING_LEN];
	char i;
	uint64_t val = 100;
	uint64_t cnt = 0;

	for(i='a'; i<='j'; i++){
		for(int j=0; j<STRING_LEN-1; j++){
			key[j] = i;
		}
		key[STRING_LEN-1]='\0';
		cnt++;
		val*=cnt;
		p->insert(key, val);
		p->print();

	}

	val = 100;
	cnt = 0;
	printf("\n");
	
	for(i='a'; i<='j'; i++){
		for(int j=0; j<STRING_LEN-1; j++){
			key[j] = i;
		}
		key[STRING_LEN-1]='\0';
		cnt++;
		val*=cnt;
		if(val== p->find(key)){
			printf("main key :%s founds\n",key);		
		}
		else{
			printf("mian key :%s Something wrong\n",key);		

		}
	}

	return 0;

}
