//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMCEnrollmentInterface;

@interface DMCMDMSignoutSpecifierProvider
{
    DMCEnrollmentInterface *_enrollmentInterface;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DMCEnrollmentInterface *enrollmentInterface; // @synthesize enrollmentInterface=_enrollmentInterface;
- (id)viewController;
- (void)_specifierForMDMProfileWasTapped:(id)arg1;
- (id)_specifierForSignoutButton;
- (id)specifiers;

@end
