//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <QuickLook/QLRemotePopoverTracker-Protocol.h>

@class NSDictionary, NSString, QLAppearance, UIView;
@protocol QLCustomItemViewControllerHost;

@interface QLCustomItemViewController : UIViewController <QLRemotePopoverTracker>
{
    QLAppearance *_lastAppearance;
    _Bool _isShareEnabled;
    NSDictionary *_previewOptions;
    UIView *_shareSheetPresentationView;
    id <QLCustomItemViewControllerHost> _hostViewControllerProxy;
}

@property(retain) id <QLCustomItemViewControllerHost> hostViewControllerProxy; // @synthesize hostViewControllerProxy=_hostViewControllerProxy;
@property(nonatomic) __weak UIView *shareSheetPresentationView; // @synthesize shareSheetPresentationView=_shareSheetPresentationView;
@property(nonatomic) _Bool isShareEnabled; // @synthesize isShareEnabled=_isShareEnabled;
@property(copy, nonatomic) NSDictionary *previewOptions; // @synthesize previewOptions=_previewOptions;
- (void).cxx_destruct;
- (void)getFrameWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)presentationModeDidChange:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)setFullScreen:(_Bool)arg1;
- (void)didDismissActivityViewController;
- (void)presentActivityViewControllerFromView:(id)arg1;
- (void)dismissPreviewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

