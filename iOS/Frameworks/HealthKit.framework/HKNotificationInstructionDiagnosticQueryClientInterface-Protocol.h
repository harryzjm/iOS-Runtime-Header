//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class NSArray, NSUUID;

@protocol HKNotificationInstructionDiagnosticQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverNotificationInstructions:(NSArray *)arg1 clearPending:(_Bool)arg2 isFinalBatch:(_Bool)arg3 queryUUID:(NSUUID *)arg4;
@end

