//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSAuthenticationBulletinOperation
{
    NSURL *_appStoreRoomURL;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy, nonatomic) NSURL *appStoreRoomURL; // @synthesize appStoreRoomURL=_appStoreRoomURL;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)_serviceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithAppStoreRoomURL:(id)arg1;
- (id)init;

@end
