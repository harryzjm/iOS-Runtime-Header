//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView, _TtC12GameCenterUI14EmptyStateView, _TtC12GameCenterUI22GKAddFriendsLockupView;

@interface GKLeaderboardAddFriendsCell : UICollectionViewCell
{
    long long _friendCount;
    _TtC12GameCenterUI22GKAddFriendsLockupView *_addFriendsLockupView;
    _TtC12GameCenterUI14EmptyStateView *_noFriendsView;
    UIView *_container;
    UIView *_topLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(nonatomic) __weak _TtC12GameCenterUI14EmptyStateView *noFriendsView; // @synthesize noFriendsView=_noFriendsView;
@property(nonatomic) __weak _TtC12GameCenterUI22GKAddFriendsLockupView *addFriendsLockupView; // @synthesize addFriendsLockupView=_addFriendsLockupView;
@property(nonatomic) long long friendCount; // @synthesize friendCount=_friendCount;
@property(nonatomic) _Bool lineVisible;
- (void)clearContainer;
- (void)configureNoFriendsViewWithHandler:(CDUnknownBlockType)arg1;
- (void)configureAddFriendsLockupWithHandler:(CDUnknownBlockType)arg1;
- (struct CGSize)preferredLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)awakeFromNib;

@end
