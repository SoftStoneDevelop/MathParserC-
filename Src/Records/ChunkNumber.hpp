#pragma once

#include "..\Enums\ChunkType.hpp"
#include "ChunkExpression.hpp"
#include "Operand.hpp"
#include <iostream>

namespace MathEngine
{
	class ChunkNumber : public ChunkExpression
	{
	public:
		ChunkNumber(
			float number,
			Operand* operand
		);

		ChunkNumber(const ChunkNumber& other) = delete;
		ChunkNumber(ChunkNumber&& other) = delete;

		ChunkNumber& operator=(ChunkNumber&& other) = delete;
		ChunkNumber& operator=(const ChunkNumber& other) = delete;

		const float& GetNumber() const
		{
			return _number;
		}

	private:
		float _number;
	};

}//namespace MathEngine