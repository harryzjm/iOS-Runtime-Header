//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserDragControllerTarget, CKBrowserDragManager, UIView;
@protocol CKBrowserItem;

@protocol CKBrowserDragControllerDelegate <NSObject>
- (_Bool)dragManager:(CKBrowserDragManager *)arg1 canPeelItem:(id)arg2;
- (_Bool)dragManager:(CKBrowserDragManager *)arg1 canRotateItem:(id)arg2;
- (_Bool)dragManager:(CKBrowserDragManager *)arg1 canScaleItem:(id)arg2;
- (void)dragManager:(CKBrowserDragManager *)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4;
- (_Bool)dragManager:(CKBrowserDragManager *)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4;
- (void)dragManager:(CKBrowserDragManager *)arg1 didDragItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3;

@optional
- (_Bool (^)(struct CGPoint, double, double))commitBlockForItem:(UIView<CKBrowserItem> *)arg1;
- (void)dragManager:(CKBrowserDragManager *)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(CKBrowserDragControllerTarget *)arg3 dropArea:(int)arg4 wasCancelled:(_Bool *)arg5;
- (void)dragManager:(CKBrowserDragManager *)arg1 didBeginDraggingItem:(id)arg2;
@end

