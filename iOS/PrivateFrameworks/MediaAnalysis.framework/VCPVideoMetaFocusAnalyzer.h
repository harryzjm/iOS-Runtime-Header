//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VCPVideoMetaFocusSegment;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaFocusAnalyzer : NSObject
{
    VCPVideoMetaFocusSegment *_activeSegment;
    NSMutableArray *_mutableResults;
    CDStruct_e83c9415 _frameTimeRange;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSArray *results;
- (int)finalizeAnalysis;
- (void)addSegmentToResults;
- (int)processFrameMetadata:(id)arg1;
- (id)init;

@end

