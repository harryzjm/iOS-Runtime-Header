//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADSingleton.h>

@class ADClientSettingsResponse, NSArray, NSString, NSURL;

@interface ADSearchAdsSettings : ADSingleton
{
    _Bool _isTest;
    _Bool _isBaseline;
    _Bool _isCustomTemplate;
    _Bool _isRequestedImage;
    _Bool _isRequestedRating;
    NSURL *_defaultToroServerURL;
    NSURL *_defaultAdTargetingServerURL;
    NSString *_algoID;
    NSArray *_userKeyboards;
    double _requestedLocationAccuracy;
    double _locationGridSpacing;
    NSString *_requestedText;
    NSString *_requestedIcon;
    NSString *_templateType;
    double _reverseGeolocationRefreshThresholdInMeters;
    double _clickExpirationThresholdInSeconds;
    double _frequencyCapExpirationInSeconds;
    unsigned long long _maxFrequencyCapElements;
    unsigned long long _maxClickCapElements;
    ADClientSettingsResponse *_clientSettings;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ADClientSettingsResponse *clientSettings; // @synthesize clientSettings=_clientSettings;
@property(nonatomic) unsigned long long maxClickCapElements; // @synthesize maxClickCapElements=_maxClickCapElements;
@property(nonatomic) unsigned long long maxFrequencyCapElements; // @synthesize maxFrequencyCapElements=_maxFrequencyCapElements;
@property(nonatomic) double frequencyCapExpirationInSeconds; // @synthesize frequencyCapExpirationInSeconds=_frequencyCapExpirationInSeconds;
@property(nonatomic) double clickExpirationThresholdInSeconds; // @synthesize clickExpirationThresholdInSeconds=_clickExpirationThresholdInSeconds;
@property(nonatomic) double reverseGeolocationRefreshThresholdInMeters; // @synthesize reverseGeolocationRefreshThresholdInMeters=_reverseGeolocationRefreshThresholdInMeters;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *requestedIcon; // @synthesize requestedIcon=_requestedIcon;
@property(retain, nonatomic) NSString *requestedText; // @synthesize requestedText=_requestedText;
@property(nonatomic) _Bool isRequestedRating; // @synthesize isRequestedRating=_isRequestedRating;
@property(nonatomic) _Bool isRequestedImage; // @synthesize isRequestedImage=_isRequestedImage;
@property(nonatomic) _Bool isCustomTemplate; // @synthesize isCustomTemplate=_isCustomTemplate;
@property(nonatomic) _Bool isBaseline; // @synthesize isBaseline=_isBaseline;
@property(nonatomic) _Bool isTest; // @synthesize isTest=_isTest;
@property(nonatomic) double locationGridSpacing; // @synthesize locationGridSpacing=_locationGridSpacing;
@property(nonatomic) double requestedLocationAccuracy; // @synthesize requestedLocationAccuracy=_requestedLocationAccuracy;
@property(retain, nonatomic) NSArray *userKeyboards; // @synthesize userKeyboards=_userKeyboards;
@property(retain, nonatomic) NSString *algoID; // @synthesize algoID=_algoID;
@property(retain, nonatomic) NSURL *defaultAdTargetingServerURL; // @synthesize defaultAdTargetingServerURL=_defaultAdTargetingServerURL;
@property(retain, nonatomic) NSURL *defaultToroServerURL; // @synthesize defaultToroServerURL=_defaultToroServerURL;
- (void).cxx_destruct;
- (void)overrideRevGeoThreshold:(double)arg1;
- (void)overrideMaxToroClickElements:(unsigned long long)arg1;
- (void)overrideToroClickExpiration:(double)arg1;
- (void)overrideMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)overrideFrequencyCapExpiration:(double)arg1;
- (void)checkDefaultsAndSetInternalSettingsOverrides;
- (void)applyClientSettings;
- (void)refreshClientSettings:(CDUnknownBlockType)arg1;
- (void)restoreClientSettings;
- (void)refresh;
- (double)clientSettingsExpirationDate;
- (void)expireClientSettings;
- (id)init;

@end

