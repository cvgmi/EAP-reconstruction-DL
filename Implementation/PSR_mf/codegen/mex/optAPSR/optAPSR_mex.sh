MATLAB="/opt/matlab2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/cise/homes/jiaqi/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for optAPSR" > optAPSR_mex.mki
echo "CC=$CC" >> optAPSR_mex.mki
echo "CFLAGS=$CFLAGS" >> optAPSR_mex.mki
echo "CLIBS=$CLIBS" >> optAPSR_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> optAPSR_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> optAPSR_mex.mki
echo "CXX=$CXX" >> optAPSR_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> optAPSR_mex.mki
echo "CXXLIBS=$CXXLIBS" >> optAPSR_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> optAPSR_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> optAPSR_mex.mki
echo "LD=$LD" >> optAPSR_mex.mki
echo "LDFLAGS=$LDFLAGS" >> optAPSR_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> optAPSR_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> optAPSR_mex.mki
echo "Arch=$Arch" >> optAPSR_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/opt/matlab2014b/sys/os/glnxa64/libiomp5.so\""' >> optAPSR_mex.mki
echo OMPLINKFLAGS=-L/opt/matlab2014b/sys/os/glnxa64 -liomp5 >> optAPSR_mex.mki
echo "EMC_COMPILER=gcc" >> optAPSR_mex.mki
echo "EMC_CONFIG=optim" >> optAPSR_mex.mki
"/opt/matlab2014b/bin/glnxa64/gmake" -B -f optAPSR_mex.mk
