//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MISSING_TYPE, UIButton;

__attribute__((visibility("hidden")))
@interface _TtC15ConversationKit38InCallControlsParticipantTableViewCell : UITableViewCell
{
    MISSING_TYPE *nameLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *cameraIcon;
    MISSING_TYPE *avatarView;
    MISSING_TYPE *ringButton;
    MISSING_TYPE *isAccessiblityConstraintsEnabled;
    MISSING_TYPE *nameLabelFirstBaselineLayoutConstraint;
    MISSING_TYPE *subtitleLabelFirstBaselineLayoutConstraint;
    MISSING_TYPE *subtitleLabelLastBaselineLayoutConstraint;
    MISSING_TYPE *constraintsForCameraIconVisibleState;
    MISSING_TYPE *constraintsForRingButtonVisibleState;
    MISSING_TYPE *callDelegate;
    MISSING_TYPE *delegate;
}

- (CDUnknownBlockType).cxx_destruct;
- (void)didTapRing;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, readonly) UIButton *ringButton; // @synthesize ringButton;

@end
