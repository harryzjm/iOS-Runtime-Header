//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSLocking-Protocol.h>

__attribute__((visibility("hidden")))
@interface ASDUnfairLock : NSObject <NSLocking>
{
    struct os_unfair_lock_s _lock;
}

- (void)unlock;
- (void)lock;
- (id)init;

@end
