//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexVideo/NSObject-Protocol.h>

@class SVVideoViewController;

@protocol SVVideoViewControllerAppearanceObserver <NSObject>

@optional
- (void)videoViewControllerDidDisappear:(SVVideoViewController *)arg1;
- (void)videoViewControllerWillDisappear:(SVVideoViewController *)arg1;
- (void)videoViewControllerDidAppear:(SVVideoViewController *)arg1;
- (void)videoViewControllerWillAppear:(SVVideoViewController *)arg1;
@end

