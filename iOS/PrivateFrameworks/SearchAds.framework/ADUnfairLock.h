//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchAds/NSLocking-Protocol.h>

@interface ADUnfairLock : NSObject <NSLocking>
{
    struct os_unfair_lock_s _unfairLock;
    unsigned int _unfairLockOptions;
}

@property(nonatomic) unsigned int unfairLockOptions; // @synthesize unfairLockOptions=_unfairLockOptions;
@property(nonatomic) struct os_unfair_lock_s unfairLock; // @synthesize unfairLock=_unfairLock;
- (void)unlock;
- (void)lock;
- (id)initWithOptions:(long long)arg1;

@end
