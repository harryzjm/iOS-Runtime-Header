//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMIDESDataset, NSString, NSURL;

@interface HMIDESTrainer : HMFObject <HMFLogging>
{
    HMIDESDataset *_data;
    NSURL *_networkPath;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSURL *networkPath; // @synthesize networkPath=_networkPath;
@property(readonly) HMIDESDataset *data; // @synthesize data=_data;
- (id)trainLayers:(id)arg1 epochs:(unsigned long long)arg2 inferenceInputs:(id)arg3 inferenceOutputs:(id)arg4 trainingInputs:(id)arg5 trainingOutputs:(id)arg6 error:(id *)arg7;
- (id)getParametersFromLayers:(id)arg1 fromTask:(id)arg2 error:(id *)arg3;
- (id)initWithTrainingNetworkPath:(id)arg1 data:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
