MATLAB="/opt/matlab2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/cise/homes/jiaqi/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for logmapSRi" > logmapSRi_mex.mki
echo "CC=$CC" >> logmapSRi_mex.mki
echo "CFLAGS=$CFLAGS" >> logmapSRi_mex.mki
echo "CLIBS=$CLIBS" >> logmapSRi_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> logmapSRi_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> logmapSRi_mex.mki
echo "CXX=$CXX" >> logmapSRi_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> logmapSRi_mex.mki
echo "CXXLIBS=$CXXLIBS" >> logmapSRi_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> logmapSRi_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> logmapSRi_mex.mki
echo "LD=$LD" >> logmapSRi_mex.mki
echo "LDFLAGS=$LDFLAGS" >> logmapSRi_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> logmapSRi_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> logmapSRi_mex.mki
echo "Arch=$Arch" >> logmapSRi_mex.mki
echo OMPFLAGS= >> logmapSRi_mex.mki
echo OMPLINKFLAGS= >> logmapSRi_mex.mki
echo "EMC_COMPILER=gcc" >> logmapSRi_mex.mki
echo "EMC_CONFIG=optim" >> logmapSRi_mex.mki
"/opt/matlab2014b/bin/glnxa64/gmake" -B -f logmapSRi_mex.mk
