//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject
{
    PKXPCService *_remoteService;
}

- (void).cxx_destruct;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)trustedDeviceEnrollmentInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
