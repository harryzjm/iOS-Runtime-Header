//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKMapView;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MIController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    VKMapView *_mapView;
    _Bool _isActive;
}

+ (id)sharedController;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void)decodeDebugTreeData:(id)arg1;
- (void)sendData:(id)arg1;
- (void)recievedData:(id)arg1;
- (void)handleXPCEvent:(id)arg1;
- (void)deactivateController;
- (void)activateController:(id)arg1;
- (id)init;

@end
