//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC19ContactlessReaderUI28RegRemoteAlertViewController : SBUIRemoteAlertServiceViewController
{
    MISSING_TYPE *regViewController;
    MISSING_TYPE *viewDisappearListener;
    MISSING_TYPE *suppressible;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

@end

