//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLResumable-Protocol.h>
#import <PrivateFederatedLearning/PFLTaskStateProvider-Protocol.h>

@class NSString, NSURL, PFLUpdateConfiguration;
@protocol MLBatchProvider, PFLTaskState;

@interface PFLPartialSession : NSObject <PFLResumable, PFLTaskStateProvider>
{
    NSURL *_modelURL;
    id <MLBatchProvider> _trainingData;
    PFLUpdateConfiguration *_configuration;
    CDUnknownBlockType _completionHandler;
    id <PFLTaskState> _currentState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PFLTaskState> currentState; // @synthesize currentState=_currentState;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) PFLUpdateConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <MLBatchProvider> trainingData; // @synthesize trainingData=_trainingData;
@property(readonly, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (double)validationSplit;
- (id)modelConfiguration;
- (id)layerNames;
- (unsigned long long)privatizationNormBinCount;
- (double)privatizationNormMax;
- (id)dataProvider;
- (id)compiledModelURL;
- (void)suspend;
- (void)resume;
- (void)resumeWithState:(id)arg1;
- (id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
