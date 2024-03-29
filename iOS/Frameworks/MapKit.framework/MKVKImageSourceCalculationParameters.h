//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKVKImageSourceCalculationParameters : NSObject
{
    NSArray *_imageSourceKeys;
    double _scale;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSArray *imageSourceKeys; // @synthesize imageSourceKeys=_imageSourceKeys;
- (id)initWithImageSourceKeys:(id)arg1 scale:(double)arg2;

@end

