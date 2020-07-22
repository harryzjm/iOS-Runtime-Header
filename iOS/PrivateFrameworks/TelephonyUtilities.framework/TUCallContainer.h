//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallContainer-Protocol.h>
#import <TelephonyUtilities/TUCallContainerPrivate-Protocol.h>

@class NSArray, NSString, TUCall;

@interface TUCallContainer : NSObject <TUCallContainerPrivate, TUCallContainer>
{
    NSArray *_calls;
}

@property(copy, nonatomic) NSArray *calls; // @synthesize calls=_calls;
- (void).cxx_destruct;
- (id)_callGroupsFromCalls:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *callGroupsOnDefaultPairedDevice;
@property(readonly, copy, nonatomic) NSArray *currentCallGroups;
@property(readonly, nonatomic) _Bool existingCallsHaveMultipleProviders;
- (_Bool)allCallsAreOfService:(int)arg1;
@property(readonly, nonatomic) _Bool anyCallIsEndpointOnCurrentDevice;
@property(readonly, nonatomic) _Bool anyCallIsHostedOnCurrentDevice;
@property(readonly, nonatomic) _Bool hasCurrentVideoCalls;
@property(readonly, nonatomic) _Bool hasCurrentAudioCalls;
@property(readonly, nonatomic) _Bool hasCurrentCalls;
- (_Bool)allCallsPassTest:(CDUnknownBlockType)arg1;
- (_Bool)anyCallPassesTest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long callCountOnDefaultPairedDevice;
@property(readonly, nonatomic) unsigned long long currentAudioAndVideoCallCount;
@property(readonly, nonatomic) unsigned long long currentVideoCallCount;
@property(readonly, nonatomic) unsigned long long currentCallCount;
- (unsigned long long)countOfCallsPassingTest:(CDUnknownBlockType)arg1;
- (id)displayedCallFromCalls:(id)arg1;
@property(readonly, retain, nonatomic) TUCall *frontmostAudioOrVideoCall;
@property(readonly, nonatomic) TUCall *frontmostCall;
@property(readonly, nonatomic) TUCall *conferenceCall;
@property(readonly, nonatomic) TUCall *displayedCall;
- (id)callWithCallUUID:(id)arg1;
- (id)callWithUniqueProxyIdentifier:(id)arg1;
- (id)audioOrVideoCallWithStatus:(int)arg1;
- (id)videoCallWithStatus:(int)arg1;
- (id)callWithStatus:(int)arg1;
@property(readonly, nonatomic) TUCall *currentVideoCall;
@property(readonly, nonatomic) TUCall *activeVideoCall;
@property(readonly, nonatomic) TUCall *incomingVideoCall;
@property(readonly, nonatomic) TUCall *incomingCall;
- (id)callPassingTest:(CDUnknownBlockType)arg1 sortedUsingComparator:(CDUnknownBlockType)arg2;
- (id)callPassingTest:(CDUnknownBlockType)arg1 withOptions:(unsigned long long)arg2;
- (id)callPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *_allCalls;
- (id)callsWithGroupUUID:(id)arg1;
- (id)audioAndVideoCallsWithStatus:(int)arg1;
- (id)callsWithStatus:(int)arg1;
@property(readonly, copy, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property(readonly, copy, nonatomic) NSArray *callsHostedOrAnEndpointElsewhere;
@property(readonly, copy, nonatomic) NSArray *callsWithAnEndpointElsewhere;
@property(readonly, copy, nonatomic) NSArray *callsHostedElsewhere;
@property(readonly, copy, nonatomic) NSArray *conferenceParticipantCalls;
@property(readonly, copy, nonatomic) NSArray *displayedCalls;
@property(readonly, copy, nonatomic) NSArray *incomingCalls;
@property(readonly, copy, nonatomic) NSArray *currentAudioAndVideoCalls;
@property(readonly, copy, nonatomic) NSArray *currentVideoCalls;
@property(readonly, copy, nonatomic) NSArray *currentCalls;
- (id)callsPassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateCallsWithOptions:(unsigned long long)arg1 invokingBlock:(CDUnknownBlockType)arg2 forCallsPassingTest:(CDUnknownBlockType)arg3;
- (void)enumerateCallsInvokingBlock:(CDUnknownBlockType)arg1 forCallsPassingTest:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithCalls:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

