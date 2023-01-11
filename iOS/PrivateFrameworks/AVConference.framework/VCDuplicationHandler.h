//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCDuplicationHandler : NSObject
{
    unsigned char _duplicationState;
    unsigned char _duplicationReason;
    _Bool _moreThanOneConnectionAvailable;
    CDStruct_634abacb _localAlertInfo;
    CDStruct_634abacb _remoteAlertInfo;
    _Bool _isRemotePreAzul;
}

@property _Bool isRemotePreAzul; // @synthesize isRemotePreAzul=_isRemotePreAzul;
@property(readonly) unsigned char duplicationReason; // @synthesize duplicationReason=_duplicationReason;
- (_Bool)isDuplicationDueToWRMSuggestion;
- (void)shareLocalInterfacePreferenceWithPeerDuringActiveDuplicationForEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (_Bool)updateDuplicationStateWithAlertInfo:(_Bool)arg1;
- (void)updateDuplicationStateForConnectionArrayUpdatedEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForAlertStateUpdatedEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForTurnOnDuplicationForHandoverEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForTurnOffDuplicationForHandoverEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)stopRemoteDuplicationAndUpdateResult:(CDStruct_7641bd18 *)arg1;
- (void)updateDuplicationStateForRemoteWRMSuggestingWiFiEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForRemoteWRMSuggestingCellularEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForLocalWRMSuggestingWiFiEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForLocalWRMSuggestingCellularEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForReceivingPacketsUpdateEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)updateDuplicationStateForMissingPacketsUpdateEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;
- (void)disableDuplication;
- (void)enableDuplication;
- (CDStruct_7641bd18)handleDuplicationStateUpdateEvent:(CDStruct_9629e118)arg1;
@property(readonly) _Bool isDuplicationPending;
@property(readonly) _Bool isDuplicationEnabled;

@end
