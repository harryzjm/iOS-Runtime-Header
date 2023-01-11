//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKNetworkImageSource, NSCache, UIImage;

@interface GKUITheme : NSObject
{
    NSCache *_resourceCache;
}

+ (id)sharedTheme;
@property(retain, nonatomic) NSCache *resourceCache; // @synthesize resourceCache=_resourceCache;
- (id)statusDotImage;
- (id)navbarActionButtonIcon;
- (id)bubbleHighlight;
- (id)bubbleTurns;
- (id)bubbleSignin;
- (id)bubbleShare;
- (id)bubbleRequests;
- (id)bubblePoints;
- (id)bubblePlay;
- (id)bubbleInvite;
- (id)bubbleGames;
- (id)bubbleFriends;
- (id)bubbleDecline;
- (id)bubbleChallenges;
- (id)bubbleAccept;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)removePlayerButtonImage;
- (id)addPlayerButtonImage;
- (id)defaultPlayerPhoto;
- (id)defaultLeaderboardIcon;
@property(readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardSetListSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardListSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *photoDetailSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *photoListSource;
@property(readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property(readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageSource;
@property(readonly, retain, nonatomic) GKNetworkImageSource *macGameIconSource;
- (id)resourceWithName:(id)arg1 missingHandler:(CDUnknownBlockType)arg2;
- (id)resourceForSelector:(SEL)arg1 missingHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double formSheetCornerRadius;
@property(readonly, nonatomic) struct CGSize formSheetSize;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (id)eventIconImage;
@property(readonly, retain, nonatomic) UIImage *interactiveRatingStarsBackground;
@property(readonly, retain, nonatomic) UIImage *interactiveRatingStarsForeground;
@property(readonly, retain, nonatomic) UIImage *ratingStarsForegroundImage;
@property(readonly, retain, nonatomic) UIImage *ratingStarsBackgroundImage;
- (id)imageNamed:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)clearResourceCache;

@end

