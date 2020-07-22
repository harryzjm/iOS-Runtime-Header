//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAVItem.h>

@class NSData, NSNumber, NSString;
@protocol MPCReportingIdentityPropertiesLoading;

@interface MPAVItem (MPCReportingAdditions)
@property(readonly, copy, nonatomic) NSData *mpcReporting_trackInfo;
@property(readonly, copy, nonatomic) NSNumber *mpcReporting_siriInitiated;
@property(readonly, nonatomic) _Bool mpcReporting_shouldUseRelativeTimePositions;
@property(readonly, nonatomic) _Bool mpcReporting_shouldReportPlayEventsToStore;
@property(readonly, copy, nonatomic) NSString *mpcReporting_requestingBundleVersion;
@property(readonly, copy, nonatomic) NSString *mpcReporting_requestingBundleIdentifier;
@property(readonly, copy, nonatomic) NSNumber *mpcReporting_privateListeningEnabled;
@property(readonly, copy, nonatomic) NSData *mpcReporting_jingleTimedMetadata;
@property(readonly, nonatomic) unsigned long long mpcReporting_itemType;
@property(readonly, copy, nonatomic) NSString *mpcReporting_householdID;
@property(readonly, nonatomic) _Bool mpcReporting_isValidReportingItem;
@property(readonly, nonatomic) long long mpcReporting_equivalencySourceAdamID;
@property(readonly, nonatomic) id <MPCReportingIdentityPropertiesLoading> mpcReporting_identityPropertiesLoader;
@end

