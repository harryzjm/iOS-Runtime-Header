//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class UIButton, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerSectionHeader : UICollectionReusableView
{
    UILabel *_titleLabel;
    UIButton *_actionButton;
    CDUnknownBlockType _actionBlock;
    UIStackView *_stackView;
}

+ (double)heightNeededForAccessibilityLayoutIncludingActionButton:(_Bool)arg1;
+ (id)reusableIdentifier;
+ (id)actionButtonFont;
+ (id)titleLabelFont;
- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)actionButtonPressed:(id)arg1;
- (void)updateDynamicStackViewProperties;
- (void)setupConstraints;
- (void)updateStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

