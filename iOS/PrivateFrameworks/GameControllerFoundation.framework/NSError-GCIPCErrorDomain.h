//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSArray;

@interface NSError (GCIPCErrorDomain)
+ (id)gc_IPCError:(long long)arg1 userInfo:(id)arg2;
@property(readonly) NSArray *gc_failingKeyPath;
@end

