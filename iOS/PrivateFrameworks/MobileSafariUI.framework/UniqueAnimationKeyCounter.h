//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UniqueAnimationKeyCounter : NSObject
{
    unsigned long long _nextAnimationKey;
    unsigned long long _finishedUsingKeys;
}

@property(readonly, nonatomic, getter=isFinishedUsingAllKeys) _Bool finishedUsingAllKeys;
- (void)didFinishUsingAnimationKey;
- (unsigned long long)nextAnimationKey;

@end

