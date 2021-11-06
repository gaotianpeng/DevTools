#include <gtest/gtest.h>
#include <iostream>
#include "concreate_prototype.h"
using namespace std;

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

TEST(ProtoType, ProtoType_Case) {
	Monkey *pSWK = new SunWuKong("Qi Tian Da Sheng");
  	EXPECT_TRUE(pSWK != nullptr);
    Monkey *pSWK1 = pSWK->Clone();
    Monkey *pSWK2 = pSWK1->Clone();

    pSWK1->Play();
    pSWK2->Play();

    SAFE_DELETE(pSWK1);
    SAFE_DELETE(pSWK2);
    SAFE_DELETE(pSWK);
}
