//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BrightnessSystemClient;

@interface PKBacklightController : NSObject
{
    BrightnessSystemClient *_brightnessClient;
}

- (void).cxx_destruct;
- (void)_updateBacklightNits:(float)arg1 period:(double)arg2;
- (void)setBacklightMinimumEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)init;

@end

