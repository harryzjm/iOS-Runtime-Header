//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIViewPropertyAnimator, _UIDraggingItem;
@protocol UICoordinateSpace;

@protocol _UIDraggingItemVisualTarget <NSObject>

@optional
- (_Bool)_draggingItem:(_UIDraggingItem *)arg1 shouldDelaySetDownAnimationWithCompletion:(void (^)(void))arg2;
- (void)_draggingItem:(_UIDraggingItem *)arg1 willAnimateDisappearanceWithAnimator:(UIViewPropertyAnimator *)arg2;
- (void)_draggingItem:(_UIDraggingItem *)arg1 willAnimateSetDownWithAnimator:(UIViewPropertyAnimator *)arg2;
- (struct CGRect)_targetFrameOfDraggingItem:(_UIDraggingItem *)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
@end

