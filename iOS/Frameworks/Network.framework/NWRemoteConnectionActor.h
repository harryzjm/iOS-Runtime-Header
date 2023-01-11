//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NWRemoteConnectionActorDelegate;

@interface NWRemoteConnectionActor : NSObject
{
    NSObject<NWRemoteConnectionActorDelegate> *_delegate;
    NSMutableDictionary *_connections;
    NSMutableDictionary *_browsers;
}

@property(retain) NSMutableDictionary *browsers; // @synthesize browsers=_browsers;
@property(retain) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property __weak NSObject<NWRemoteConnectionActorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)receiveRemoteCommand:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scheduleReadsOnConnection:(id)arg1;
- (void)updateEndpointsForBrowser:(id)arg1;
- (void)sendData:(id)arg1 forConnection:(id)arg2;
- (void)updatePathForConnection:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
