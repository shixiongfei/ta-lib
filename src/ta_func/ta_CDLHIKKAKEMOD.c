/* TA-LIB Copyright (c) 1999-2025, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  122605 AC   Creation
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #elif defined( _RUST )
/* Generated */    #include "ta_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */    impl core {
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlHikkakeModLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlHikkakeModLookback(  )
/* Generated */ 
/* Generated */ #elif defined( _RUST )
/* Generated */ fn cdlhikkakemod_lookback( /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLHIKKAKEMOD_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return max( 1, TA_CANDLEAVGPERIOD(Near) ) + 5;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLHIKKAKEMOD - Modified Hikkake Pattern
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlHikkakeMod( int    startIdx,
/* Generated */                                               int    endIdx,
/* Generated */                                               SubArray<double>^ inOpen,
/* Generated */                                               SubArray<double>^ inHigh,
/* Generated */                                               SubArray<double>^ inLow,
/* Generated */                                               SubArray<double>^ inClose,
/* Generated */                                               [Out]int%    outBegIdx,
/* Generated */                                               [Out]int%    outNBElement,
/* Generated */                                               SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlHikkakeMod( int    startIdx,
/* Generated */                                               int    endIdx,
/* Generated */                                               cli::array<double>^ inOpen,
/* Generated */                                               cli::array<double>^ inHigh,
/* Generated */                                               cli::array<double>^ inLow,
/* Generated */                                               cli::array<double>^ inClose,
/* Generated */                                               [Out]int%    outBegIdx,
/* Generated */                                               [Out]int%    outNBElement,
/* Generated */                                               cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlHikkakeMod( int    startIdx,
/* Generated */                               int    endIdx,
/* Generated */                               double       inOpen[],
/* Generated */                               double       inHigh[],
/* Generated */                               double       inLow[],
/* Generated */                               double       inClose[],
/* Generated */                               MInteger     outBegIdx,
/* Generated */                               MInteger     outNBElement,
/* Generated */                               int           outInteger[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ fn cdlhikkakemod( int    startIdx,
/* Generated */ 
/* Generated */                                    int    endIdx,
 inPriceOHLC[],
mut outBegIdx,
mut outNBElement,
 outInteger[],
)
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLHIKKAKEMOD( int    startIdx,
/* Generated */                                         int    endIdx,
/* Generated */                                                    const double inOpen[],
/* Generated */                                                    const double inHigh[],
/* Generated */                                                    const double inLow[],
/* Generated */                                                    const double inClose[],
/* Generated */                                                    int          *outBegIdx,
/* Generated */                                                    int          *outNBElement,
/* Generated */                                                    int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    double NearPeriodTotal;
    int i, outIdx, NearTrailingIdx, lookbackTotal, patternIdx, patternResult;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */ #if defined( _RUST )
/* Generated */ 
/* Generated */ #else
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDLHIKKAKEMOD)();

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   NearPeriodTotal = 0;
   NearTrailingIdx = startIdx - 3 - TA_CANDLEAVGPERIOD(Near);
   i = NearTrailingIdx;
   while( i < startIdx - 3 ) {
        NearPeriodTotal += TA_CANDLERANGE( Near, i-2 );
        i++;
   }

   patternIdx = 0;
   patternResult = 0;

   i = startIdx - 3;
   while( i < startIdx ) {
        /* copy here the pattern recognition code below */
        if( inHigh[i-2] < inHigh[i-3] && inLow[i-2] > inLow[i-3] &&             // 2nd: lower high and higher low than 1st
            inHigh[i-1] < inHigh[i-2] && inLow[i-1] > inLow[i-2] &&             // 3rd: lower high and higher low than 2nd
            ( ( inHigh[i] < inHigh[i-1] && inLow[i] < inLow[i-1] &&             // (bull) 4th: lower high and lower low
                inClose[i-2] <= inLow[i-2] + TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-2 )
                                                                                // (bull) 2nd: close near the low
              )
              ||
              ( inHigh[i] > inHigh[i-1] && inLow[i] > inLow[i-1] &&             // (bear) 4th: higher high and higher low
                inClose[i-2] >= inHigh[i-2] - TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-2 )
                                                                                // (bull) 2nd: close near the top
              )
            )
        ) {
            patternResult = 100 * ( inHigh[i] < inHigh[i-1] ? 1 : -1 );
            patternIdx = i;
        } else
            /* search for confirmation if modified hikkake was no more than 3 bars ago */
            if( i <= patternIdx+3 &&
                ( ( patternResult > 0 && inClose[i] > inHigh[patternIdx-1] )    // close higher than the high of 3rd
                  ||
                  ( patternResult < 0 && inClose[i] < inLow[patternIdx-1] )     // close lower than the low of 3rd
                )
            )
                patternIdx = 0;
        NearPeriodTotal += TA_CANDLERANGE( Near, i-2 ) - TA_CANDLERANGE( Near, NearTrailingIdx-2 );
        NearTrailingIdx++;
        i++;
   }

   i = startIdx;

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - first candle
    * - second candle: candle with range less than first candle and close near the bottom (near the top)
    * - third candle: lower high and higher low than 2nd
    * - fourth candle: lower high and lower low (higher high and higher low) than 3rd
    * outInteger[hikkake bar] is positive (1 to 100) or negative (-1 to -100) meaning bullish or bearish hikkake
    * Confirmation could come in the next 3 days with:
    * - a day that closes higher than the high (lower than the low) of the 3rd candle
    * outInteger[confirmationbar] is equal to 100 + the bullish hikkake result or -100 - the bearish hikkake result
    * Note: if confirmation and a new hikkake come at the same bar, only the new hikkake is reported (the new hikkake
    * overwrites the confirmation of the old hikkake);
    * the user should consider that modified hikkake is a reversal pattern, while hikkake could be both a reversal
    * or a continuation pattern, so bullish (bearish) modified hikkake is significant when appearing in a downtrend
    * (uptrend)
    */
   outIdx = 0;
   do
   {
        if( inHigh[i-2] < inHigh[i-3] && inLow[i-2] > inLow[i-3] &&             // 2nd: lower high and higher low than 1st
            inHigh[i-1] < inHigh[i-2] && inLow[i-1] > inLow[i-2] &&             // 3rd: lower high and higher low than 2nd
            ( ( inHigh[i] < inHigh[i-1] && inLow[i] < inLow[i-1] &&             // (bull) 4th: lower high and lower low
                inClose[i-2] <= inLow[i-2] + TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-2 )
                                                                                // (bull) 2nd: close near the low
              )
              ||
              ( inHigh[i] > inHigh[i-1] && inLow[i] > inLow[i-1] &&             // (bear) 4th: higher high and higher low
                inClose[i-2] >= inHigh[i-2] - TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-2 )
                                                                                // (bull) 2nd: close near the top
              )
            )
        ) {
            patternResult = 100 * ( inHigh[i] < inHigh[i-1] ? 1 : -1 );
            patternIdx = i;
            outInteger[outIdx++] = patternResult;
        } else
            /* search for confirmation if modified hikkake was no more than 3 bars ago */
            if( i <= patternIdx+3 &&
                ( ( patternResult > 0 && inClose[i] > inHigh[patternIdx-1] )    // close higher than the high of 3rd
                  ||
                  ( patternResult < 0 && inClose[i] < inLow[patternIdx-1] )     // close lower than the low of 3rd
                )
            ) {
                outInteger[outIdx++] = patternResult + 100 * ( patternResult > 0 ? 1 : -1 );
                patternIdx = 0;
            } else
                outInteger[outIdx++] = 0;
        NearPeriodTotal += TA_CANDLERANGE( Near, i-2 ) - TA_CANDLERANGE( Near, NearTrailingIdx-2 );
        NearTrailingIdx++;
        i++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlHikkakeMod( int    startIdx,
/* Generated */                                               int    endIdx,
/* Generated */                                               SubArray<float>^ inOpen,
/* Generated */                                               SubArray<float>^ inHigh,
/* Generated */                                               SubArray<float>^ inLow,
/* Generated */                                               SubArray<float>^ inClose,
/* Generated */                                               [Out]int%    outBegIdx,
/* Generated */                                               [Out]int%    outNBElement,
/* Generated */                                               SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlHikkakeMod( int    startIdx,
/* Generated */                                               int    endIdx,
/* Generated */                                               cli::array<float>^ inOpen,
/* Generated */                                               cli::array<float>^ inHigh,
/* Generated */                                               cli::array<float>^ inLow,
/* Generated */                                               cli::array<float>^ inClose,
/* Generated */                                               [Out]int%    outBegIdx,
/* Generated */                                               [Out]int%    outNBElement,
/* Generated */                                               cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlHikkakeMod( int    startIdx,
/* Generated */                               int    endIdx,
/* Generated */                               float        inOpen[],
/* Generated */                               float        inHigh[],
/* Generated */                               float        inLow[],
/* Generated */                               float        inClose[],
/* Generated */                               MInteger     outBegIdx,
/* Generated */                               MInteger     outNBElement,
/* Generated */                               int           outInteger[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ fn cdlhikkakemod_s( int    startIdx,
/* Generated */ 
/* Generated */                                      int    endIdx,
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLHIKKAKEMOD( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                const float  inOpen[],
/* Generated */                                const float  inHigh[],
/* Generated */                                const float  inLow[],
/* Generated */                                const float  inClose[],
/* Generated */                                int          *outBegIdx,
/* Generated */                                int          *outNBElement,
/* Generated */                                int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double NearPeriodTotal;
/* Generated */     int i, outIdx, NearTrailingIdx, lookbackTotal, patternIdx, patternResult;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */  #if defined( _RUST )
/* Generated */  #else
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLHIKKAKEMOD)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    NearPeriodTotal = 0;
/* Generated */    NearTrailingIdx = startIdx - 3 - TA_CANDLEAVGPERIOD(Near);
/* Generated */    i = NearTrailingIdx;
/* Generated */    while( i < startIdx - 3 ) {
/* Generated */         NearPeriodTotal += TA_CANDLERANGE( Near, i-2 );
/* Generated */         i++;
/* Generated */    }
/* Generated */    patternIdx = 0;
/* Generated */    patternResult = 0;
/* Generated */    i = startIdx - 3;
/* Generated */    while( i < startIdx ) {
/* Generated */         if( inHigh[i-2] < inHigh[i-3] && inLow[i-2] > inLow[i-3] &&             // 2nd: lower high and higher low than 1st
/* Generated */             inHigh[i-1] < inHigh[i-2] && inLow[i-1] > inLow[i-2] &&             // 3rd: lower high and higher low than 2nd
/* Generated */             ( ( inHigh[i] < inHigh[i-1] && inLow[i] < inLow[i-1] &&             // (bull) 4th: lower high and lower low
/* Generated */                 inClose[i-2] <= inLow[i-2] + TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-2 )
/* Generated */                                                                                 // (bull) 2nd: close near the low
/* Generated */               )
/* Generated */               ||
/* Generated */               ( inHigh[i] > inHigh[i-1] && inLow[i] > inLow[i-1] &&             // (bear) 4th: higher high and higher low
/* Generated */                 inClose[i-2] >= inHigh[i-2] - TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-2 )
/* Generated */                                                                                 // (bull) 2nd: close near the top
/* Generated */               )
/* Generated */             )
/* Generated */         ) {
/* Generated */             patternResult = 100 * ( inHigh[i] < inHigh[i-1] ? 1 : -1 );
/* Generated */             patternIdx = i;
/* Generated */         } else
/* Generated */             if( i <= patternIdx+3 &&
/* Generated */                 ( ( patternResult > 0 && inClose[i] > inHigh[patternIdx-1] )    // close higher than the high of 3rd
/* Generated */                   ||
/* Generated */                   ( patternResult < 0 && inClose[i] < inLow[patternIdx-1] )     // close lower than the low of 3rd
/* Generated */                 )
/* Generated */             )
/* Generated */                 patternIdx = 0;
/* Generated */         NearPeriodTotal += TA_CANDLERANGE( Near, i-2 ) - TA_CANDLERANGE( Near, NearTrailingIdx-2 );
/* Generated */         NearTrailingIdx++;
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */         if( inHigh[i-2] < inHigh[i-3] && inLow[i-2] > inLow[i-3] &&             // 2nd: lower high and higher low than 1st
/* Generated */             inHigh[i-1] < inHigh[i-2] && inLow[i-1] > inLow[i-2] &&             // 3rd: lower high and higher low than 2nd
/* Generated */             ( ( inHigh[i] < inHigh[i-1] && inLow[i] < inLow[i-1] &&             // (bull) 4th: lower high and lower low
/* Generated */                 inClose[i-2] <= inLow[i-2] + TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-2 )
/* Generated */                                                                                 // (bull) 2nd: close near the low
/* Generated */               )
/* Generated */               ||
/* Generated */               ( inHigh[i] > inHigh[i-1] && inLow[i] > inLow[i-1] &&             // (bear) 4th: higher high and higher low
/* Generated */                 inClose[i-2] >= inHigh[i-2] - TA_CANDLEAVERAGE( Near, NearPeriodTotal, i-2 )
/* Generated */                                                                                 // (bull) 2nd: close near the top
/* Generated */               )
/* Generated */             )
/* Generated */         ) {
/* Generated */             patternResult = 100 * ( inHigh[i] < inHigh[i-1] ? 1 : -1 );
/* Generated */             patternIdx = i;
/* Generated */             outInteger[outIdx++] = patternResult;
/* Generated */         } else
/* Generated */             if( i <= patternIdx+3 &&
/* Generated */                 ( ( patternResult > 0 && inClose[i] > inHigh[patternIdx-1] )    // close higher than the high of 3rd
/* Generated */                   ||
/* Generated */                   ( patternResult < 0 && inClose[i] < inLow[patternIdx-1] )     // close lower than the low of 3rd
/* Generated */                 )
/* Generated */             ) {
/* Generated */                 outInteger[outIdx++] = patternResult + 100 * ( patternResult > 0 ? 1 : -1 );
/* Generated */                 patternIdx = 0;
/* Generated */             } else
/* Generated */                 outInteger[outIdx++] = 0;
/* Generated */         NearPeriodTotal += TA_CANDLERANGE( Near, i-2 ) - TA_CANDLERANGE( Near, NearTrailingIdx-2 );
/* Generated */         NearTrailingIdx++;
/* Generated */         i++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #elif defined( _RUST )
/* Generated */ } // Close impl core
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

