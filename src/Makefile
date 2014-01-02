CC=g++
LIB=../lib
POLYCODE=${LIB}/Polycode
INCLUDE=../include
CFLAGS=-I${POLYCODE}/Core/Dependencies/include -I${POLYCODE}/Core/Dependencies/include/AL -I${POLYCODE}/Core/include -I${POLYCODE}/Modules/include -I${POLYCODE}/Modules/Dependencies/include -I${POLYCODE}/Modules/Dependencies/include/bullet -I${INCLUDE}
LDFLAGS=-lrt -ldl -lpthread ${POLYCODE}/Core/lib/libPolycore.a ${POLYCODE}/Core/Dependencies/lib/libfreetype.a ${POLYCODE}/Core/Dependencies/lib/liblibvorbisfile.a ${POLYCODE}/Core/Dependencies/lib/liblibvorbis.a ${POLYCODE}/Core/Dependencies/lib/liblibogg.a ${POLYCODE}/Core/Dependencies/lib/libopenal.so ${POLYCODE}/Core/Dependencies/lib/libphysfs.a ${POLYCODE}/Core/Dependencies/lib/libpng15.a ${POLYCODE}/Core/Dependencies/lib/libz.a -lGL -lGLU -lSDL ${POLYCODE}/Modules/lib/libPolycode2DPhysics.a ${POLYCODE}/Modules/Dependencies/lib/libBox2D.a ${POLYCODE}/Modules/lib/libPolycode3DPhysics.a ${POLYCODE}/Modules/Dependencies/lib/libBulletDynamics.a ${POLYCODE}/Modules/Dependencies/lib/libBulletCollision.a ${POLYCODE}/Modules/Dependencies/lib/libLinearMath.a

default:
	$(CC) $(CFLAGS) main.cpp HelloPolycodeApp.cpp -o ../bin/PolycodeTemplate $(LDFLAGS)
	cp ${POLYCODE}/Core/Assets/default.pak .
clean:
	rm ../bin/*
	rm default.pak
	
