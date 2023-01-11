//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, WLKBasicContentMetadata, WLKChannelDetails, WLKComingSoonInfo, WLKLocale, WLKOfferListing, WLKPlayEvent, WLKStoreOffer;

@interface WLKPlayable : NSObject
{
    _Bool _entitled;
    _Bool _entitledAnywhere;
    _Bool _appInstalled;
    _Bool _itunes;
    _Bool _subtitled;
    NSString *_playableID;
    NSString *_canonicalID;
    NSString *_channelID;
    WLKChannelDetails *_channelDetails;
    NSString *_contentID;
    long long _contentSourceType;
    long long _airingType;
    WLKBasicContentMetadata *_content;
    NSArray *_adLocales;
    NSArray *_audioTrackLocales;
    NSArray *_audioTrackFormats;
    NSArray *_closedCaptionLocales;
    NSArray *_SDHLocales;
    NSNumber *_duration;
    WLKLocale *_primaryLocale;
    NSString *_externalID;
    NSString *_externalServiceID;
    NSArray *_subtitledLocales;
    NSString *_videoQuality;
    NSString *_videoColorRange;
    NSDate *_endAirTime;
    NSDate *_startAirTime;
    WLKPlayEvent *_playEvent;
    NSURL *_tvAppDeeplinkURL;
    NSDictionary *_punchoutUrls;
    WLKComingSoonInfo *_comingSoonInfo;
    NSArray *_movieClips;
    NSArray *_subscriptionOffers;
    WLKOfferListing *_offerListing;
}

+ (id)playablesWithDictionaries:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) WLKOfferListing *offerListing; // @synthesize offerListing=_offerListing;
@property(readonly, copy, nonatomic) NSArray *subscriptionOffers; // @synthesize subscriptionOffers=_subscriptionOffers;
@property(readonly, copy, nonatomic) NSArray *movieClips; // @synthesize movieClips=_movieClips;
@property(readonly, copy, nonatomic) WLKComingSoonInfo *comingSoonInfo; // @synthesize comingSoonInfo=_comingSoonInfo;
@property(readonly, copy, nonatomic) NSDictionary *punchoutUrls; // @synthesize punchoutUrls=_punchoutUrls;
@property(readonly, copy, nonatomic) NSURL *tvAppDeeplinkURL; // @synthesize tvAppDeeplinkURL=_tvAppDeeplinkURL;
@property(readonly, nonatomic) WLKPlayEvent *playEvent; // @synthesize playEvent=_playEvent;
@property(readonly, copy, nonatomic) NSDate *startAirTime; // @synthesize startAirTime=_startAirTime;
@property(readonly, copy, nonatomic) NSDate *endAirTime; // @synthesize endAirTime=_endAirTime;
@property(readonly, copy, nonatomic) NSString *videoColorRange; // @synthesize videoColorRange=_videoColorRange;
@property(readonly, copy, nonatomic) NSString *videoQuality; // @synthesize videoQuality=_videoQuality;
@property(readonly, copy, nonatomic) NSArray *subtitledLocales; // @synthesize subtitledLocales=_subtitledLocales;
@property(readonly, nonatomic, getter=isSubtitled) _Bool subtitled; // @synthesize subtitled=_subtitled;
@property(readonly, copy, nonatomic) NSString *externalServiceID; // @synthesize externalServiceID=_externalServiceID;
@property(readonly, copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, copy, nonatomic) WLKLocale *primaryLocale; // @synthesize primaryLocale=_primaryLocale;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSArray *SDHLocales; // @synthesize SDHLocales=_SDHLocales;
@property(readonly, copy, nonatomic) NSArray *closedCaptionLocales; // @synthesize closedCaptionLocales=_closedCaptionLocales;
@property(readonly, copy, nonatomic) NSArray *audioTrackFormats; // @synthesize audioTrackFormats=_audioTrackFormats;
@property(readonly, copy, nonatomic) NSArray *audioTrackLocales; // @synthesize audioTrackLocales=_audioTrackLocales;
@property(readonly, copy, nonatomic) NSArray *adLocales; // @synthesize adLocales=_adLocales;
@property(readonly, nonatomic) WLKBasicContentMetadata *content; // @synthesize content=_content;
@property(readonly, nonatomic) long long airingType; // @synthesize airingType=_airingType;
@property(readonly, nonatomic, getter=isiTunes) _Bool itunes; // @synthesize itunes=_itunes;
@property(readonly, nonatomic, getter=isAppInstalled) _Bool appInstalled; // @synthesize appInstalled=_appInstalled;
@property(readonly, nonatomic, getter=isEntitledAnywhere) _Bool entitledAnywhere; // @synthesize entitledAnywhere=_entitledAnywhere;
@property(readonly, nonatomic, getter=isEntitled) _Bool entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) long long contentSourceType; // @synthesize contentSourceType=_contentSourceType;
@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, copy, nonatomic) WLKChannelDetails *channelDetails; // @synthesize channelDetails=_channelDetails;
@property(readonly, copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(readonly, copy, nonatomic) NSString *playableID; // @synthesize playableID=_playableID;
- (id)_localesArrayForDictionary:(id)arg1 andKey:(id)arg2;
@property(readonly, copy, nonatomic) WLKStoreOffer *bestStoreSubscriptionOffer;
@property(readonly, copy, nonatomic) WLKStoreOffer *bestStoreRentalOffer;
@property(readonly, copy, nonatomic) WLKStoreOffer *bestStoreBuyOffer;
- (id)openPunchoutURL;
- (id)playPunchoutURL;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *storeOffers;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end
