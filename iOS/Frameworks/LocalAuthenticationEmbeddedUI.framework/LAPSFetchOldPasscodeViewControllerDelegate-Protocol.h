//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationEmbeddedUI/NSObject-Protocol.h>

@class LAPSFetchOldPasscodeViewController, NSString;

@protocol LAPSFetchOldPasscodeViewControllerDelegate <NSObject>
- (NSString *)fetchOldPasscodeViewController:(LAPSFetchOldPasscodeViewController *)arg1 backoffMessageForTimeout:(long long)arg2;
- (void)fetchOldPasscodeViewController:(LAPSFetchOldPasscodeViewController *)arg1 verifyPasscode:(NSString *)arg2;
@end

