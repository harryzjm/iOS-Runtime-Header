//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UILabel, UIView, VPScannerView;

@interface VPScannerViewController : UIViewController
{
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _scannedCodeHandler;
    NSString *_titleMessage;
    UIView *_containerView;
    UIButton *_cancelButton;
    UIButton *_pairManuallyButton;
    VPScannerView *_scannerView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIView *_viewfinderView;
}

+ (id)instantiateViewController;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *viewfinderView; // @synthesize viewfinderView=_viewfinderView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VPScannerView *scannerView; // @synthesize scannerView=_scannerView;
@property(retain, nonatomic) UIButton *pairManuallyButton; // @synthesize pairManuallyButton=_pairManuallyButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *titleMessage; // @synthesize titleMessage=_titleMessage;
@property(copy, nonatomic) CDUnknownBlockType scannedCodeHandler; // @synthesize scannedCodeHandler=_scannedCodeHandler;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)handlePairManuallyButton:(id)arg1;
- (void)handleCancelButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)_canShowWhileLocked;

@end
