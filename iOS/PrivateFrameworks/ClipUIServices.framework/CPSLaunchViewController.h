//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ClipUIServices/CPSLaunchContentViewControllerDelegate-Protocol.h>
#import <ClipUIServices/PRXFlowDelegate-Protocol.h>

@class CPSClipMetadata, CPSLaunchContentViewController, NSNumber, NSString, NSURL;
@protocol CPSLaunchViewControllerDelegate;

@interface CPSLaunchViewController : UIViewController <PRXFlowDelegate, CPSLaunchContentViewControllerDelegate>
{
    CPSLaunchContentViewController *_launchContentViewController;
    CPSClipMetadata *_metadata;
    NSURL *_url;
    id <CPSLaunchViewControllerDelegate> _delegate;
    CPSLaunchContentViewController *_launchViewController;
    NSNumber *_uiMock_openButtonEnabled;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=uiMock_setOpenButtonEnabled:) NSNumber *uiMock_openButtonEnabled; // @synthesize uiMock_openButtonEnabled=_uiMock_openButtonEnabled;
@property(readonly, nonatomic) CPSLaunchContentViewController *launchViewController; // @synthesize launchViewController=_launchViewController;
@property(nonatomic) __weak id <CPSLaunchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;
- (void)_dismiss;
- (void)proxCardFlowDidDismiss;
- (void)launchContentViewControllerDidDisappear:(id)arg1 didOpenClip:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithClipURL:(id)arg1 metadata:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
