//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "OSLogEnumerator.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface OSLogCurrentProcessEnumerator : OSLogEnumerator
{
    NSXPCConnection *_connectionToService;
}

- (void).cxx_destruct;
- (id)nextObject;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1 predicate:(id)arg2 position:(id)arg3;

@end

