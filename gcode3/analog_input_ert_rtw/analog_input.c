/*
 * File: analog_input.c
 *
 * Code generated for Simulink model 'analog_input'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep  3 20:15:28 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "analog_input.h"
#include "analog_input_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_analog_input_T analog_input_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_analog_input_T analog_input_Y;

/* Real-time model */
RT_MODEL_analog_input_T analog_input_M_;
RT_MODEL_analog_input_T *const analog_input_M = &analog_input_M_;

/* Model step function */
void analog_input_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/lamp' incorporates:
   *  Inport: '<Root>/analog_inp'
   */
  analog_input_Y.lamp = analog_input_Subsystem(analog_input_U.analog_inp);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
}

/* Model initialize function */
void analog_input_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(analog_input_M, (NULL));

  /* external inputs */
  analog_input_U.analog_inp = 0U;

  /* external outputs */
  analog_input_Y.lamp = false;
}

/* Model terminate function */
void analog_input_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
