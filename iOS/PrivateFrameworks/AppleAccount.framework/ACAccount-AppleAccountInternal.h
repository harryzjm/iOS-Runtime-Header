//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class NSString;

@interface ACAccount (AppleAccountInternal)
- (void)_aa_clearRawPassword;
@property(copy, nonatomic, setter=_aa_setRawPassword:) NSString *_aa_rawPassword;
- (void)aa_removeCerts;
- (void)aa_configureCerts;
- (void)_aa_setPrimaryEmail:(id)arg1;
- (void)_aa_setAltDSID:(id)arg1;
- (void)_aa_setAppleID:(id)arg1;
@end
