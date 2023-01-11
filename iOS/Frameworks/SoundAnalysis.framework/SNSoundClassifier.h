//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class MLModel, NSString;

__attribute__((visibility("hidden")))
@interface SNSoundClassifier : NSObject <SNAnalyzing>
{
    MLModel *_model;
    shared_ptr_f6ac7592 _graph;
    int _modelBlockSize;
    int _resultsToDiscardCount;
    int _primeFrameCount;
    double _overlapFactor;
}

+ (void)completeTimingInfoInResult:(id)arg1 usingBox:(struct Box *)arg2 modelBlockSize:(long long)arg3;
+ (id)new;
@property(readonly) int primeFrameCount; // @synthesize primeFrameCount=_primeFrameCount;
@property double overlapFactor; // @synthesize overlapFactor=_overlapFactor;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sharedProcessorConfiguration;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (void)primeGraph;
@property(readonly, nonatomic) struct Box *resultsBox;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
