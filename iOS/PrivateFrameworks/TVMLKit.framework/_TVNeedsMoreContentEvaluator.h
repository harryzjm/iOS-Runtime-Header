//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElement, UIScrollView;

__attribute__((visibility("hidden")))
@interface _TVNeedsMoreContentEvaluator : NSObject
{
    UIScrollView *_scrollView;
    long long _axis;
    long long _state;
    IKViewElement *_viewElement;
    double _threshold;
}

- (void).cxx_destruct;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long axis; // @synthesize axis=_axis;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)reset;
- (void)evaluateForState:(long long)arg1;
- (id)initWithScrollView:(id)arg1 axis:(long long)arg2;
- (id)init;

@end

