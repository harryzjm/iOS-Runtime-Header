//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BROperation.h"

@class NSFileProviderService, NSObject, NSURL;
@protocol BRShareOperationProtocol><NSXPCProxyCreating, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface BRShareOperation : BROperation
{
    NSObject<OS_dispatch_group> *_serviceGroup;
    NSFileProviderService *_sharingService;
    id <BRShareOperationProtocol><NSXPCProxyCreating> _remoteObject;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)remoteLegacyObject;
- (id)remoteFPFSObject;
- (id)remoteObject;
- (id)initWithURL:(id)arg1;
- (id)initWithDirectConnection;
- (id)initWithShare:(id)arg1;
- (id)init;

@end

