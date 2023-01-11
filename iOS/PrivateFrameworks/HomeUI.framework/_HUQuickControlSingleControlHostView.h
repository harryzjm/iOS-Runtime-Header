//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NAUILayoutConstraintSet;
@protocol HULayoutAnchorProviding;

@interface _HUQuickControlSingleControlHostView : UIView
{
    id <HULayoutAnchorProviding> _preferredFrameLayoutGuide;
    UIView *_contentView;
    NAUILayoutConstraintSet *_constraintSet;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_setupConstraintSet;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (_Bool)hasSingleControlView;
@property(retain, nonatomic) id <HULayoutAnchorProviding> preferredFrameLayoutGuide; // @synthesize preferredFrameLayoutGuide=_preferredFrameLayoutGuide;
- (id)initWithContentView:(id)arg1;

@end
