//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class UIScreenEdgePanGestureRecognizer, UIView;

@protocol CSDismissableModalViewControllerDelegate <NSObject>
- (void)dismissForHomeButton;
- (void)handleBottomEdgeGestureEnded:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)handleBottomEdgeGestureChanged:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)handleBottomEdgeGestureBegan:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)addGrabberView:(UIView *)arg1;
@end
