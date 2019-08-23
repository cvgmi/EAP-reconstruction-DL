MATLAB="/opt/matlab2014b"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/cise/homes/jiaqi/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for optASR_sigma_disp" > optASR_sigma_disp_mex.mki
echo "CC=$CC" >> optASR_sigma_disp_mex.mki
echo "CFLAGS=$CFLAGS" >> optASR_sigma_disp_mex.mki
echo "CLIBS=$CLIBS" >> optASR_sigma_disp_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> optASR_sigma_disp_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> optASR_sigma_disp_mex.mki
echo "CXX=$CXX" >> optASR_sigma_disp_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> optASR_sigma_disp_mex.mki
echo "CXXLIBS=$CXXLIBS" >> optASR_sigma_disp_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> optASR_sigma_disp_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> optASR_sigma_disp_mex.mki
echo "LD=$LD" >> optASR_sigma_disp_mex.mki
echo "LDFLAGS=$LDFLAGS" >> optASR_sigma_disp_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> optASR_sigma_disp_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> optASR_sigma_disp_mex.mki
echo "Arch=$Arch" >> optASR_sigma_disp_mex.mki
echo OMPFLAGS=-fopenmp -DOMPLIBNAME='"\"/opt/matlab2014b/sys/os/glnxa64/libiomp5.so\""' >> optASR_sigma_disp_mex.mki
echo OMPLINKFLAGS=-L/opt/matlab2014b/sys/os/glnxa64 -liomp5 >> optASR_sigma_disp_mex.mki
echo "EMC_COMPILER=gcc" >> optASR_sigma_disp_mex.mki
echo "EMC_CONFIG=optim" >> optASR_sigma_disp_mex.mki
"/opt/matlab2014b/bin/glnxa64/gmake" -B -f optASR_sigma_disp_mex.mk
