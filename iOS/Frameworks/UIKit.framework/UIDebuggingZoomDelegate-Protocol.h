//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIWindow;

@protocol UIDebuggingZoomDelegate
- (struct CGImage *)newCaptureSnapshotAtRect:(struct CGRect)arg1 withTransform:(struct CGAffineTransform *)arg2 window:(UIWindow *)arg3;
- (NSArray *)drawLinesAtPoint:(struct CGPoint)arg1;
@end

