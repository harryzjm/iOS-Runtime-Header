//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <MarkupUI/MURemoteViewProtocol-Protocol.h>

@class NSString;

@interface MURemoteViewController : _UIRemoteViewController <MURemoteViewProtocol>
{
    _Bool _shouldResignFirstResponder;
    CDUnknownBlockType _finishedWithResultsCompletionBlock;
    long long _sandboxExtensionHandle;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property _Bool shouldResignFirstResponder; // @synthesize shouldResignFirstResponder=_shouldResignFirstResponder;
@property long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
@property(copy, nonatomic) CDUnknownBlockType finishedWithResultsCompletionBlock; // @synthesize finishedWithResultsCompletionBlock=_finishedWithResultsCompletionBlock;
- (void).cxx_destruct;
- (void)beginDismissWithInfo:(id)arg1;
- (void)serviceDidFinishwithResults:(id)arg1 andSandboxExtension:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

