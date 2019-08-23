MATLAB="/opt/matlab2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/cise/homes/jiaqi/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for costMatrixPSR" > costMatrixPSR_mex.mki
echo "CC=$CC" >> costMatrixPSR_mex.mki
echo "CFLAGS=$CFLAGS" >> costMatrixPSR_mex.mki
echo "CLIBS=$CLIBS" >> costMatrixPSR_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> costMatrixPSR_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> costMatrixPSR_mex.mki
echo "CXX=$CXX" >> costMatrixPSR_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> costMatrixPSR_mex.mki
echo "CXXLIBS=$CXXLIBS" >> costMatrixPSR_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> costMatrixPSR_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> costMatrixPSR_mex.mki
echo "LD=$LD" >> costMatrixPSR_mex.mki
echo "LDFLAGS=$LDFLAGS" >> costMatrixPSR_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> costMatrixPSR_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> costMatrixPSR_mex.mki
echo "Arch=$Arch" >> costMatrixPSR_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/opt/matlab2014b/sys/os/glnxa64/libiomp5.so\""' >> costMatrixPSR_mex.mki
echo OMPLINKFLAGS=-L/opt/matlab2014b/sys/os/glnxa64 -liomp5 >> costMatrixPSR_mex.mki
echo "EMC_COMPILER=gcc" >> costMatrixPSR_mex.mki
echo "EMC_CONFIG=optim" >> costMatrixPSR_mex.mki
"/opt/matlab2014b/bin/glnxa64/gmake" -B -f costMatrixPSR_mex.mk
