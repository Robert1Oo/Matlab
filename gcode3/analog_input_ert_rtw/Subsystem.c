/*
 * File: Subsystem.c
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

#include "Subsystem.h"

/* Include model header file for global data */
#include "analog_input.h"
#include "analog_input_private.h"

/* Output and update for atomic system: '<Root>/Subsystem' */
boolean_T analog_input_Subsystem(uint16_T rtu_potentiometer)
{
  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Product: '<S1>/Divide'
   *  Product: '<S1>/Product'
   */
  return (real32_T)rtu_potentiometer / 1023.0F * 100.0F > 50.0F;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
