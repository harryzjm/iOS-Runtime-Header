//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@interface _SCNSnapshotWindow : UIWindow
{
}

- (struct CGPoint)warpPoint:(struct CGPoint)arg1;
- (struct CGPoint)_warpPoint:(struct CGPoint)arg1 outOfBounds:(_Bool *)arg2;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (id)scnView;
- (_Bool)_canBecomeKeyWindow;
- (void)_setFirstResponder:(id)arg1;
- (_Bool)_isSettingFirstResponder;
- (void)dealloc;

@end

