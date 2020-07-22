//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface NPKTransientPassAssertion : NSObject
{
    _Bool _requestServiceMode;
    NSXPCConnection *_xpcConnection;
    NSString *_uniqueID;
}

@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) _Bool requestServiceMode; // @synthesize requestServiceMode=_requestServiceMode;
- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_resyncState;
- (void)invalidate;
- (id)initWithPassWithUniqueID:(id)arg1;

@end

