//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class CPTemplateApplicationScene, NSLayoutConstraint, UILayoutGuide, UIWindowScene;

@interface CPWindow : UIWindow
{
    CPTemplateApplicationScene *_templateApplicationScene;
    UILayoutGuide *_mapButtonSafeAreaLayoutGuide;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) UILayoutGuide *mapButtonSafeAreaLayoutGuide; // @synthesize mapButtonSafeAreaLayoutGuide=_mapButtonSafeAreaLayoutGuide;
@property(nonatomic) __weak CPTemplateApplicationScene *templateApplicationScene; // @synthesize templateApplicationScene=_templateApplicationScene;
- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1 templateScene:(id)arg2;

// Remaining properties
@property(nonatomic) __weak UIWindowScene *windowScene; // @dynamic windowScene;

@end
