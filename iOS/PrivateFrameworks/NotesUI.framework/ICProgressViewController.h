//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ICCircularProgressView, NSProgress, UIActivityIndicatorView, UILabel;
@protocol ICProgressViewControllerDelegate;

@interface ICProgressViewController : UIViewController
{
    _Bool _showsCancel;
    NSProgress *_observedProgress;
    id <ICProgressViewControllerDelegate> _progressDelegate;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    ICCircularProgressView *_circularProgressView;
}

@property(retain, nonatomic) ICCircularProgressView *circularProgressView; // @synthesize circularProgressView=_circularProgressView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <ICProgressViewControllerDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) _Bool showsCancel; // @synthesize showsCancel=_showsCancel;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end
