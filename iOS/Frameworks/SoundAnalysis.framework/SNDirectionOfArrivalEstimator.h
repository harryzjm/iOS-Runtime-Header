//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDirectionOfArrivalEstimator : NSObject
{
    shared_ptr_f6ac7592 _graph;
    NSString *_tuningPrefix;
    float _azimuth;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)sharedProcessorConfiguration;
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)initWithTuningPrefix:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

