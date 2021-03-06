/**
 * @file Footmap.h
 * @brief 歩数マップを管理するクラス
 */
#ifndef INCLUDED_FOOT_H
#define INCLUDED_FOOT_H

#include <array>

class Footmap{
private:

public:
	std::array<std::array<uint16_t, 32>, 32> map;

	Footmap();
	
	/**
	 * @brief 歩数マップをクリアします
	 */
	bool resetFootmap();

	/**
	 * @brief 歩数マップを取得します
	 * @param x 取得するx座標
	 * @param y 取得するy座標
	 * @param out 座標外の返り値
	 * @return 設定した座標の歩数
	 */
	uint16_t getFootmap(const uint8_t x, const uint8_t y, const uint16_t out);

	/**
	 * @brief 歩数マップを設定します
	 * @param x 設定するx座標
	 * @param y 設定するy座標
	 * @param data 設定する歩数
	 */
	bool setFootmap(const uint8_t x, const uint8_t y, const uint16_t data);

	bool isOutside(const uint8_t x, const uint8_t y);

	~Footmap();
	
};

#endif
