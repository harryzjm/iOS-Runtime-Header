//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class UIViewController;
@protocol BNPanGestureProxy;

@protocol BNHostedContentProviding <NSObject>
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, nonatomic) _Bool providesHostedContent;

@optional
- (void)draggingDidBeginWithGestureProxy:(id <BNPanGestureProxy>)arg1;
@end

