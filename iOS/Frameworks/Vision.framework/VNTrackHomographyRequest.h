//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VNHomographyTrackerState;

@interface VNTrackHomographyRequest
{
    VNHomographyTrackerState *_state;
}

+ (Class)configurationClass;
+ (const CDStruct_7d93034e *)revisionAvailability;
- (void).cxx_destruct;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)allowsCachingOfResults;
- (id)initWithFrameAnalysisSpacing:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end
