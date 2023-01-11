//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TUHandle;

@interface TUMutableConversationParticipant
{
}

+ (_Bool)supportsSecureCoding;

// Remaining properties
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @dynamic audioEnabled;
@property(copy, nonatomic) TUHandle *handle; // @dynamic handle;
@property(nonatomic) unsigned long long identifier; // @dynamic identifier;
@property(nonatomic, getter=isMuted) _Bool muted; // @dynamic muted;
@property(nonatomic) long long streamToken; // @dynamic streamToken;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @dynamic videoEnabled;

@end
