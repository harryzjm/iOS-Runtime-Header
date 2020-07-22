//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface RPPictureInPictureViewController : UIViewController
{
    UIView *_contentView;
    long long _currentAlignment;
    struct CGPoint _lastTouchPoint;
}

@property(nonatomic) long long currentAlignment; // @synthesize currentAlignment=_currentAlignment;
@property(nonatomic) struct CGPoint lastTouchPoint; // @synthesize lastTouchPoint=_lastTouchPoint;
@property(nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateContentViewWithAlignment:(long long)arg1 size:(struct CGSize)arg2;
- (void)viewDidPan:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
