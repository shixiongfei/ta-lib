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
 *  RM       Robert Meier
 *  MF       Mario Fortier
 *
 * Change history:
 *
 *  MMDDYY BY     Description
 *  -------------------------------------------------------------------
 *  120307 RM     Initial Version
 *  120907 MF     Handling of a few limit cases
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
/* Generated */ int Core::AccbandsLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int accbandsLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _RUST )
/* Generated */ fn accbands_lookback( /* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_ACCBANDS_Lookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 20;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */

   return LOOKBACK_CALL(SMA)( optInTimePeriod );
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_ACCBANDS - Acceleration Bands
 * 
 * Input  = High, Low, Close
 * Output = double, double, double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Accbands( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                          SubArray<double>^ inHigh,
/* Generated */                                          SubArray<double>^ inLow,
/* Generated */                                          SubArray<double>^ inClose,
/* Generated */                                          int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                          [Out]int%    outBegIdx,
/* Generated */                                          [Out]int%    outNBElement,
/* Generated */                                          SubArray<double>^  outRealUpperBand,
/* Generated */                                          SubArray<double>^  outRealMiddleBand,
/* Generated */                                          SubArray<double>^  outRealLowerBand )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Accbands( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                          cli::array<double>^ inHigh,
/* Generated */                                          cli::array<double>^ inLow,
/* Generated */                                          cli::array<double>^ inClose,
/* Generated */                                          int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                          [Out]int%    outBegIdx,
/* Generated */                                          [Out]int%    outNBElement,
/* Generated */                                          cli::array<double>^  outRealUpperBand,
/* Generated */                                          cli::array<double>^  outRealMiddleBand,
/* Generated */                                          cli::array<double>^  outRealLowerBand )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode accbands( int    startIdx,
/* Generated */                          int    endIdx,
/* Generated */                          double       inHigh[],
/* Generated */                          double       inLow[],
/* Generated */                          double       inClose[],
/* Generated */                          int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                          MInteger     outBegIdx,
/* Generated */                          MInteger     outNBElement,
/* Generated */                          double        outRealUpperBand[],
/* Generated */                          double        outRealMiddleBand[],
/* Generated */                          double        outRealLowerBand[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ fn accbands( int    startIdx,
/* Generated */ 
/* Generated */                               int    endIdx,
 inPriceHLC[],
 optInTimePeriod[],
mut outBegIdx,
mut outNBElement,
double outRealUpperBand[],
double outRealMiddleBand[],
double outRealLowerBand[],
)
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_ACCBANDS( int    startIdx,
/* Generated */                                    int    endIdx,
/* Generated */                                               const double inHigh[],
/* Generated */                                               const double inLow[],
/* Generated */                                               const double inClose[],
/* Generated */                                               int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                               int          *outBegIdx,
/* Generated */                                               int          *outNBElement,
/* Generated */                                               double        outRealUpperBand[],
/* Generated */                                               double        outRealMiddleBand[],
/* Generated */                                               double        outRealLowerBand[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
   ENUM_DECLARATION(RetCode) retCode;
   ARRAY_REF( tempBuffer1 );
   ARRAY_REF( tempBuffer2 );
   VALUE_HANDLE_INT(outBegIdxDummy);
   VALUE_HANDLE_INT(outNbElementDummy);
   int i, j, outputSize, bufferSize, lookbackTotal;
   double tempReal;

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
/* Generated */    if(!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 20;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outRealUpperBand )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    if( !outRealMiddleBand )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    if( !outRealLowerBand )
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
   lookbackTotal = LOOKBACK_CALL(SMA)( optInTimePeriod );

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

   /* Buffer will contains also the lookback required for SMA
    * to satisfy the caller requested startIdx/endIdx.
	*/
   outputSize = endIdx-startIdx+1;
   bufferSize = outputSize+lookbackTotal;
   ARRAY_ALLOC(tempBuffer1, bufferSize );
   #if !defined(_JAVA)
      if( !tempBuffer1 )
	  {
         VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
         VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
         return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
	  }
   #endif

   ARRAY_ALLOC(tempBuffer2, bufferSize );
   #if !defined(_JAVA)
      if( !tempBuffer2 )
	  {
		 ARRAY_FREE(tempBuffer1);
         VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
         VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
         return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
	  }
   #endif

   /* Calculate the upper/lower band at the same time (no SMA yet).
    * Must start calculation back enough to cover the lookback
    * required later for the SMA.
	*/
   for(j=0, i=startIdx-lookbackTotal; i<=endIdx; i++, j++)
   {
	    tempReal = inHigh[i]+inLow[i];
	    if( !TA_IS_ZERO(tempReal) )
		{
		   tempReal = 4*(inHigh[i]-inLow[i])/tempReal;
		   tempBuffer1[j] = inHigh[i]*(1+tempReal);
		   tempBuffer2[j] = inLow[i]*(1-tempReal);
		}
		else
		{
		   tempBuffer1[j] = inHigh[i];
		   tempBuffer2[j] = inLow[i];
		}
   }

   /* Calculate the middle band, which is a moving average of the close. */
   retCode = FUNCTION_CALL(SMA)( startIdx, endIdx, inClose,
                                optInTimePeriod,
                                VALUE_HANDLE_OUT(outBegIdxDummy), VALUE_HANDLE_OUT(outNbElementDummy), outRealMiddleBand );

   if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || ((int)VALUE_HANDLE_GET(outNbElementDummy) != outputSize) )
   {
      ARRAY_FREE( tempBuffer1 );
      ARRAY_FREE( tempBuffer2 );
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return retCode;
   }

   /* Now let's take the SMA for the upper band. */
   retCode = FUNCTION_CALL_DOUBLE(SMA)( 0, bufferSize-1, tempBuffer1,
                                optInTimePeriod,
                                VALUE_HANDLE_OUT(outBegIdxDummy), VALUE_HANDLE_OUT(outNbElementDummy),
								outRealUpperBand );

   if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || ((int)VALUE_HANDLE_GET(outNbElementDummy) != outputSize) )
   {
      ARRAY_FREE( tempBuffer1 );
      ARRAY_FREE( tempBuffer2 );
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return retCode;
   }

   /* Now let's take the SMA for the lower band. */
   retCode = FUNCTION_CALL_DOUBLE(SMA)( 0, bufferSize-1, tempBuffer2,
                                optInTimePeriod,
                                VALUE_HANDLE_OUT(outBegIdxDummy), VALUE_HANDLE_OUT(outNbElementDummy),
								outRealLowerBand );

   ARRAY_FREE( tempBuffer1 );
   ARRAY_FREE( tempBuffer2 );

   if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || ((int)VALUE_HANDLE_GET(outNbElementDummy) != outputSize) )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return retCode;
   }

   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
   VALUE_HANDLE_DEREF(outNBElement) = outputSize;

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
/* Generated */ enum class Core::RetCode Core::Accbands( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                          SubArray<float>^ inHigh,
/* Generated */                                          SubArray<float>^ inLow,
/* Generated */                                          SubArray<float>^ inClose,
/* Generated */                                          int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                          [Out]int%    outBegIdx,
/* Generated */                                          [Out]int%    outNBElement,
/* Generated */                                          SubArray<double>^  outRealUpperBand,
/* Generated */                                          SubArray<double>^  outRealMiddleBand,
/* Generated */                                          SubArray<double>^  outRealLowerBand )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Accbands( int    startIdx,
/* Generated */                                          int    endIdx,
/* Generated */                                          cli::array<float>^ inHigh,
/* Generated */                                          cli::array<float>^ inLow,
/* Generated */                                          cli::array<float>^ inClose,
/* Generated */                                          int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                          [Out]int%    outBegIdx,
/* Generated */                                          [Out]int%    outNBElement,
/* Generated */                                          cli::array<double>^  outRealUpperBand,
/* Generated */                                          cli::array<double>^  outRealMiddleBand,
/* Generated */                                          cli::array<double>^  outRealLowerBand )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode accbands( int    startIdx,
/* Generated */                          int    endIdx,
/* Generated */                          float        inHigh[],
/* Generated */                          float        inLow[],
/* Generated */                          float        inClose[],
/* Generated */                          int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                          MInteger     outBegIdx,
/* Generated */                          MInteger     outNBElement,
/* Generated */                          double        outRealUpperBand[],
/* Generated */                          double        outRealMiddleBand[],
/* Generated */                          double        outRealLowerBand[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ fn accbands_s( int    startIdx,
/* Generated */ 
/* Generated */                                 int    endIdx,
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_ACCBANDS( int    startIdx,
/* Generated */                           int    endIdx,
/* Generated */                           const float  inHigh[],
/* Generated */                           const float  inLow[],
/* Generated */                           const float  inClose[],
/* Generated */                           int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                           int          *outBegIdx,
/* Generated */                           int          *outNBElement,
/* Generated */                           double        outRealUpperBand[],
/* Generated */                           double        outRealMiddleBand[],
/* Generated */                           double        outRealLowerBand[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    ENUM_DECLARATION(RetCode) retCode;
/* Generated */    ARRAY_REF( tempBuffer1 );
/* Generated */    ARRAY_REF( tempBuffer2 );
/* Generated */    VALUE_HANDLE_INT(outBegIdxDummy);
/* Generated */    VALUE_HANDLE_INT(outNbElementDummy);
/* Generated */    int i, j, outputSize, bufferSize, lookbackTotal;
/* Generated */    double tempReal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */  #if defined( _RUST )
/* Generated */  #else
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 20;
/* Generated */     else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outRealUpperBand )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( !outRealMiddleBand )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( !outRealLowerBand )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(SMA)( optInTimePeriod );
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    outputSize = endIdx-startIdx+1;
/* Generated */    bufferSize = outputSize+lookbackTotal;
/* Generated */    ARRAY_ALLOC(tempBuffer1, bufferSize );
/* Generated */    #if !defined(_JAVA)
/* Generated */       if( !tempBuffer1 )
/* Generated */ 	  {
/* Generated */          VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */          VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */          return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
/* Generated */ 	  }
/* Generated */    #endif
/* Generated */    ARRAY_ALLOC(tempBuffer2, bufferSize );
/* Generated */    #if !defined(_JAVA)
/* Generated */       if( !tempBuffer2 )
/* Generated */ 	  {
/* Generated */ 		 ARRAY_FREE(tempBuffer1);
/* Generated */          VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */          VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */          return ENUM_VALUE(RetCode,TA_ALLOC_ERR,AllocErr);
/* Generated */ 	  }
/* Generated */    #endif
/* Generated */    for(j=0, i=startIdx-lookbackTotal; i<=endIdx; i++, j++)
/* Generated */    {
/* Generated */ 	    tempReal = inHigh[i]+inLow[i];
/* Generated */ 	    if( !TA_IS_ZERO(tempReal) )
/* Generated */ 		{
/* Generated */ 		   tempReal = 4*(inHigh[i]-inLow[i])/tempReal;
/* Generated */ 		   tempBuffer1[j] = inHigh[i]*(1+tempReal);
/* Generated */ 		   tempBuffer2[j] = inLow[i]*(1-tempReal);
/* Generated */ 		}
/* Generated */ 		else
/* Generated */ 		{
/* Generated */ 		   tempBuffer1[j] = inHigh[i];
/* Generated */ 		   tempBuffer2[j] = inLow[i];
/* Generated */ 		}
/* Generated */    }
/* Generated */    retCode = FUNCTION_CALL(SMA)( startIdx, endIdx, inClose,
/* Generated */                                 optInTimePeriod,
/* Generated */                                 VALUE_HANDLE_OUT(outBegIdxDummy), VALUE_HANDLE_OUT(outNbElementDummy), outRealMiddleBand );
/* Generated */    if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || ((int)VALUE_HANDLE_GET(outNbElementDummy) != outputSize) )
/* Generated */    {
/* Generated */       ARRAY_FREE( tempBuffer1 );
/* Generated */       ARRAY_FREE( tempBuffer2 );
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    retCode = FUNCTION_CALL_DOUBLE(SMA)( 0, bufferSize-1, tempBuffer1,
/* Generated */                                 optInTimePeriod,
/* Generated */                                 VALUE_HANDLE_OUT(outBegIdxDummy), VALUE_HANDLE_OUT(outNbElementDummy),
/* Generated */ 								outRealUpperBand );
/* Generated */    if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || ((int)VALUE_HANDLE_GET(outNbElementDummy) != outputSize) )
/* Generated */    {
/* Generated */       ARRAY_FREE( tempBuffer1 );
/* Generated */       ARRAY_FREE( tempBuffer2 );
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    retCode = FUNCTION_CALL_DOUBLE(SMA)( 0, bufferSize-1, tempBuffer2,
/* Generated */                                 optInTimePeriod,
/* Generated */                                 VALUE_HANDLE_OUT(outBegIdxDummy), VALUE_HANDLE_OUT(outNbElementDummy),
/* Generated */ 								outRealLowerBand );
/* Generated */    ARRAY_FREE( tempBuffer1 );
/* Generated */    ARRAY_FREE( tempBuffer2 );
/* Generated */    if( (retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) ) || ((int)VALUE_HANDLE_GET(outNbElementDummy) != outputSize) )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outputSize;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #elif defined( _RUST )
/* Generated */ } // Close impl core
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

