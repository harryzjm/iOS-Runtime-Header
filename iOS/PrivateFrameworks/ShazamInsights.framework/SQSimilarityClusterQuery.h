//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, SQRegion;

@interface SQSimilarityClusterQuery
{
    SQRegion *_region;
    NSDate *_date;
}

+ (id)new;
+ (id)queue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) SQRegion *region; // @synthesize region=_region;
- (id)init;
- (void)clustersForRegion:(id)arg1 date:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)clustersFromFilteringShazamIDs:(id)arg1 byTasteShazamIDs:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)clustersFromFilteringProductIDs:(id)arg1 byTasteProductIDs:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
