//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class FMDGenericAccessory, FMDLostModeInfo, NSArray;
@protocol FMDAudioAccessory;

@protocol FindMyDeviceHelperXPCInterface <NSObject>
- (oneway void)updateNeedsLocateAckLostModeInfo:(FMDLostModeInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)updateManagedLostModeInfo:(FMDLostModeInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)disableTouchIDWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)waitForRoutableAccessory:(id <FMDAudioAccessory>)arg1 timeout:(double)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)stopPlayingForAccessory:(FMDGenericAccessory *)arg1 rampDownDuration:(double)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)startPlayingSoundForAccessory:(FMDGenericAccessory *)arg1 duration:(double)arg2 rampUpDuration:(double)arg3 channels:(NSArray *)arg4 completion:(void (^)(NSError *))arg5;
@end

