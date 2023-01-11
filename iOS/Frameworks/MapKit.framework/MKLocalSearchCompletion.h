//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODirectionIntent, GEOResolvedItem, GEORetainedSearchMetadata, GEOSearchCategory, MKMapItem, NSArray, NSString;
@protocol GEOCompletionItem;

@interface MKLocalSearchCompletion : NSObject
{
    id <GEOCompletionItem> _item;
    NSString *_sourceID;
    NSString *_localizedSectionHeader;
    MKMapItem *_mapItem;
    _Bool _alreadySentFeedback;
    _Bool _shouldDisplayNoResults;
    MKLocalSearchCompletion *_directionIntentOrigin;
    MKLocalSearchCompletion *_directionIntentDestination;
}

@property(retain, nonatomic) MKLocalSearchCompletion *directionIntentDestination; // @synthesize directionIntentDestination=_directionIntentDestination;
@property(retain, nonatomic) MKLocalSearchCompletion *directionIntentOrigin; // @synthesize directionIntentOrigin=_directionIntentOrigin;
@property(readonly, nonatomic, getter=_alreadySentFeedback) _Bool alreadySentFeedback; // @synthesize alreadySentFeedback=_alreadySentFeedback;
@property(copy, nonatomic) NSString *localizedSectionHeader; // @synthesize localizedSectionHeader=_localizedSectionHeader;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
- (void).cxx_destruct;
- (id)iconWithScale:(double)arg1;
- (id)highlightsForLine:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *displayLines;
@property(readonly, nonatomic, getter=_hasDisambiguationRadiusMeters) _Bool hasDisambiguationRadiusMeters;
@property(readonly, nonatomic, getter=_disambiguationRadiusMeters) float disambiguationRadiusMeters;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_type) long long type;
- (void)sendFeedback;
- (id)copyStorage;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) GEOResolvedItem *clientResolved;
@property(readonly, nonatomic) GEOSearchCategory *category;
@property(readonly, nonatomic) MKMapItem *mapItem;
- (id)calloutTitle;
- (id)queryLine;
- (_Bool)getCoordinate:(struct CLLocationCoordinate2D *)arg1;
@property(readonly, nonatomic) NSArray *subtitleHighlightRanges;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSArray *titleHighlightRanges;
@property(readonly, nonatomic) NSString *title;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)initWithGeoCompletionItem:(id)arg1;
@property(readonly, nonatomic) id <GEOCompletionItem> geoCompletionItem;

@end

