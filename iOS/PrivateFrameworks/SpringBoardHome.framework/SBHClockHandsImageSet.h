//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

@interface SBHClockHandsImageSet : NSObject
{
    struct SBHClockApplicationIconImageMetrics _metrics;
    UIImage *_seconds;
    UIImage *_minutes;
    UIImage *_hours;
    UIImage *_hourMinuteDot;
    UIImage *_secondDot;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *secondDot; // @synthesize secondDot=_secondDot;
@property(retain, nonatomic) UIImage *hourMinuteDot; // @synthesize hourMinuteDot=_hourMinuteDot;
@property(retain, nonatomic) UIImage *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) UIImage *minutes; // @synthesize minutes=_minutes;
@property(retain, nonatomic) UIImage *seconds; // @synthesize seconds=_seconds;
- (void)getMetrics:(out struct SBHClockApplicationIconImageMetrics *)arg1;
- (void)setMetrics:(const in struct SBHClockApplicationIconImageMetrics *)arg1;

@end
