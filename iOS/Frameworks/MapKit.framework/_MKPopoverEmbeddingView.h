//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol _MKPopoverEmbeddingViewWindowDelegate;

__attribute__((visibility("hidden")))
@interface _MKPopoverEmbeddingView : UIView
{
    id <_MKPopoverEmbeddingViewWindowDelegate> _windowDelegate;
}

@property(nonatomic) __weak id <_MKPopoverEmbeddingViewWindowDelegate> windowDelegate; // @synthesize windowDelegate=_windowDelegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;

@end
