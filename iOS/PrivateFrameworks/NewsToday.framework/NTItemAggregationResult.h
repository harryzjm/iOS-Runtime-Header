//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

@interface NTItemAggregationResult : NSObject <NSCopying>
{
    NSDictionary *_aggregatedItemsBySectionDescriptor;
    NSDictionary *_slotAllocationByDynamicSlotItemID;
    NSArray *_unusedSectionDescriptors;
    double _headlineScale;
    double _slotsUsed;
}

- (void).cxx_destruct;
@property(nonatomic) double slotsUsed; // @synthesize slotsUsed=_slotsUsed;
@property(nonatomic) double headlineScale; // @synthesize headlineScale=_headlineScale;
@property(copy, nonatomic) NSArray *unusedSectionDescriptors; // @synthesize unusedSectionDescriptors=_unusedSectionDescriptors;
@property(copy, nonatomic) NSDictionary *slotAllocationByDynamicSlotItemID; // @synthesize slotAllocationByDynamicSlotItemID=_slotAllocationByDynamicSlotItemID;
@property(copy, nonatomic) NSDictionary *aggregatedItemsBySectionDescriptor; // @synthesize aggregatedItemsBySectionDescriptor=_aggregatedItemsBySectionDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long itemCount;
- (double)slotCostWithInfo:(id)arg1;
- (double)sectionOverheadSlotCostWithInfo:(id)arg1;
- (double)headlineSlotCostWithSlotCost:(double)arg1;
- (id)copyWithHeadlineScale:(double)arg1;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)arg1 slotAllocationByDynamicSlotItemID:(id)arg2 unusedSectionDescriptors:(id)arg3;
- (id)init;

@end
