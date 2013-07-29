// @@@LICENSE
//
//      Copyright (c) 2010-2013 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// LICENSE@@@

#ifndef RFC2047ENCODER_H_
#define RFC2047ENCODER_H_

#include <string>

class Rfc2047Encoder
{
public:
	Rfc2047Encoder();
	virtual ~Rfc2047Encoder();
	
	// Encode a UTF-8 string using RFC 2047 Q-encoding
	void QEncode(const std::string& text, std::string& output);
};

#endif /*RFC2047ENCODER_H_*/
