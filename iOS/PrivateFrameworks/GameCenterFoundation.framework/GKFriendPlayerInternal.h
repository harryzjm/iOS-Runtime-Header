//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameInternal, NSDate, NSString;

@interface GKFriendPlayerInternal
{
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (id)secureCodedPropertyKeys;
- (void)setLastPlayedGame:(id)arg1;
- (id)lastPlayedGame;
- (void)setLastPlayedDate:(id)arg1;
- (id)lastPlayedDate;
- (void)setStatus:(id)arg1;
- (id)status;
- (int)defaultFamiliarity;
- (_Bool)isFriend;
- (void)dealloc;

@end
