//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeUI/NSObject-Protocol.h>

@class NSNumber, STAllowance, STAlwaysAllowList, STAskForTimeRequestResponse, STDeviceBedtime, STTimeAllowancesViewModel;

@protocol STTimeAllowancesViewModelCoordinator <NSObject>
@property(readonly) STTimeAllowancesViewModel *viewModel;
- (void)respondToAskForTime:(STAskForTimeRequestResponse *)arg1 withApproval:(_Bool)arg2 timeApproved:(NSNumber *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)saveDefaultAlwaysAllowListWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)saveAlwaysAllowList:(STAlwaysAllowList *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteAllowance:(STAllowance *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveAllowance:(STAllowance *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveDeviceBedtime:(STDeviceBedtime *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

