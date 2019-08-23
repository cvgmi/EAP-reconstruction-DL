MATLAB="/opt/matlab2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/cise/homes/jiaqi/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for optAPSR_AGD_revBeta" > optAPSR_AGD_revBeta_mex.mki
echo "CC=$CC" >> optAPSR_AGD_revBeta_mex.mki
echo "CFLAGS=$CFLAGS" >> optAPSR_AGD_revBeta_mex.mki
echo "CLIBS=$CLIBS" >> optAPSR_AGD_revBeta_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> optAPSR_AGD_revBeta_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> optAPSR_AGD_revBeta_mex.mki
echo "CXX=$CXX" >> optAPSR_AGD_revBeta_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> optAPSR_AGD_revBeta_mex.mki
echo "CXXLIBS=$CXXLIBS" >> optAPSR_AGD_revBeta_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> optAPSR_AGD_revBeta_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> optAPSR_AGD_revBeta_mex.mki
echo "LD=$LD" >> optAPSR_AGD_revBeta_mex.mki
echo "LDFLAGS=$LDFLAGS" >> optAPSR_AGD_revBeta_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> optAPSR_AGD_revBeta_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> optAPSR_AGD_revBeta_mex.mki
echo "Arch=$Arch" >> optAPSR_AGD_revBeta_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/opt/matlab2014b/sys/os/glnxa64/libiomp5.so\""' >> optAPSR_AGD_revBeta_mex.mki
echo OMPLINKFLAGS=-L/opt/matlab2014b/sys/os/glnxa64 -liomp5 >> optAPSR_AGD_revBeta_mex.mki
echo "EMC_COMPILER=gcc" >> optAPSR_AGD_revBeta_mex.mki
echo "EMC_CONFIG=optim" >> optAPSR_AGD_revBeta_mex.mki
"/opt/matlab2014b/bin/glnxa64/gmake" -B -f optAPSR_AGD_revBeta_mex.mk
