MATLAB="/opt/matlab2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/cise/homes/jiaqi/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for EstimatedX" > EstimatedX_mex.mki
echo "CC=$CC" >> EstimatedX_mex.mki
echo "CFLAGS=$CFLAGS" >> EstimatedX_mex.mki
echo "CLIBS=$CLIBS" >> EstimatedX_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> EstimatedX_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> EstimatedX_mex.mki
echo "CXX=$CXX" >> EstimatedX_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> EstimatedX_mex.mki
echo "CXXLIBS=$CXXLIBS" >> EstimatedX_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> EstimatedX_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> EstimatedX_mex.mki
echo "LD=$LD" >> EstimatedX_mex.mki
echo "LDFLAGS=$LDFLAGS" >> EstimatedX_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> EstimatedX_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> EstimatedX_mex.mki
echo "Arch=$Arch" >> EstimatedX_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/opt/matlab2014b/sys/os/glnxa64/libiomp5.so\""' >> EstimatedX_mex.mki
echo OMPLINKFLAGS=-L/opt/matlab2014b/sys/os/glnxa64 -liomp5 >> EstimatedX_mex.mki
echo "EMC_COMPILER=gcc" >> EstimatedX_mex.mki
echo "EMC_CONFIG=optim" >> EstimatedX_mex.mki
"/opt/matlab2014b/bin/glnxa64/gmake" -B -f EstimatedX_mex.mk
