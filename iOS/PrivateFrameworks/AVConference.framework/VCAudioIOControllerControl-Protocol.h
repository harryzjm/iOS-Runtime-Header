//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class VCAudioIOControllerClient;

@protocol VCAudioIOControllerControl <NSObject>
- (void)updateClient:(VCAudioIOControllerClient *)arg1;
- (void)stopClient:(VCAudioIOControllerClient *)arg1;
- (void)startClient:(VCAudioIOControllerClient *)arg1;

@optional
- (void)refreshOutputMetering;
- (void)refreshInputMetering;
@end
