//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;

@interface SKWeakContainer : NSObject
{
    _Bool _wasOnScreen;
    UIView *_scrollingView;
    UIView *_trackingView;
}

@property(nonatomic) _Bool wasOnScreen; // @synthesize wasOnScreen=_wasOnScreen;
@property(nonatomic) __weak UIView *trackingView; // @synthesize trackingView=_trackingView;
@property(nonatomic) __weak UIView *scrollingView; // @synthesize scrollingView=_scrollingView;
- (void).cxx_destruct;

@end

