//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHLocalAssertionService, BLSHXPCAssertionServiceHostServer;

__attribute__((visibility("hidden")))
@interface BLSHAssertionService : NSObject
{
    BLSHXPCAssertionServiceHostServer *_server;
    BLSHLocalAssertionService *_localAssertionService;
}

+ (id)serviceForService:(id)arg1 withOSInterfaceProvider:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) BLSHLocalAssertionService *localAssertionService; // @synthesize localAssertionService=_localAssertionService;
- (id)initWithService:(id)arg1 osInterfaceProvider:(id)arg2;

@end

