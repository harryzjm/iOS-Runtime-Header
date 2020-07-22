//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ODDFillColorList : NSObject
{
    NSArray *mColors;
    int mHueDirection;
    int mMethod;
}

- (void)setMethod:(int)arg1;
- (void)setHueDirection:(int)arg1;
- (void)setColors:(id)arg1;
- (id)colorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3;
- (void)dealloc;
- (void)getComponentsForIndex:(unsigned long long)arg1 hue:(float *)arg2 saturation:(float *)arg3 brightness:(float *)arg4 state:(id)arg5;
- (id)spanColorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3;
- (id)repeatColorAtIndex:(unsigned long long)arg1;
- (id)cycleColorAtIndex:(unsigned long long)arg1;

@end

