//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRTextFeatureOrdering-Protocol.h>

@interface CRTextFeatureOrderV1 : NSObject <CRTextFeatureOrdering>
{
    double _angleThresholdForRotatedCrops;
}

@property double angleThresholdForRotatedCrops; // @synthesize angleThresholdForRotatedCrops=_angleThresholdForRotatedCrops;
- (id)orderAndGroupFeatures:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)initWithAngleThresholdForRotatedCrops:(double)arg1;

@end
