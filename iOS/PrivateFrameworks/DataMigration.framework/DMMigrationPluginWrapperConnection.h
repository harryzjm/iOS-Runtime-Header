//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject
{
    DMXPCConnection *_connection;
}

+ (id)connection;
- (void).cxx_destruct;
- (void)handleMessage:(id)arg1;
- (void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (int)pid;
- (void)invalidate;
- (void)resume;
- (id)init;

@end

