//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol QLCustomItemViewControllerHost;

__attribute__((visibility("hidden")))
@interface QLCustomItemViewControllerHostProxy : NSObject
{
    id <QLCustomItemViewControllerHost> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QLCustomItemViewControllerHost> delegate; // @synthesize delegate=_delegate;
- (void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dismissQuickLook;
- (void)setFullScreen:(_Bool)arg1;
- (void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

