//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSString;

@protocol SBFAuthenticationRevoker <NSObject>
- (void)revokeAuthenticationIfNecessaryForPublicReason:(NSString *)arg1;
- (void)revokeAuthenticationImmediatelyIfNecessaryForPublicReason:(NSString *)arg1;
- (void)revokeAuthenticationImmediatelyForPublicReason:(NSString *)arg1;
@end

