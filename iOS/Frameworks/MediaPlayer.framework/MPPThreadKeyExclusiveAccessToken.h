//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MPPThreadKeyExclusiveAccessToken : NSObject
{
    unsigned long long _key;
    id _owner;
}

+ (id)tokenWithKey:(unsigned long long)arg1 owner:(id)arg2;
- (void)assertHasExclusiveAccessForOwner:(id)arg1;
- (id)_init;

@end

