//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDNanoSyncManager, HKNanoSyncPairedDevicesSnapshot;

@protocol HDNanoSyncManagerObserver <NSObject>
- (void)nanoSyncManager:(HDNanoSyncManager *)arg1 pairedDevicesChanged:(HKNanoSyncPairedDevicesSnapshot *)arg2;
@end
