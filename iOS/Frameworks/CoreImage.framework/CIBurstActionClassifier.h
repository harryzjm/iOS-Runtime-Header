//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstActionClassifier : NSObject
{
    _Bool hasBeenScaled;
    double testVector[7];
    float testAverageCameraTravelDistance;
    float testMaxRegistrationErrorIntegral;
    float testMaxPeakRegistrationError;
    float testMeanPeakRegistrationError;
    float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    float testInOutRatio;
    float testMaxInnerDistance;
    float testAverageRegistrationErrorSkewness;
    float testMinRegionOfInterestSize;
    float testMaxRegistrationErrorSkewness;
    struct __SVMParameters *_svmParameters;
}

@property struct __SVMParameters *svmParameters; // @synthesize svmParameters=_svmParameters;
@property float testMaxRegistrationErrorSkewness; // @synthesize testMaxRegistrationErrorSkewness;
@property float testMinRegionOfInterestSize; // @synthesize testMinRegionOfInterestSize;
@property float testAverageRegistrationErrorSkewness; // @synthesize testAverageRegistrationErrorSkewness;
@property float testMaxInnerDistance; // @synthesize testMaxInnerDistance;
@property float testInOutRatio; // @synthesize testInOutRatio;
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix; // @synthesize testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
@property float testMeanPeakRegistrationError; // @synthesize testMeanPeakRegistrationError;
@property float testMaxPeakRegistrationError; // @synthesize testMaxPeakRegistrationError;
@property float testMaxRegistrationErrorIntegral; // @synthesize testMaxRegistrationErrorIntegral;
@property float testAverageCameraTravelDistance; // @synthesize testAverageCameraTravelDistance;
- (_Bool)isBurstAction;
- (float)predictResult;
- (double)computeKernelValueWithSupportVector:(const struct CIBurstSupportVector *)arg1;
- (void)scaleVector;
- (id)initWithVersion:(int)arg1;
- (id)init;

@end

