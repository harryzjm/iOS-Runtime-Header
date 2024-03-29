//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class IKLockupElement, MPUContentSizeLayoutConstraint, NSLayoutConstraint, UILabel, UIView, VideosExtrasConstrainedArtworkContainerView;

__attribute__((visibility("hidden")))
@interface VideosExtrasGridCollectionViewCell : UICollectionViewCell
{
    UIView *_spacerView;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    MPUContentSizeLayoutConstraint *_topLineHeight;
    MPUContentSizeLayoutConstraint *_subtitleLineHeight;
    NSLayoutConstraint *_spacerHeight;
    NSLayoutConstraint *_spacerTop;
    IKLockupElement *_lockupElement;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    VideosExtrasConstrainedArtworkContainerView *_artworkContainer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VideosExtrasConstrainedArtworkContainerView *artworkContainer; // @synthesize artworkContainer=_artworkContainer;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak IKLockupElement *lockupElement; // @synthesize lockupElement=_lockupElement;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2 withSizing:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

