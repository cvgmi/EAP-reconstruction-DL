MATLAB="/opt/matlab2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/cise/homes/jiaqi/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for objSR" > objSR_mex.mki
echo "CC=$CC" >> objSR_mex.mki
echo "CFLAGS=$CFLAGS" >> objSR_mex.mki
echo "CLIBS=$CLIBS" >> objSR_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> objSR_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> objSR_mex.mki
echo "CXX=$CXX" >> objSR_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> objSR_mex.mki
echo "CXXLIBS=$CXXLIBS" >> objSR_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> objSR_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> objSR_mex.mki
echo "LD=$LD" >> objSR_mex.mki
echo "LDFLAGS=$LDFLAGS" >> objSR_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> objSR_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> objSR_mex.mki
echo "Arch=$Arch" >> objSR_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/opt/matlab2014b/sys/os/glnxa64/libiomp5.so\""' >> objSR_mex.mki
echo OMPLINKFLAGS=-L/opt/matlab2014b/sys/os/glnxa64 -liomp5 >> objSR_mex.mki
echo "EMC_COMPILER=gcc" >> objSR_mex.mki
echo "EMC_CONFIG=optim" >> objSR_mex.mki
"/opt/matlab2014b/bin/glnxa64/gmake" -B -f objSR_mex.mk
