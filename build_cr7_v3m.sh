#!/bin/sh

wget https://releases.linaro.org/components/toolchain/binaries/5.1-2015.08/arm-eabi/gcc-linaro-5.1-2015.08-x86_64_arm-eabi.tar.xz .
tar xfJ gcc-linaro-5.1-2015.08-x86_64_arm-eabi.tar.xz

export CROSS_COMPILE=./gcc-linaro-5.1-2015.08-x86_64_arm-eabi/bin/arm-eabi-

make RCAR_DRAM_SPLIT=0 RCAR_KICK_MAIN_CPU=2 LSI=V3M RCAR_SECURE_BOOT=0 clean
make RCAR_DRAM_SPLIT=0 RCAR_KICK_MAIN_CPU=2 LSI=V3M RCAR_SECURE_BOOT=0

cp bootparam_sa0.srec ../../../../build/tmp/deploy/images/v3msk/bootparam_sa0.srec
cp cr7_loader.srec ../../../../build/tmp/deploy/images/v3msk/cr7-v3msk.srec
cp cert_header_sa3.srec ../../../../build/tmp/deploy/images/v3msk/cert_header_sa3.srec

cp bootparam_sa0.bin ../../../../build/tmp/deploy/images/v3msk/bootparam_sa0.bin
cp cr7_loader.bin ../../../../build/tmp/deploy/images/v3msk/cr7-v3msk.bin
cp cert_header_sa3.bin ../../../../build/tmp/deploy/images/v3msk/cert_header_sa3.bin
