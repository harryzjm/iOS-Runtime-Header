//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SXDragManager, UIView;
@protocol SXDragable;

@protocol SXDragManagerDataSource
- (id <SXDragable>)dragManager:(SXDragManager *)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (UIView *)viewForDragManager:(SXDragManager *)arg1;
@end

