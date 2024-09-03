/*
 * File: gcode1.c
 *
 * Code generated for Simulink model 'gcode1'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Sep  3 00:40:05 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "gcode1.h"
#include "gcode1_private.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void gcode1_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/  lamp_func ' */

  /* Outport: '<Root>/lamp' incorporates:
   *  Inport: '<Root>/sw'
   */
  rtY.lamp = lamp_func(rtU.sw);

  /* End of Outputs for SubSystem: '<Root>/  lamp_func ' */
}

/* Model initialize function */
void gcode1_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
