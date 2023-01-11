//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlayServices/CRSSessionServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString, RBSProcessHandle;

@interface CRSSessionController : NSObject <CRSSessionServerToClientInterface>
{
    struct os_unfair_lock_s _lock;
    _Bool _lock_invalidated;
    RBSProcessHandle *_process;
    BSServiceConnection *_connection;
}

@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) RBSProcessHandle *process; // @synthesize process=_process;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
