//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/IDSServiceDelegate-Protocol.h>

@class IDSService, MSASAlbum, MSASStateMachine, NSMutableDictionary, NSString;

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate>
{
    MSASStateMachine *_stateMachine;
    MSASAlbum *_album;
    IDSService *_idsService;
    NSMutableDictionary *_sendMessageIdentifierToPhone;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sendMessageIdentifierToPhone; // @synthesize sendMessageIdentifierToPhone=_sendMessageIdentifierToPhone;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) MSASAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) MSASStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2;
- (void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
