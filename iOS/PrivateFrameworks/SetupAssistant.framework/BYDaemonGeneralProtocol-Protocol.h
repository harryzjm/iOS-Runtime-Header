//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SetupAssistant/NSObject-Protocol.h>

@protocol BYDaemonGeneralProtocol <NSObject>
- (void)observeFinishSetupTriggers;
- (void)backupMetadata:(void (^)(NSData *))arg1;
- (void)setupAssistantNeedsToRun:(void (^)(_Bool))arg1;
@end

