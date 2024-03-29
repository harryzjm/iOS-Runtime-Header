//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRGroupSessionToken, MRUserIdentity, NSData, NSSet, NSString;
@protocol MRGroupSessionDelegate, MRGroupSessionParticipant;

@protocol MRGroupSession <NSObject>
@property(readonly, nonatomic) __weak id <MRGroupSessionDelegate> delegate;
@property(readonly, nonatomic) NSData *synchronizedMetadata;
@property(readonly, nonatomic) MRGroupSessionToken *joinToken;
@property(readonly, nonatomic) id <MRGroupSessionParticipant> host;
@property(readonly, nonatomic) unsigned char routeType;
@property(readonly, nonatomic) NSString *localizedSessionName;
@property(readonly, nonatomic) NSSet *members;
@property(readonly, nonatomic) NSSet *pendingParticipants;
@property(readonly, nonatomic) NSSet *participants;
@property(readonly, nonatomic) _Bool isLocalSession;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) NSString *identifier;
- (void)removeAllParticipantsWithCompletion:(void (^)(NSError *))arg1;
- (void)removeParticipant:(id <MRGroupSessionParticipant>)arg1 completion:(void (^)(NSError *))arg2;
- (void)denyPendingParticipant:(id <MRGroupSessionParticipant>)arg1 completion:(void (^)(NSError *))arg2;
- (void)approvePendingParticipant:(id <MRGroupSessionParticipant>)arg1 completion:(void (^)(NSError *))arg2;
- (id <MRGroupSessionParticipant>)pendingParticipantForIdentifier:(NSString *)arg1;
- (id <MRGroupSessionParticipant>)participantForIdentifier:(NSString *)arg1;
- (MRUserIdentity *)memberForIdentifier:(NSString *)arg1;
@end

