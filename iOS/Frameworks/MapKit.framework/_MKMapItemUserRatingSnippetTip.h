//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapItemProviderRatingSnippet-Protocol.h>

@class GEOMapItemTip, MKMapItem, NSDate, NSString, NSURL;
@protocol GEOMapItemReview;

__attribute__((visibility("hidden")))
@interface _MKMapItemUserRatingSnippetTip : NSObject <MKMapItemProviderRatingSnippet>
{
    MKMapItem *_mapItem;
    GEOMapItemTip *_tip;
}

- (void).cxx_destruct;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=_date) NSDate *date;
@property(readonly, nonatomic, getter=_geoMapItemTIp) GEOMapItemTip *geoMapItemTip;
@property(readonly, nonatomic, getter=_reviewerImageURL) NSURL *reviewerImageURL;
@property(readonly, nonatomic, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property(readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property(readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property(readonly, nonatomic, getter=_geoReview) id <GEOMapItemReview> geoReview;
@property(readonly, nonatomic, getter=_score) double score;
@property(readonly, nonatomic, getter=_maxScore) double maxScore;
@property(readonly, nonatomic, getter=_normalizedScore) double normalizedScore;
- (id)initWithMapItem:(id)arg1 review:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

