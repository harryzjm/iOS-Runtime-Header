//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, OspreyGRPCChannel;

__attribute__((visibility("hidden")))
@interface OspreyAuthService : NSObject
{
    OspreyGRPCChannel *_channel;
    NSUUID *_authUUID;
    unsigned long long _authStrategyVersion;
}

- (void).cxx_destruct;
- (void)createClientSessionWithData:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)certificateDataWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithChannel:(id)arg1 authStrategyVersion:(unsigned long long)arg2;

@end

