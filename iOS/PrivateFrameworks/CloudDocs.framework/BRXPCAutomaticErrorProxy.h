//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPXPCAutomaticErrorProxy.h>

@class NSFileProviderService, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BRXPCAutomaticErrorProxy : FPXPCAutomaticErrorProxy
{
    NSXPCConnection *_connection;
    NSFileProviderService *_service;
}

+ (void)decrementConnectionRefCount:(id)arg1;
+ (void)incrementConnectionRefCount:(id)arg1;
+ (_Bool)sanitizeErrors;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConnection:(id)arg1 service:(id)arg2 interface:(id)arg3;

// Remaining properties
@property unsigned long long timeoutState;

@end

