//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMITorsoprinter, NSString;

@interface HMITorsoClassifier : HMFObject <HMFLogging>
{
    HMITorsoprinter *_torsoprinter;
    double _classificationThresholdKnown;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) double classificationThresholdKnown; // @synthesize classificationThresholdKnown=_classificationThresholdKnown;
@property(readonly) HMITorsoprinter *torsoprinter; // @synthesize torsoprinter=_torsoprinter;
- (id)classifyTorsoEvent:(id)arg1 regionOfInterest:(struct CGRect)arg2 pixelBuffer:(struct __CVBuffer *)arg3 homeUUID:(id)arg4 error:(id *)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
