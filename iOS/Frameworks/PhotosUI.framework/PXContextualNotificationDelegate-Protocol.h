//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PXContextualNotification, UIView;
@protocol UICoordinateSpace;

@protocol PXContextualNotificationDelegate <NSObject>

@optional
- (void)contextualNotificationDidDisappear:(PXContextualNotification *)arg1;
- (void)contextualNotificationWasDiscarded:(PXContextualNotification *)arg1;
- (void)contextualNotificationWasTapped:(PXContextualNotification *)arg1;
- (_Bool)contextualNotification:(PXContextualNotification *)arg1 shouldPassthroughPoint:(struct CGPoint)arg2 inCoordinateSpace:(id <UICoordinateSpace>)arg3;
- (long long)preferredAnimationForContextualNotification:(PXContextualNotification *)arg1;
- (UIView *)preferredContainerViewForContextualNotification:(PXContextualNotification *)arg1;
- (struct CGRect)contextualNotification:(PXContextualNotification *)arg1 containingFrameInCoordinateSpace:(id <UICoordinateSpace>)arg2;
@end

