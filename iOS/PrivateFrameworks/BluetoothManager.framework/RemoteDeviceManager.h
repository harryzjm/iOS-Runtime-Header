//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface RemoteDeviceManager : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)sendMessage:(const char *)arg1 args:(id)arg2;
- (void)disconnectDevice:(id)arg1;
- (void)dealloc;
- (id)init;

@end

