//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SOS/SOSClientProtocol-Protocol.h>

@protocol SOSInternalClientProtocol <SOSClientProtocol>
- (void)didDismissClientSOSBeforeSOSCall:(long long)arg1;
- (void)dismissClientSOSWithCompletion:(void (^)(_Bool))arg1;
- (void)updateClientCurrentSOSInteractiveState:(long long)arg1;
- (void)updateClientCurrentSOSInitiationState:(long long)arg1;
@end

