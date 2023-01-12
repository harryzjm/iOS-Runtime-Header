//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNMemojiBackgroundColor : NSObject
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

+ (id)log;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double red; // @synthesize red=_red;
- (id)initWithColorDescription:(id)arg1;
- (id)initWithDefaultColorWithAlpha:(double)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithColorDescription:(id)arg1 alpha:(double)arg2;

@end
