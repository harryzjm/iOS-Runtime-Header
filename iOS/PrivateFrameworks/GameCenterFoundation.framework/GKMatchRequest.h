//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKMatchRequestInternal, NSArray, NSString;

@interface GKMatchRequest : NSObject
{
    GKMatchRequestInternal *_internal;
    CDUnknownBlockType _inviteeResponseHandler;
    CDUnknownBlockType _recipientResponseHandler;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1;
@property(copy) CDUnknownBlockType recipientResponseHandler; // @synthesize recipientResponseHandler=_recipientResponseHandler;
@property(copy) CDUnknownBlockType inviteeResponseHandler; // @synthesize inviteeResponseHandler=_inviteeResponseHandler;
@property(retain) GKMatchRequestInternal *internal; // @synthesize internal=_internal;
- (void)loadRecipientsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(retain) NSArray *playersToInvite; // @dynamic playersToInvite;
@property(retain) NSArray *recipients; // @dynamic recipients;
- (id)guestPlayers;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)isRecipientCountValid;
- (void)removeLocalPlayerFromPlayersToInvite;
- (void)ensureValidityHosted:(_Bool)arg1;
- (_Bool)isTurnBasedValid;
- (_Bool)isValidForHosted:(_Bool)arg1;
- (_Bool)isValidWithMax:(unsigned long long)arg1;
- (_Bool)defaultNumberOfPlayersIsValid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;

// Remaining properties
@property unsigned long long defaultNumberOfPlayers; // @dynamic defaultNumberOfPlayers;
@property(copy) NSString *inviteMessage; // @dynamic inviteMessage;
@property unsigned long long maxPlayers; // @dynamic maxPlayers;
@property unsigned long long minPlayers; // @dynamic minPlayers;
@property unsigned int playerAttributes; // @dynamic playerAttributes;
@property unsigned long long playerGroup; // @dynamic playerGroup;

@end

