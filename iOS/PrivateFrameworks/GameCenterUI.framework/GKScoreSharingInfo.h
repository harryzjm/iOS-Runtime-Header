//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUI/NSCoding-Protocol.h>
#import <GameCenterUI/NSSecureCoding-Protocol.h>

@class GKGame, GKLeaderboard, GKPlayer, GKScore, UIImage;

@interface GKScoreSharingInfo : NSObject <NSCoding, NSSecureCoding>
{
    _Bool _complete;
    GKLeaderboard *_leaderboardCategory;
    GKPlayer *_player;
    GKGame *_game;
    UIImage *_badgeImage;
    UIImage *_iconImage;
    GKScore *_score;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKLeaderboard *leaderboardCategory; // @synthesize leaderboardCategory=_leaderboardCategory;
- (id)subjectForEmailActivity;
- (id)itemsForActivityType:(id)arg1;
- (id)thumbnailForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategoryID:(id)arg1 forGame:(id)arg2 player:(id)arg3;
- (void)dealloc;

@end
