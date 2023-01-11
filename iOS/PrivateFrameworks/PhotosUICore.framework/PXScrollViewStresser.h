//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, UIScrollView;

@interface PXScrollViewStresser : NSObject
{
    unsigned int _scrollDirection;
    CADisplayLink *_displayLink;
    UIScrollView *_scrollView;
    long long _scrollCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) long long scrollCount; // @synthesize scrollCount=_scrollCount;
@property(nonatomic) unsigned int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void)stopScrolling;
@property(readonly, nonatomic, getter=isScrolling) _Bool scrolling;
- (void)_handleDisplayLink:(id)arg1;
- (void)startScrollingScrollView:(id)arg1 axis:(long long)arg2;

@end
