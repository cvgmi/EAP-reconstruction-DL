# A geometric framework for ensemble average propagator reconstruction from diffusion MRI

[Baba C. Vemuri, Jiaqi Sun, Monami Banerjee, Zhixin Pan, Sara M. Turner, David D. Fuller, John R. Forder, Alireza Entezari,
A geometric framework for ensemble average propagator reconstruction from diffusion MRI, Medical Image Analysis,
Volume 57, 2019,Pages 89-105](https://www.sciencedirect.com/science/article/pii/S1361841518305693)

This code is a MATLAB implementation of the above paper.

If you use this code please cite the following papers:

* Baba C. Vemuri, Jiaqi Sun, Monami Banerjee, Zhixin Pan, Sara M. Turner, David D. Fuller, John R. Forder, Alireza Entezari, A geometric framework for ensemble average propagator reconstruction from diffusion MRI, Medical Image Analysis, Volume 57, 2019, Pages 89-105

* Jiaqi Sun, Yuchen Xie, Wenxing Ye, Jeffrey Ho, Alireza Entezari, Stephen J. Blackband, Baba C. Vemuri, Dictionary Learning on the Manifold of Square Root Densities and Application to Reconstruction of Diffusion Propagator Fields, Information Processing in Medical Imaging, 2013, Pages 619-631

## Dependencies

* [CVX Package by CVX Research](http://cvxr.com/cvx/download/)


## Quickstart

We provide an implementation of the algorithm presented in the paper along with synthetic data and an example script to
run. The main patch-based reconstruction function can be found in `./Implementation/PSR_mf/dictionaryPSR.m`. The example
script `example_patch_recon.m` runs the patch-based reconstruction function on several synthetic samples and saves the
generated dictionary and the reconstruction.
