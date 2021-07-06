FROM qmkfm/qmk_firmware

RUN mkdir /output

COPY . .

WORKDIR /qmk_firmware

ENTRYPOINT [ "qmk", "compile" ]
