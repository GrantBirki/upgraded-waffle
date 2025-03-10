FROM qmkfm/qmk_firmware@sha256:470a263d42282eea66b3f48a3416a86e33fca16187e98fe2940d8fa4291857a6

RUN mkdir /output

COPY . .

WORKDIR /qmk_firmware

ENTRYPOINT [ "qmk", "compile" ]
