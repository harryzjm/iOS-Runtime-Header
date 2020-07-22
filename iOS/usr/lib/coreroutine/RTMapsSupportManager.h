//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSPFavoritesContainer, MSPHistoryContainer;
@protocol OS_dispatch_queue;

@interface RTMapsSupportManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    MSPFavoritesContainer *_favoritesContainer;
    MSPHistoryContainer *_historyContainer;
}

+ (id)mapItemFromFavorite:(id)arg1;
+ (id)locationFromFavorite:(id)arg1;
+ (id)mapItemFromHistoryEntry:(id)arg1;
+ (id)locationFromHistoryEntry:(id)arg1;
@property(retain, nonatomic) MSPHistoryContainer *historyContainer; // @synthesize historyContainer=_historyContainer;
@property(retain, nonatomic) MSPFavoritesContainer *favoritesContainer; // @synthesize favoritesContainer=_favoritesContainer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)fetchHistoryEntryRoutesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchHistoryEntryPlaceDisplaysWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchFavoritePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchHistoryEntryPlaceDisplayMapItemsWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchHistoryEntryPlaceDisplayMapItemsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchHistoryEntryRouteMapItemsWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchHistoryEntryRouteMapItemsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchFavoritePlaceMapItemsWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchFavoritePlaceMapItemsWithHandler:(CDUnknownBlockType)arg1;
- (void)clearParkedCarBulletin;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)showParkedCarBulletinForEvent:(id)arg1;
- (void)clearTrafficConditionsBulletin;
- (void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
- (void)fetchHistoryEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchHistoryEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchFavoritePlacesWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchFavoritesWithHandler:(CDUnknownBlockType)arg1;
- (void)_fetchFavoritesWithHandler:(CDUnknownBlockType)arg1;
- (id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryPlaceDisplayFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 historyEntries:(id)arg4;
- (id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryRouteFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 historyEntries:(id)arg4;
- (id)_getNextPredictedLocationsOfInterestBackedByFavoritePlaceFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 favorites:(id)arg4;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end
