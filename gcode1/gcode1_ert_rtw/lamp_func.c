/*
 * File: lamp_func.c
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

#include "lamp_func.h"

/* Include model header file for global data */
#include "gcode1.h"
#include "gcode1_private.h"

/* Output and update for atomic system: '<Root>/  lamp_func ' */
boolean_T lamp_func(boolean_T rtu_sw)
{
  /* Switch: '<S1>/Switch' */
  return rtu_sw;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
