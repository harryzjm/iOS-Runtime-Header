//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface MPModelRadioStationEvent
{
}

+ (id)__heroArtworkCatalogBlock_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__endTime_KEY;
+ (id)__startTime_KEY;
+ (id)__descriptionText_KEY;
+ (id)__title_KEY;
+ (long long)genericObjectType;
- (id)heroArtworkCatalog;
- (id)artworkCatalog;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(copy, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(copy, nonatomic) NSDate *endTime; // @dynamic endTime;
@property(copy, nonatomic) CDUnknownBlockType heroArtworkCatalogBlock; // @dynamic heroArtworkCatalogBlock;
@property(copy, nonatomic) NSDate *startTime; // @dynamic startTime;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
