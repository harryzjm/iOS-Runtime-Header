//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ISDefaults : NSObject
{
    struct os_unfair_lock_s _lock;
    NSNumber *__usePerstentCache;
}

+ (id)sharedInstance;
@property(readonly) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain) NSNumber *_usePerstentCache; // @synthesize _usePerstentCache=__usePerstentCache;
- (void).cxx_destruct;
@property(readonly) _Bool usePerstentCache; // @dynamic usePerstentCache;

@end
