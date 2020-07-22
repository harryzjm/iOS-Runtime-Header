//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEORPCorrectedSearch, GEORPPlaceInfo, GEORelatedSearchSuggestion, NSArray, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol MKMapServiceTicket <NSObject>
@property(readonly, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) double requestResponseTime;
@property(readonly, nonatomic) _Bool showDymSuggestionCloseButton;
@property(readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _Bool shouldEnableRedoSearch;
@property(readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) NSArray *browseCategories;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic, getter=isChainResultSet) _Bool chainResultSet;
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
@property(readonly, nonatomic) NSArray *refinedMapItems;
@property(readonly, nonatomic) NSArray *exactMapItems;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)applyToPlaceInfo:(GEORPPlaceInfo *)arg1;
- (void)applyToCorrectedSearch:(GEORPCorrectedSearch *)arg1;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)cancel;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 timeout:(long long)arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithRefinedHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
- (void)submitWithHandler:(void (^)(NSArray *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end

