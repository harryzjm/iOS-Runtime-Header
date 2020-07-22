//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface SXFullScreenCanvasViewController : UIViewController
{
    _Bool _isObservingNavigationBar;
    _Bool _visible;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool isObservingNavigationBar; // @synthesize isObservingNavigationBar=_isObservingNavigationBar;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
