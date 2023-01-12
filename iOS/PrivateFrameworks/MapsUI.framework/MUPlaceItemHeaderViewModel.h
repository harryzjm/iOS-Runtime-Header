//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKDistanceFormatter;
@protocol _MKPlaceItem;

@interface MUPlaceItemHeaderViewModel
{
    id <_MKPlaceItem> _placeItem;
    MKDistanceFormatter *_distanceFormatter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showNearbyStringForContactPlaceItem;
- (id)transitLabelItems;
- (id)_formattedDistanceString;
- (id)enclosingPlaceAttributedStringWithFont:(id)arg1 labelColor:(id)arg2 tokenColor:(id)arg3;
@property(readonly, nonatomic) _Bool isUserSpecificPlaceItem;
- (_Bool)hasEnclosingPlace;
- (id)_userSpecificPlaceSecondaryName;
- (id)placeSecondaryName;
- (_Bool)hasInitialData;
- (id)initWithPlaceItem:(id)arg1;

@end
