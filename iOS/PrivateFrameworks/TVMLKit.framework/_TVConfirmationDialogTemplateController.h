//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSTimer, _TVConfirmationDialogTemplateView;

__attribute__((visibility("hidden")))
@interface _TVConfirmationDialogTemplateController : UIViewController
{
    _Bool _setTimer;
    NSTimer *_dismissTimer;
}

@property(readonly, nonatomic) NSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_dismissConfirmation:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
@property(readonly, nonatomic) _TVConfirmationDialogTemplateView *templateView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setupTimer;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;

@end

