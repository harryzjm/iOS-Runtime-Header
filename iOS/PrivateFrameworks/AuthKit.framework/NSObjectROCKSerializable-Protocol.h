//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AuthKit/NSObject-Protocol.h>

@class NSObject, ROCKSessionManager;
@protocol OS_xpc_object;

@protocol NSObjectROCKSerializable <NSObject>
- (NSObject<OS_xpc_object> *)rockEncodeWithSessionManager:(ROCKSessionManager *)arg1 error:(id *)arg2;
@end
