//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol OFUIDismissalViewDelegate;

@interface OFUIDismissalView : UIView
{
    id <OFUIDismissalViewDelegate> _dismissalViewDelegate;
    _Bool _inPassthroughHitTest;
}

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) id <OFUIDismissalViewDelegate> dismissalViewDelegate; // @synthesize dismissalViewDelegate=_dismissalViewDelegate;
- (void)dealloc;

@end

