//  2006-2008 (c) Viva64.com Team
//  2008-2016 (c) OOO "Program Verification Systems"

#ifndef PVS_STUDIO_FREE_COMMENTS_ENCODING_H
#define PVS_STUDIO_FREE_COMMENTS_ENCODING_H

#include <string>

enum class Encoding
{
  ASCII,
  UTF8,
  UTF16BE,
  UTF16LE,
};

void ConvertEncoding(std::string &str, Encoding &encoding, size_t &nSkip);
void ConvertEncoding(std::ostream &stream, const std::string &str, Encoding encoding, bool unix2dos);

#endif
