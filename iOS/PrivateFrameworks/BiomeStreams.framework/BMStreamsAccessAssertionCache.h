//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface BMStreamsAccessAssertionCache : NSObject
{
    _PASLock *_lock;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)_makeAssertionWithDescriptor:(id)arg1 extensionToken:(id)arg2;
- (id)createAssertionForAccessDescriptor:(id)arg1 extensionToken:(id)arg2;
- (id)assertionForAccessDescriptor:(id)arg1;
- (id)init;

@end
