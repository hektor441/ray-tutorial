#ifndef SPECTRUM
#define SPECTRUM

// This is actually an RGBSpectrum

template <int nSamples> class CoefficientSpectrum {
    public:
    
        CoefficientSpectrum(float v = 0.f) {
            for (int i = 0; i < nSamples; i++)
                c[i] = v;
        }
    protected:
        float c[nSamples];
};


#endif //SPECTRUM