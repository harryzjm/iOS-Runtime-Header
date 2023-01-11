//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface OTControl : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)controlObject:(id *)arg1;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)scrubBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)launchBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)preflightBottledPeer:(id)arg1 dsid:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)signOut:(CDUnknownBlockType)arg1;
- (void)signIn:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)listOfRecords:(CDUnknownBlockType)arg1;
- (void)encryptionKey:(CDUnknownBlockType)arg1;
- (void)signingKey:(CDUnknownBlockType)arg1;
- (void)reset:(CDUnknownBlockType)arg1;
- (void)restore:(id)arg1 dsid:(id)arg2 secret:(id)arg3 escrowRecordID:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (id)initWithConnection:(id)arg1;

@end

