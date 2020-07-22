//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIScrollView;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusEngineScrollViewOffsets : NSObject
{
    UIScrollView *_scrollView;
    id <UIScrollViewDelegate> _scrollDelegate;
    double _convergenceRate;
    CDUnknownBlockType _completion;
    struct CGPoint _lastContentOffset;
    struct CGPoint _targetContentOffset;
    struct CGPoint _lastVelocity;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) struct CGPoint lastVelocity; // @synthesize lastVelocity=_lastVelocity;
@property(nonatomic) double convergenceRate; // @synthesize convergenceRate=_convergenceRate;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;

@end

