//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface IMRemoteURLConnectionMockScheduler : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)scheduleMockResponse:(id)arg1;
- (void)scheduleMockResponse:(id)arg1 forURL:(id)arg2;
- (_Bool)_connect;
- (id)init;

@end

