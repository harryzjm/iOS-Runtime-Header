//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView, UILabel;

@interface EKCustomTitleView : UIView
{
    _Bool _animating;
    UILabel *_originalTitle;
    UILabel *_title;
    UIImageView *_originalImage;
    UIImageView *_titleImage;
    UILabel *_subTitle;
    NSArray *_changingConstraints;
}

@property _Bool animating; // @synthesize animating=_animating;
@property(retain) NSArray *changingConstraints; // @synthesize changingConstraints=_changingConstraints;
@property(retain) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) UIImageView *titleImage; // @synthesize titleImage=_titleImage;
@property(retain) UIImageView *originalImage; // @synthesize originalImage=_originalImage;
@property(retain) UILabel *title; // @synthesize title=_title;
@property(retain) UILabel *originalTitle; // @synthesize originalTitle=_originalTitle;
- (void).cxx_destruct;
- (void)animateOutWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateInWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)display;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 eventViewController:(id)arg3;

@end
