//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSIndexSet, NSString, PXStoryResourcesDataSource;
@protocol PXStoryClip, PXStoryTimeline;

@protocol PXStoryTimeline <NSObject>
@property(readonly, nonatomic) NSString *objectiveCCode;
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) struct CGSize originalSize;
@property(readonly, nonatomic) long long dataSourceIdentifier;
@property(readonly, nonatomic) long long lastSegmentIdentifier;
@property(readonly, nonatomic) long long firstSegmentIdentifier;
@property(readonly, nonatomic) long long numberOfSegments;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)arg1 inResourcesDataSource:(PXStoryResourcesDataSource *)arg2 resourceKind:(long long)arg3;
- (long long)indexOfResourceForClipWithIdentifier:(long long)arg1 inResourcesDataSource:(PXStoryResourcesDataSource *)arg2 resourceKind:(long long)arg3;
- (NSIndexSet *)indexesOfResourcesWithKind:(long long)arg1 inResourcesDataSource:(PXStoryResourcesDataSource *)arg2 forClipsInSegmentWithIdentifier:(long long)arg3;
- (NSIndexSet *)segmentIdentifiersInTimeRange:(CDStruct_e83c9415)arg1 rect:(struct CGRect)arg2;
- (struct CGRect)frameForSegmentWithIdentifier:(long long)arg1;
- (long long)identifierForSegmentWithOffset:(CDStruct_1b6d18a9)arg1 fromEndOfSegmentWithIdentifier:(long long)arg2 timeIntoSegment:(out CDStruct_1b6d18a9 *)arg3;
- (NSIndexSet *)identifiersOfSegmentsMatchingSegmentWithIdentifier:(long long)arg1 inTimeline:(id <PXStoryTimeline>)arg2;
- (long long)identifierOfSegmentClosestToSegmentWithIdentifier:(long long)arg1 inTimeline:(id <PXStoryTimeline>)arg2;
- (CDStruct_700d4edc)infoForSegmentWithIdentifier:(long long)arg1;
- (CDStruct_e83c9415)timeRangeForSegmentWithIdentifier:(long long)arg1;
- (_Bool)containsAllSegmentsWithIdentifiers:(NSIndexSet *)arg1;
- (_Bool)containsSegmentWithIdentifier:(long long)arg1;
- (long long)indexOfSegmentWithIdentifier:(long long)arg1;
- (long long)identifierForSegmentAtIndex:(long long)arg1;
- (void)enumerateSegmentsInTimeRange:(CDStruct_e83c9415)arg1 usingBlock:(void (^)(long long, struct *, struct *, _Bool *))arg2;
- (id <PXStoryClip>)clipWithResourceKind:(long long)arg1 afterClipIdentifier:(long long)arg2;
- (id <PXStoryClip>)clipWithIdentifier:(long long)arg1;
- (void)enumerateClipsInTimeRange:(CDStruct_e83c9415)arg1 rect:(struct CGRect)arg2 usingBlock:(void (^)(long long, struct *, struct CGRect *, struct *, _Bool *))arg3;
- (long long)numberOfClipsWithResourceKind:(long long)arg1;
@end
