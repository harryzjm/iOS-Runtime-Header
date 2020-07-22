//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, UIScrollView;

__attribute__((visibility("hidden")))
@interface _PUScrollViewPPTScrollHelper : NSObject
{
    UIScrollView *_scrollView;
    CADisplayLink *__displayLink;
    double __lastIncrementTime;
    CDUnknownBlockType __incrementHandler;
    CDUnknownBlockType __completionHandler;
    struct CGPoint _originContentOffset;
}

@property(copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
@property(copy, nonatomic, setter=_setIncrementHandler:) CDUnknownBlockType _incrementHandler; // @synthesize _incrementHandler=__incrementHandler;
@property(nonatomic, setter=_setLastIncrementTime:) double _lastIncrementTime; // @synthesize _lastIncrementTime=__lastIncrementTime;
@property(nonatomic, setter=_setDisplayLink:) __weak CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;
@property(nonatomic, setter=_setOriginContentOffset:) struct CGPoint originContentOffset; // @synthesize originContentOffset=_originContentOffset;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)_endScroll;
- (void)_incrementScroll;
- (void)scrollWithStartHandler:(CDUnknownBlockType)arg1 incrementHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithScrollView:(id)arg1;
- (id)init;

@end

