//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSPairedDevice;
@protocol DNDSAssertionSyncManager;

@protocol DNDSAssertionSyncManagerDataSource <NSObject>
- (DNDSPairedDevice *)currentlyActivePairedDeviceForSyncManager:(id <DNDSAssertionSyncManager>)arg1;
@end
