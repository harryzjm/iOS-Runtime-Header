//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSBaseSocketPairConnectionDelegate-Protocol.h>
#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class CUTWeakReference, IDSBaseSocketPairConnection, NSArray, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface _IDSGroupSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate>
{
    id _delegateContext;
    id _boostContext;
    NSString *_uniqueID;
    NSString *_accountID;
    NSSet *_destinations;
    NSString *_fromID;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _state;
    long long _transportType;
    unsigned long long _connectionCountHint;
    _Bool _needsToWaitForPreConnectionData;
    _Bool _disallowCellularInterface;
    _Bool _disallowWifiInterface;
    unsigned long long _preferredAddressFamily;
    _Bool _preferCellularForCallSetup;
    NSString *_clientUUID;
    _Bool _alwaysSkipSelf;
    unsigned int _sessionEndedReason;
    NSMutableDictionary *_preferences;
    NSMutableDictionary *_sessionConfig;
    _Bool _useConfServer;
    NSString *_stableGroupID;
    NSString *_groupID;
    NSDictionary *_participantInfo;
    struct cfs_client_s *_cfs_client;
    int _cfs_requestID;
    _Bool _cfsJoinReply;
    _Bool _didJoinCallback;
    _Bool _cfsLeaveReply;
    _Bool _didLeaveCallback;
    NSArray *_existingParticipants;
    NSError *_joinLeaveError;
    NSNumber *_qrReason;
    NSNumber *_previousError;
}

@property(retain, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;
- (void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(_Bool)arg3;
- (void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2;
- (void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2;
- (void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;
- (void)sessionDidJoinGroup:(id)arg1 participantUpdateDictionary:(id)arg2 error:(id)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantInfo:(id)arg2 error:(id)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantsInfo:(id)arg2 error:(id)arg3;
- (void)groupSessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)groupSessionDidTerminate:(id)arg1;
- (void)session:(id)arg1 didReceiveReport:(id)arg2;
- (void)requestActiveParticipants;
@property(readonly, nonatomic) unsigned int sessionEndedReason;
- (void)setPreferences:(id)arg1;
- (void)leaveGroupSession;
- (void)joinWithOptions:(id)arg1;
- (void)joinGroupSession;
- (void)setParticipantInfo:(id)arg1;
- (void)updateParticipantData:(id)arg1 withContext:(id)arg2;
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(_Bool)arg3;
- (void)_cleanupSocketPairConnections;
@property(readonly, nonatomic) NSString *uniqueID;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_broadcastNewSessionToDaemon;
- (void)daemonDisconnected;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

