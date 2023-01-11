//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;
@protocol CRCarKitService;

@interface CRCarKitServiceClient : NSObject
{
    NSXPCConnection *_serviceConnection;
    id <CRCarKitService> _service;
    NSMutableArray *_outstandingSemaphores;
}

@property(retain, nonatomic) NSMutableArray *outstandingSemaphores; // @synthesize outstandingSemaphores=_outstandingSemaphores;
@property(retain, nonatomic) id <CRCarKitService> service; // @synthesize service=_service;
@property(retain, nonatomic) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
- (void).cxx_destruct;
- (void)performServiceCallBlock:(CDUnknownBlockType)arg1;
- (void)_releaseAllServiceSemaphores;
- (void)_blockOnServiceSemaphore:(id)arg1;
- (id)_serviceSemaphore;
- (void)dealloc;
- (id)init;

@end

