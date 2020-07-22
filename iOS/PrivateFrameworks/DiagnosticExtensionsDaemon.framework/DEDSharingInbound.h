//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DEDController, DEDSharingConnection;
@protocol OS_os_log;

@interface DEDSharingInbound : NSObject
{
    DEDController *_delegate;
    DEDSharingConnection *_connection;
    NSObject<OS_os_log> *_log;
}

@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak DEDSharingConnection *connection; // @synthesize connection=_connection;
@property __weak DEDController *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleRequest:(id)arg1 forSFSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleObject:(id)arg1 forSFSession:(id)arg2 forBugSession:(id)arg3 callingDevice:(id)arg4;
- (void)handleObject:(id)arg1 forSFSession:(id)arg2;
- (id)initWithController:(id)arg1 sharingConnection:(id)arg2;
- (id)init;

@end

