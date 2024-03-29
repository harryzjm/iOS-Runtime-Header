//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookUICore/QLItemViewController.h>

@class NSString, STBlockingViewController;

__attribute__((visibility("hidden")))
@interface QLScreenTimeItemViewController : QLItemViewController
{
    long long _policy;
    NSString *_bundleIdentifier;
    NSString *_categoryIdentifier;
    STBlockingViewController *_blockingViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) STBlockingViewController *blockingViewController; // @synthesize blockingViewController=_blockingViewController;
@property(retain, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long policy; // @synthesize policy=_policy;
- (void)_updateBlockingViewControllerWithCurrentPolicy;
- (void)hideBlockingViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showBlockingViewControllerWithPolicy:(long long)arg1;
- (_Bool)canEnterFullScreen;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCategoryIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;

@end

