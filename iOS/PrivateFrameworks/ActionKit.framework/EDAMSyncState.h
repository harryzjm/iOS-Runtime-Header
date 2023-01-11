//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMClientSyncRateConfig, NSNumber;

@interface EDAMSyncState
{
    NSNumber *_currentTime;
    NSNumber *_fullSyncBefore;
    NSNumber *_updateCount;
    NSNumber *_uploaded;
    NSNumber *_userLastUpdated;
    NSNumber *_userMaxMessageEventId;
    NSNumber *_businessSummaryUpdated;
    NSNumber *_communicationEngineUpdateId;
    NSNumber *_currentDevicesUsed;
    NSNumber *_showChoiceScreen;
    EDAMClientSyncRateConfig *_clientSyncRateConfig;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) EDAMClientSyncRateConfig *clientSyncRateConfig; // @synthesize clientSyncRateConfig=_clientSyncRateConfig;
@property(retain, nonatomic) NSNumber *showChoiceScreen; // @synthesize showChoiceScreen=_showChoiceScreen;
@property(retain, nonatomic) NSNumber *currentDevicesUsed; // @synthesize currentDevicesUsed=_currentDevicesUsed;
@property(retain, nonatomic) NSNumber *communicationEngineUpdateId; // @synthesize communicationEngineUpdateId=_communicationEngineUpdateId;
@property(retain, nonatomic) NSNumber *businessSummaryUpdated; // @synthesize businessSummaryUpdated=_businessSummaryUpdated;
@property(retain, nonatomic) NSNumber *userMaxMessageEventId; // @synthesize userMaxMessageEventId=_userMaxMessageEventId;
@property(retain, nonatomic) NSNumber *userLastUpdated; // @synthesize userLastUpdated=_userLastUpdated;
@property(retain, nonatomic) NSNumber *uploaded; // @synthesize uploaded=_uploaded;
@property(retain, nonatomic) NSNumber *updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) NSNumber *fullSyncBefore; // @synthesize fullSyncBefore=_fullSyncBefore;
@property(retain, nonatomic) NSNumber *currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;

@end
