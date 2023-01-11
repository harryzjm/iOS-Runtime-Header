//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface BLTSectionConfigurationItem : NSObject
{
    _Bool _optOutOfCoordination;
    _Bool _optOutOfAttachmentTransmission;
    _Bool _alwaysSyncSettings;
    _Bool _alwaysAlert;
    _Bool _optOutOfWaitForUserIdle;
    _Bool _applyWhitelistToChildSections;
    _Bool _optOutOfNotificationTuning;
    _Bool _hasLegacyMapInUserInfo;
    _Bool _hasLegacyMapInContext;
    _Bool _optOutOfSubtitleRemovalForOlderWatches;
    NSArray *_whitelistedSubtypes;
    NSArray *_blacklistedCategories;
    NSNumber *_watchVersionThatUsesUserInfoForContext;
    NSArray *_additionalBridgeSectionIDs;
}

@property(nonatomic) _Bool optOutOfSubtitleRemovalForOlderWatches; // @synthesize optOutOfSubtitleRemovalForOlderWatches=_optOutOfSubtitleRemovalForOlderWatches;
@property(retain, nonatomic) NSArray *additionalBridgeSectionIDs; // @synthesize additionalBridgeSectionIDs=_additionalBridgeSectionIDs;
@property(retain, nonatomic) NSNumber *watchVersionThatUsesUserInfoForContext; // @synthesize watchVersionThatUsesUserInfoForContext=_watchVersionThatUsesUserInfoForContext;
@property(nonatomic) _Bool hasLegacyMapInContext; // @synthesize hasLegacyMapInContext=_hasLegacyMapInContext;
@property(nonatomic) _Bool hasLegacyMapInUserInfo; // @synthesize hasLegacyMapInUserInfo=_hasLegacyMapInUserInfo;
@property(nonatomic) _Bool optOutOfNotificationTuning; // @synthesize optOutOfNotificationTuning=_optOutOfNotificationTuning;
@property(nonatomic) _Bool applyWhitelistToChildSections; // @synthesize applyWhitelistToChildSections=_applyWhitelistToChildSections;
@property(nonatomic) _Bool optOutOfWaitForUserIdle; // @synthesize optOutOfWaitForUserIdle=_optOutOfWaitForUserIdle;
@property(nonatomic) _Bool alwaysAlert; // @synthesize alwaysAlert=_alwaysAlert;
@property(retain, nonatomic) NSArray *blacklistedCategories; // @synthesize blacklistedCategories=_blacklistedCategories;
@property(retain, nonatomic) NSArray *whitelistedSubtypes; // @synthesize whitelistedSubtypes=_whitelistedSubtypes;
@property(nonatomic) _Bool alwaysSyncSettings; // @synthesize alwaysSyncSettings=_alwaysSyncSettings;
@property(nonatomic) _Bool optOutOfAttachmentTransmission; // @synthesize optOutOfAttachmentTransmission=_optOutOfAttachmentTransmission;
@property(nonatomic) _Bool optOutOfCoordination; // @synthesize optOutOfCoordination=_optOutOfCoordination;
- (void).cxx_destruct;
- (_Bool)optOutOfCoordinationWithSubtype:(long long)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

