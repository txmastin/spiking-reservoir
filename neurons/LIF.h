#ifndef LIF_H
#define LIF_H

typedef struct {
    double V;
    double V_th;
    double V_0;
    double leak_rate;
    double spike;
} LIFNeuron;

LIFNeuron* init_LIF(double *neuron_params);
void update_LIF(LIFNeuron *neuron, double input);
void free_LIF(LIFNeuron *neuron);

#endif // LIF_H
