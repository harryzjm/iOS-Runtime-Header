//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationEmbeddedUI/NSObject-Protocol.h>

@class LAPSFetchNewPasscodeViewController, NSString;

@protocol LAPSFetchNewPasscodeViewControllerDelegate <NSObject>
- (void)fetchNewPasscodeViewController:(LAPSFetchNewPasscodeViewController *)arg1 verifyPasscode:(NSString *)arg2 matchesPasscode:(NSString *)arg3;
- (void)fetchNewPasscodeViewController:(LAPSFetchNewPasscodeViewController *)arg1 verifyPasscode:(NSString *)arg2;
@end

