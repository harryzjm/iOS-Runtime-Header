//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _NSXPCConnectionExportInfo;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportedObjectTable : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    _NSXPCConnectionExportInfo *_proxy1;
    struct __CFDictionary *_proxyNumberToObject;
    struct __CFDictionary *_objectToProxyNumber;
    unsigned long long _next;
    _Bool _valid;
    NSObject<OS_dispatch_group> *_replyGroup;
}

- (id)description;
- (void)dealloc;
- (id)init;

@end
