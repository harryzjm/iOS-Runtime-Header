//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate-Protocol.h>

@class NSOperationQueue, NSString, PHAFaceCropProcessingJobProcessFaceCropsOperation;

@interface PHAFaceCropProcessingJob <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate>
{
    NSOperationQueue *_operationQueue;
    PHAFaceCropProcessingJobProcessFaceCropsOperation *_processingOperation;
}

- (void).cxx_destruct;
- (void)operation:(id)arg1 didProcessFaceCrop:(id)arg2 withError:(id)arg3;
- (float)completionScore;
- (_Bool)stopJob:(id *)arg1;
- (_Bool)startJob:(id *)arg1;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 dirtyFaceCrops:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

