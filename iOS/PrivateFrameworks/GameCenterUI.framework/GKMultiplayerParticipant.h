//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUI/NSCopying-Protocol.h>

@class GKPlayer;

@interface GKMultiplayerParticipant : NSObject <NSCopying>
{
    long long _type;
    long long _status;
    GKPlayer *_player;
    long long _number;
}

@property(nonatomic) long long number; // @synthesize number=_number;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
