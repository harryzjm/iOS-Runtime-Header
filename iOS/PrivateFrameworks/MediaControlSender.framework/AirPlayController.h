//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaControlSender/AirPlayControllerAsync-Protocol.h>
#import <MediaControlSender/AirPlayControllerSync-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_xpcName;
    NSXPCConnection *_cnx;
}

@property(copy, nonatomic) NSString *xpcName; // @synthesize xpcName=_xpcName;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int *)arg3;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
- (void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id *)arg4;
- (id)_setupConnection;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

