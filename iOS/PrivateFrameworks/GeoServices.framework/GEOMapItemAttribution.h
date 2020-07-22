//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject
{
    GEOSearchAttributionInfo *_info;
    NSArray *_attributionURLs;
    NSString *_yelpID;
    NSString *_poiID;
}

@property(readonly, nonatomic) NSArray *attributionURLs; // @synthesize attributionURLs=_attributionURLs;
- (void).cxx_destruct;
- (id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(_Bool)arg3;
@property(readonly, nonatomic) _Bool requiresAttributionInCallout;
- (id)providerSnippetLogoPathForScale:(double)arg1;
- (id)providerLogoPathForScale:(double)arg1;
@property(readonly, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) NSString *providerID;
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) _Bool shouldOpenInAppStore;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3;
- (id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2;

@end

