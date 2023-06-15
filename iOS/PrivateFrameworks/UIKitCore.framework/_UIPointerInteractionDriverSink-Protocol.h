//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIHoverGestureRecognizer, UIView;
@protocol _UIPointerInteractionDriver;

@protocol _UIPointerInteractionDriverSink <NSObject>
- (void)driverDidExit:(id <_UIPointerInteractionDriver>)arg1;
- (void)driver:(id <_UIPointerInteractionDriver>)arg1 willAttachHoverGestureRecognizer:(UIHoverGestureRecognizer *)arg2 toView:(UIView *)arg3;
- (void)driver:(id <_UIPointerInteractionDriver>)arg1 didIssueUpdate:(CDStruct_7f9d6131)arg2;
@end

