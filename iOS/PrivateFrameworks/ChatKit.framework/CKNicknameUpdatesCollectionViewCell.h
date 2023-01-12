//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class CKAvatarView, CKNicknameUpdate, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol CKNicknameUpdatesCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKNicknameUpdatesCollectionViewCell : UICollectionViewCell
{
    _Bool _needsContextualMenu;
    id <CKNicknameUpdatesCollectionViewCellDelegate> _delegate;
    CKAvatarView *_avatarView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_updateButton;
    UIButton *_ignoreButton;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    NSLayoutConstraint *_bottomSeparatorLeadingConstraint;
    CKNicknameUpdate *_nicknameUpdate;
}

+ (id)reuseIdentifier;
+ (void)setRecalculateUsesStackedButtonLayout:(_Bool)arg1;
+ (_Bool)recalculateUsesStackedButtonLayout;
+ (void)setUsesStackedButtonLayout:(_Bool)arg1;
+ (_Bool)usesStackedButtonLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) CKNicknameUpdate *nicknameUpdate; // @synthesize nicknameUpdate=_nicknameUpdate;
@property(nonatomic) _Bool needsContextualMenu; // @synthesize needsContextualMenu=_needsContextualMenu;
@property(retain, nonatomic) NSLayoutConstraint *bottomSeparatorLeadingConstraint; // @synthesize bottomSeparatorLeadingConstraint=_bottomSeparatorLeadingConstraint;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UIButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(retain, nonatomic) UIButton *updateButton; // @synthesize updateButton=_updateButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak id <CKNicknameUpdatesCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_ignoreButtonTapped:(id)arg1;
- (void)_updateButtonTapped:(id)arg1;
- (void)updateInterfaceSelectedAction:(unsigned long long)arg1;
- (void)updateSeparatorsForOrder:(unsigned long long)arg1;
- (void)configureWithNicknameUpdate:(id)arg1 order:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

