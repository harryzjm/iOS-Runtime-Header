//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceManager : NSObject
{
    NSPointerArray *_devicesPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)clearDevices;
- (void)registerDevice:(id)arg1;
- (id)deviceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *allDevices;
- (id)init;

@end

