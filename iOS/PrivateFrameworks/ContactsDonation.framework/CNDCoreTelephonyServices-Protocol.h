//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsDonation/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol CNDCoreTelephonyServices <NSObject>
- (void)_CTServerConnectionUnregisterForNotification:(struct __CTServerConnection *)arg1:(const struct __CFString *)arg2;
- (void)_CTServerConnectionRegisterBlockForNotification:(struct __CTServerConnection *)arg1:(const struct __CFString *)arg2:(void (^)(struct __CFDictionary *))arg3;
- (struct __CTServerConnection *)_CTServerConnectionCreateOnTargetQueue:(const struct __CFAllocator *)arg1:(const struct __CFString *)arg2:(NSObject<OS_dispatch_queue> *)arg3:(void (^)(struct __CFString *, struct __CFDictionary *))arg4;
@end

