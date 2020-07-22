//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBlurEffect, UIColor;

@interface HULayeredBackgroundEffect : NSObject
{
    UIBlurEffect *_blurEffect;
    UIColor *_fillColor;
}

+ (id)backgroundWithBlurEffect:(id)arg1;
+ (id)backgroundWithFillColor:(id)arg1;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
- (void).cxx_destruct;

@end

