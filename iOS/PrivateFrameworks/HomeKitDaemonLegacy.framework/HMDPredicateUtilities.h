//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSString;

__attribute__((visibility("hidden")))
@interface HMDPredicateUtilities : HMFObject
{
    unsigned long long _cameraSignificantEvent;
    unsigned long long _personFamiliarityOptions;
    unsigned long long _audioAnalysisEventNotificationOptions;
    HMDHome *_home;
    NSString *_logIdentifier;
}

+ (id)unarchiveFromData:(id)arg1 error:(id *)arg2;
+ (id)filteredPredicate:(id)arg1 withUserUUIDs:(id)arg2;
+ (id)logCategory;
+ (id)encodePredicate:(id)arg1 error:(id *)arg2;
+ (id)decodePredicateFromData:(id)arg1 error:(id *)arg2;
+ (id)predicateCodingClasses;
- (void).cxx_destruct;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property __weak HMDHome *home; // @synthesize home=_home;
@property unsigned long long audioAnalysisEventNotificationOptions; // @synthesize audioAnalysisEventNotificationOptions=_audioAnalysisEventNotificationOptions;
@property unsigned long long personFamiliarityOptions; // @synthesize personFamiliarityOptions=_personFamiliarityOptions;
@property unsigned long long cameraSignificantEvent; // @synthesize cameraSignificantEvent=_cameraSignificantEvent;
- (void)fillAnalyticsData:(id)arg1 forPredicate:(id)arg2;
- (id)generateAnalyticsData:(id)arg1;
- (_Bool)containsPresenceEvents:(id)arg1;
- (id)rewritePredicate:(id)arg1 forDaemon:(_Bool)arg2 message:(id)arg3;
- (id)rewritePredicateForDaemon:(id)arg1 message:(id)arg2;
- (id)rewritePredicateForClient:(id)arg1;
- (id)dateTodayMatchingComponents:(id)arg1;
- (id)addDeltaToNow:(id)arg1;
- (id)rewriteNowAdjustedForHomeTimeZone:(id)arg1;
- (id)_updatePredicate:(id)arg1 staleCharacteristicInCurrentPredicate:(_Bool *)arg2 accessory:(id)arg3 conditionModified:(_Bool *)arg4;
- (id)predicateWithoutStaleCharacteristicsFromPredicate:(id)arg1 accessory:(id)arg2 conditionModified:(_Bool *)arg3;
- (id)updatePredicate:(id)arg1 removedUser:(id)arg2 conditionModified:(_Bool *)arg3;
- (id)updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id *)arg2 conditionModified:(_Bool *)arg3 removedCharacteristic:(id)arg4 underService:(id)arg5 underAccessory:(id)arg6;
- (id)comparePresence:(id)arg1 operatorType:(id)arg2 homePresence:(id)arg3;
- (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
- (id)rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id *)arg2 characteristicsToRead:(id)arg3 homePresence:(id)arg4;
- (id)sunset;
- (id)sunrise;
- (id)initWithHome:(id)arg1 logIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

