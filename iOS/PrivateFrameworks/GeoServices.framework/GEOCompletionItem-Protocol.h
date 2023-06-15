//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOCollectionResult, GEODirectionIntent, GEOMapItemIdentifier, GEOPublisherResult, GEOResolvedItem, GEORetainedSearchMetadata, GEOSearchCategory, GEOServerResultScoreMetadata, GEOStyleAttributes, NSArray, NSData, NSString;
@protocol GEOMapItem;

@protocol GEOCompletionItem <NSObject>
@property(readonly, nonatomic) _Bool supportsOfflineDownload;
@property(readonly, nonatomic) GEOStyleAttributes *iconStyleAttributes;
@property(readonly, nonatomic) NSArray *resultRefinements;
@property(readonly, nonatomic) GEOPublisherResult *publisherResult;
@property(readonly, nonatomic) GEOCollectionResult *collectionResult;
@property(readonly, nonatomic) NSString *queryAcceleratorCompletionString;
@property(readonly, nonatomic) _Bool hasQueryAcceleratorAffordanceEnabled;
@property(readonly, nonatomic) float disambiguationRadiusMeters;
@property(readonly, nonatomic) _Bool hasDisambiguationRadiusMeters;
@property(readonly, nonatomic) int placeType;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) NSData *entryMetadata;
@property(readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property(readonly, nonatomic) long long autocompleteCellType;
@property(readonly, nonatomic) long long entryTapBehavior;
@property(readonly, nonatomic) long long sortPriority;
@property(readonly, nonatomic) _Bool hasSortPriority;
@property(readonly, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) GEOResolvedItem *clientResolved;
@property(readonly, nonatomic) GEOSearchCategory *searchCategory;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
@property(readonly, nonatomic) NSArray *displayLines;
- (void)sendFeedback;
- (_Bool)getCoordinate:(CDStruct_c3b9c2ee *)arg1;
- (NSString *)calloutTitle;
- (NSString *)queryLine;
- (NSArray *)highlightsForLine:(unsigned long long)arg1;
@end

