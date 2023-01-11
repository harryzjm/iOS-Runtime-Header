//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXAction, NSDate, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSUUID;
@protocol NSSecureCoding;

@interface ATXFeedbackSession : NSObject <NSSecureCoding>
{
    NSMutableOrderedSet *_engagedUUIDs;
    NSMutableOrderedSet *_rejectedUUIDs;
    NSMutableOrderedSet *_shownUUIDs;
    unsigned char _consumerSubType;
    NSString *_sessionIdentifier;
    NSUUID *_blendingUICacheUpdateUUID;
    NSDate *_sessionStartDate;
    NSDate *_sessionEndDate;
    NSObject<NSSecureCoding> *_sessionMetadata;
    NSUUID *_partiallyExecutedUUID;
    ATXAction *_partiallyExecutedAction;
    ATXAction *_matchingIntentDonatedAction;
    NSDate *_partiallyExecutedActionStartDate;
    NSDate *_matchingIntentDonationDate;
    NSNumber *_partialEngagementWasCompleteMatch;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *partialEngagementWasCompleteMatch; // @synthesize partialEngagementWasCompleteMatch=_partialEngagementWasCompleteMatch;
@property(readonly, nonatomic) NSDate *matchingIntentDonationDate; // @synthesize matchingIntentDonationDate=_matchingIntentDonationDate;
@property(readonly, nonatomic) NSDate *partiallyExecutedActionStartDate; // @synthesize partiallyExecutedActionStartDate=_partiallyExecutedActionStartDate;
@property(readonly, nonatomic) ATXAction *matchingIntentDonatedAction; // @synthesize matchingIntentDonatedAction=_matchingIntentDonatedAction;
@property(readonly, nonatomic) ATXAction *partiallyExecutedAction; // @synthesize partiallyExecutedAction=_partiallyExecutedAction;
@property(readonly, nonatomic) NSUUID *partiallyExecutedUUID; // @synthesize partiallyExecutedUUID=_partiallyExecutedUUID;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *sessionMetadata; // @synthesize sessionMetadata=_sessionMetadata;
@property(readonly, nonatomic) NSDate *sessionEndDate; // @synthesize sessionEndDate=_sessionEndDate;
@property(readonly, nonatomic) NSDate *sessionStartDate; // @synthesize sessionStartDate=_sessionStartDate;
@property(readonly, nonatomic) unsigned char consumerSubType; // @synthesize consumerSubType=_consumerSubType;
@property(readonly, nonatomic) NSUUID *blendingUICacheUpdateUUID; // @synthesize blendingUICacheUpdateUUID=_blendingUICacheUpdateUUID;
@property(readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (_Bool)isEqualToATXFeedbackSession:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) _Bool demoModeEnabled;
@property(readonly, nonatomic) _Bool developerModeEnabled;
@property(readonly, nonatomic) NSOrderedSet *shownUUIDs;
@property(readonly, nonatomic) NSOrderedSet *rejectedUUIDs;
@property(readonly, nonatomic) NSOrderedSet *engagedUUIDs;
- (unsigned char)uiConsumerSubTypeForFeedback;
- (id)homeScreenSessionMetadata;
- (id)spotlightSessionMetadata;
- (void)markPartiallyExecutedSuggestionAsPartialMatchWithDonatedAction:(id)arg1 donationDate:(id)arg2;
- (void)markPartiallyExecutedSuggestionAsCompleteMatchWithDonatedAction:(id)arg1 donationDate:(id)arg2;
- (void)markPartiallyExecutedSuggestionAsAbandoned;
- (void)updatePartiallyExecutedActionWithProactiveSuggestion:(id)arg1 engagementDate:(id)arg2;
- (void)finalizeWithSessionEndDate:(id)arg1;
- (void)updateSessionMetadata:(id)arg1;
- (void)updateBlendingUICacheUpdateUUIDIfUnset:(id)arg1;
- (void)updateEngagedUUIDs:(id)arg1 rejectedUUIDs:(id)arg2 shownUUIDs:(id)arg3;
- (id)initWithSessionIdentifier:(id)arg1 consumerSubType:(unsigned char)arg2 sessionStartDate:(id)arg3;
- (id)initWithSessionIdentifier:(id)arg1 consumerSubType:(unsigned char)arg2 sessionStartDate:(id)arg3 sessionEndDate:(id)arg4 blendingUICacheUpdateUUID:(id)arg5 engagedUUIDs:(id)arg6 rejectedUUIDs:(id)arg7 shownUUIDs:(id)arg8 sessionMetadata:(id)arg9 partiallyExecutedUUID:(id)arg10 partiallyExecutedAction:(id)arg11 matchingIntentDonatedAction:(id)arg12 partiallyExecutedActionStartDate:(id)arg13 matchingIntentDonationDate:(id)arg14 partialEngagementWasCompleteMatch:(id)arg15;

@end
