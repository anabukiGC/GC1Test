#pragma once

#include "../Base/Base.h"

class Title : public Base {
	//画像オブジェクト
	CImage m_img;
	CImage m_text;
	CImage m_pushz;
	//文字表示オブジェクト
	CFont m_title_text;
public:
	Title();
	~Title();
	void Update();
	void Draw();
};