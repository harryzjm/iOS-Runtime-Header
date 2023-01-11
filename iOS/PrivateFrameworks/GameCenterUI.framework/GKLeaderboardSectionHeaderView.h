//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class GKGameRecord, GKLeaderboard, GKLeaderboardMetadataView, NSLayoutConstraint, UIStackView;

@interface GKLeaderboardSectionHeaderView : UICollectionReusableView
{
    _Bool _dataUpdated;
    GKLeaderboard *_leaderboard;
    GKGameRecord *_gameRecord;
    GKLeaderboardMetadataView *_personalView;
    GKLeaderboardMetadataView *_socialView;
    UIStackView *_container;
    NSLayoutConstraint *_contentInsetTop;
    NSLayoutConstraint *_contentInsetBottom;
    NSLayoutConstraint *_contentInsetTrailing;
    NSLayoutConstraint *_contentInsetLeading;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dataUpdated; // @synthesize dataUpdated=_dataUpdated;
@property(retain, nonatomic) NSLayoutConstraint *contentInsetLeading; // @synthesize contentInsetLeading=_contentInsetLeading;
@property(retain, nonatomic) NSLayoutConstraint *contentInsetTrailing; // @synthesize contentInsetTrailing=_contentInsetTrailing;
@property(retain, nonatomic) NSLayoutConstraint *contentInsetBottom; // @synthesize contentInsetBottom=_contentInsetBottom;
@property(retain, nonatomic) NSLayoutConstraint *contentInsetTop; // @synthesize contentInsetTop=_contentInsetTop;
@property(retain, nonatomic) UIStackView *container; // @synthesize container=_container;
@property(retain, nonatomic) GKLeaderboardMetadataView *socialView; // @synthesize socialView=_socialView;
@property(retain, nonatomic) GKLeaderboardMetadataView *personalView; // @synthesize personalView=_personalView;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
- (void)updateHighlightsWithGameRecord:(id)arg1 leaderboardCount:(long long)arg2 setCount:(long long)arg3;
- (id)attributedStringWithSymbol:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayout;
- (id)formattedNumber:(id)arg1;
- (void)awakeFromNib;

@end
