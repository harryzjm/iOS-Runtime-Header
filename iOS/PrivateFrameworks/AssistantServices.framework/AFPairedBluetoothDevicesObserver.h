//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AFPairedBluetoothDevicesObserver : NSObject
{
    NSArray *_pairedDevices;
    struct os_unfair_lock_s _pairedDevicesLock;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (id)pairedBluetoothDevices;
- (void)updatePairedDevices:(id)arg1;
- (id)init;

@end
