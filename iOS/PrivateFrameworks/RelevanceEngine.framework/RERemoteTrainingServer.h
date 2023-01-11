//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RERemoteTrainingServerInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface RERemoteTrainingServer : NSObject <RERemoteTrainingServerInterface>
{
    NSXPCConnection *_connection;
    NSString *_processName;
}

- (void).cxx_destruct;
- (void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_clearConnection;
- (void)_queue_setupConnectionIfNeeded;
- (id)initWithTargetProcessName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
