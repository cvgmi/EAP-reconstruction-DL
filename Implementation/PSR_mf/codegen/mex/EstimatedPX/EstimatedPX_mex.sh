MATLAB="/opt/matlab2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/cise/homes/jiaqi/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for EstimatedPX" > EstimatedPX_mex.mki
echo "CC=$CC" >> EstimatedPX_mex.mki
echo "CFLAGS=$CFLAGS" >> EstimatedPX_mex.mki
echo "CLIBS=$CLIBS" >> EstimatedPX_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> EstimatedPX_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> EstimatedPX_mex.mki
echo "CXX=$CXX" >> EstimatedPX_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> EstimatedPX_mex.mki
echo "CXXLIBS=$CXXLIBS" >> EstimatedPX_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> EstimatedPX_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> EstimatedPX_mex.mki
echo "LD=$LD" >> EstimatedPX_mex.mki
echo "LDFLAGS=$LDFLAGS" >> EstimatedPX_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> EstimatedPX_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> EstimatedPX_mex.mki
echo "Arch=$Arch" >> EstimatedPX_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/opt/matlab2014b/sys/os/glnxa64/libiomp5.so\""' >> EstimatedPX_mex.mki
echo OMPLINKFLAGS=-L/opt/matlab2014b/sys/os/glnxa64 -liomp5 >> EstimatedPX_mex.mki
echo "EMC_COMPILER=gcc" >> EstimatedPX_mex.mki
echo "EMC_CONFIG=optim" >> EstimatedPX_mex.mki
"/opt/matlab2014b/bin/glnxa64/gmake" -B -f EstimatedPX_mex.mk
