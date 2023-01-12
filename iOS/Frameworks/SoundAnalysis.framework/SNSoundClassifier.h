//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol SNMLModel;

__attribute__((visibility("hidden")))
@interface SNSoundClassifier : NSObject
{
    id <SNMLModel> _model;
    shared_ptr_f6ac7592 _graph;
    unsigned int _modelBlockSize;
    int _resultsToDiscardCount;
    NSSet *_classLabelsDenylist;
    double _overlapFactor;
    NSString *_classifierIdentifier;
    CDStruct_1b6d18a9 _windowDuration;
}

+ (id)new;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sharedProcessorConfiguration;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;
- (void)primeGraph;
@property(readonly, nonatomic) void *resultsBox;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

