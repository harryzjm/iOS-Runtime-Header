//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterRemoteProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_shiftingEnabled;
    NSNumber *_shiftingFxnVersion;
    NSCache *_shiftFunctionCache;
}

- (void).cxx_destruct;
- (void)flushDiskCache;
- (unsigned int)locationShiftFunctionVersion;
- (_Bool)_isLocationShiftRequiredForCoordinateViaProxy:(CDStruct_c3b9c2ee)arg1;
- (_Bool)_isLocationShiftRequiredForCoordinateInProcess:(CDStruct_c3b9c2ee)arg1;
- (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (_Bool)isLocationShiftEnabled;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSCache *memoryCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

