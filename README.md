# Unixitry

WINDOWS MAKE ISO (with Powershell):



(SCOOP NEEDED (https://scoop.sh))

scoop install docker

scoop install qemu

docker build buildenv -t Unixitry

docker run --rm -it -v "${pwd}:/root/env" Unixitry

In Docker ENV type

make build-x86_64

exit docker env with exit

emulate with QEMU

qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso

Or You can use the ISO located at OS/dist/x86_64/kernel.iso
