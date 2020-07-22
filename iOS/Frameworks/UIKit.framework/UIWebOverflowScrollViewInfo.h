//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CALayer, UIView, UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollViewInfo : NSObject
{
    UIWebOverflowScrollView *_scrollView;
    CALayer *_scrollViewLayer;
    UIView *_oldSuperview;
}

@property(retain, nonatomic) UIView *oldSuperview; // @synthesize oldSuperview=_oldSuperview;
@property(retain, nonatomic) UIWebOverflowScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end
