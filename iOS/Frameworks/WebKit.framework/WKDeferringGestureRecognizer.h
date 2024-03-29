//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface WKDeferringGestureRecognizer : UIGestureRecognizer
{
    struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> _deferringGestureDelegate;
    _Bool _immediatelyFailsAfterTouchEnd;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool immediatelyFailsAfterTouchEnd; // @synthesize immediatelyFailsAfterTouchEnd=_immediatelyFailsAfterTouchEnd;
- (void)setState:(long long)arg1;
- (_Bool)shouldDeferGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)endDeferral:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithDeferringGestureDelegate:(id)arg1;

@end

