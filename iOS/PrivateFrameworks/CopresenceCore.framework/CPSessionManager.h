//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol CPSessionManagerDelegate;

@interface CPSessionManager : NSObject
{
    NSString *_selfUserCreatedSessionID;
    NSString *_activeSessionID;
    NSMutableDictionary *_sessions;
    NSString *_selfAccountID;
    id <CPSessionManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CPSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *selfAccountID; // @synthesize selfAccountID=_selfAccountID;
- (void)_attemptGarbageCollectSession:(id)arg1;
- (void)_applySessionMemberStateUpdate:(id)arg1 accountID:(id)arg2 state:(unsigned char)arg3 checkGC:(_Bool)arg4;
- (id)_simpleDescription;
- (id)activeSession;
- (id)sessionInviteFor:(id)arg1;
- (id)listReceivedSessionInvites;
- (void)applySessionMemberStateUpdate:(id)arg1 accountID:(id)arg2 state:(unsigned char)arg3;
- (void)receivedInviteForSession:(id)arg1 invitedByAccountID:(id)arg2 withInviteeAccountIDs:(id)arg3;
- (void)selfSentInvitesFor:(id)arg1 toInviteeAccountIDs:(id)arg2;
- (void)selfAcceptedSession:(id)arg1;
- (void)selfLeftSession:(id)arg1;
- (id)selfCreatedSession:(id)arg1 inviteeAccountIDs:(id)arg2;
- (id)initWithAccountID:(id)arg1;

@end
