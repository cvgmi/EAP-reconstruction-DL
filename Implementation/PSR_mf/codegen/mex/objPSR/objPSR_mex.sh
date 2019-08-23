MATLAB="/opt/matlab2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/cise/homes/jiaqi/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for objPSR" > objPSR_mex.mki
echo "CC=$CC" >> objPSR_mex.mki
echo "CFLAGS=$CFLAGS" >> objPSR_mex.mki
echo "CLIBS=$CLIBS" >> objPSR_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> objPSR_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> objPSR_mex.mki
echo "CXX=$CXX" >> objPSR_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> objPSR_mex.mki
echo "CXXLIBS=$CXXLIBS" >> objPSR_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> objPSR_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> objPSR_mex.mki
echo "LD=$LD" >> objPSR_mex.mki
echo "LDFLAGS=$LDFLAGS" >> objPSR_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> objPSR_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> objPSR_mex.mki
echo "Arch=$Arch" >> objPSR_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/opt/matlab2014b/sys/os/glnxa64/libiomp5.so\""' >> objPSR_mex.mki
echo OMPLINKFLAGS=-L/opt/matlab2014b/sys/os/glnxa64 -liomp5 >> objPSR_mex.mki
echo "EMC_COMPILER=gcc" >> objPSR_mex.mki
echo "EMC_CONFIG=optim" >> objPSR_mex.mki
"/opt/matlab2014b/bin/glnxa64/gmake" -B -f objPSR_mex.mk
