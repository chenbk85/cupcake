
#ifndef CUPCAKE_CONTENT_LENGTH_WRITER
#define CUPCAKE_CONTENT_LENGTH_WRITER

#include "cupcake/http/Http.h"

#include "cupcake_priv/http/BufferedReader.h"

namespace Cupcake {

class ContentLengthWriter : public HttpOutputStream {
public:
    ContentLengthWriter(StreamSource& streamSource);
    ~ContentLengthWriter();

    std::tuple<uint32_t, HttpError> write(const char* buffer, uint32_t bufferLen) override;
    HttpError close() override;

private:
    ContentLengthWriter(const ContentLengthWriter&) = delete;
    ContentLengthWriter& operator=(const ContentLengthWriter&) = delete;

    StreamSource& streamSource;
};

}

#endif // CUPCAKE_CONTENT_LENGTH_WRITER
