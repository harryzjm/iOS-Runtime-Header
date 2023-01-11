//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKTournamentParticipantRequestInternal, NSArray;

@interface GKTournamentParticipantRequest : NSObject <NSSecureCoding>
{
    GKTournamentParticipantRequestInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
@property(retain) GKTournamentParticipantRequestInternal *internal; // @synthesize internal=_internal;
- (void).cxx_destruct;
@property(nonatomic) struct _NSRange range; // @dynamic range;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool friendsOnly; // @dynamic friendsOnly;
@property(retain, nonatomic) NSArray *participantStates; // @dynamic participantStates;

@end
