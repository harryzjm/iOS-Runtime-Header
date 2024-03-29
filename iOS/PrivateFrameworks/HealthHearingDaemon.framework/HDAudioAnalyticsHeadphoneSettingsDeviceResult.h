//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface HDAudioAnalyticsHeadphoneSettingsDeviceResult : NSObject
{
    NSNumber *_hasHAENRequired;
    NSNumber *_hasHAENEnabled;
    NSNumber *_hasMeasureLevelsEnabled;
    NSNumber *_hasIncludeOtherHeadphonesEnabled;
    NSNumber *_haeRetention;
}

+ (id)optInSettingsWithHasHAENEnabled:(_Bool)arg1 hasMeasureLevelsEnabled:(_Bool)arg2 hasIncludeOtherHeadphonesEnabled:(_Bool)arg3;
+ (id)requiredSettingsWithSaveForEightDays:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *haeRetention; // @synthesize haeRetention=_haeRetention;
@property(readonly, nonatomic) NSNumber *hasIncludeOtherHeadphonesEnabled; // @synthesize hasIncludeOtherHeadphonesEnabled=_hasIncludeOtherHeadphonesEnabled;
@property(readonly, nonatomic) NSNumber *hasMeasureLevelsEnabled; // @synthesize hasMeasureLevelsEnabled=_hasMeasureLevelsEnabled;
@property(readonly, nonatomic) NSNumber *hasHAENEnabled; // @synthesize hasHAENEnabled=_hasHAENEnabled;
@property(readonly, nonatomic) NSNumber *hasHAENRequired; // @synthesize hasHAENRequired=_hasHAENRequired;
- (id)initWithHAENRequired:(_Bool)arg1 hasHAENEnabled:(id)arg2 hasMeasureLevelsEnabled:(id)arg3 hasIncludeOtherHeadphonesEnabled:(id)arg4 haeRetention:(id)arg5;

@end

