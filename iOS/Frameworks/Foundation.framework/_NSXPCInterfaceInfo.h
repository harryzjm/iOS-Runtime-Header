//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCInterfaceInfo : NSObject
{
    unsigned long long _remoteVersion;
    struct os_unfair_lock_s _knownSelectorsLock;
    struct __CFDictionary *_knownSelectors;
    struct __CFDictionary *_methodInfo;
    Class _xpcDOSubclass;
}

- (void)dealloc;
- (id)init;

@end
