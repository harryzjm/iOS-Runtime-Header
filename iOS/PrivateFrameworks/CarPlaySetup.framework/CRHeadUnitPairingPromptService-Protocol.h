//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySetup/NSObject-Protocol.h>

@class NSString;

@protocol CRHeadUnitPairingPromptService <NSObject>
- (void)handleReceivedResponse:(_Bool)arg1 forKeyIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)wantsToPresentHeadUnitPairingPromptForKeyIdentifier:(NSString *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
@end

