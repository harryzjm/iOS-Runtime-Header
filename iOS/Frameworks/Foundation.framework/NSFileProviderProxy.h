//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileProviderXPCMessenger, NSString, NSUUID;
@protocol NSFileProviderXPCInterface><NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface NSFileProviderProxy
{
    NSString *_secureID;
    NSUUID *_uniqueID;
    id <NSFileProviderXPCInterface><NSXPCProxyCreating> _remoteProvider;
    NSFileProviderXPCMessenger *_forwardedMessenger;
    _Bool _wantsWriteNotifications;
}

@property _Bool wantsWriteNotifications; // @synthesize wantsWriteNotifications=_wantsWriteNotifications;
@property(readonly) id <NSFileProviderXPCInterface><NSXPCProxyCreating> remoteProvider; // @synthesize remoteProvider=_remoteProvider;
@property(readonly) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly) NSString *secureID; // @synthesize secureID=_secureID;
- (void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2;
- (void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4;
- (void)provideLogicalURLForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)providePhysicalURLForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)provideItemAtURL:(id)arg1 withOptions:(unsigned long long)arg2 forAccessClaim:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)allowedForURL:(id)arg1;
- (void)invalidate;
- (void)forwardUsingProxy:(id)arg1;
- (void)setItemLocation:(id)arg1;
- (id)_clientProxy;
- (void)dealloc;
- (id)initWithClient:(id)arg1 remoteProvider:(id)arg2 reactorID:(id)arg3 secureID:(id)arg4 uniqueID:(id)arg5;

@end

