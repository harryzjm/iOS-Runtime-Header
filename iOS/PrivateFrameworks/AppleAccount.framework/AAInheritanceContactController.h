//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAInheritanceController, CIImage, NSString;
@protocol AAInheritanceContactInfo;

@interface AAInheritanceContactController : NSObject
{
    long long _contactType;
    AAInheritanceController *_inheritanceController;
    id <AAInheritanceContactInfo> _contactInfo;
    CIImage *_accessKeyQRCodeImage;
}

- (void).cxx_destruct;
- (void)sendInvitationWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeContactAsBenefactorWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeContactAsBeneficiaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)_accessKeyQRCodeImage;
- (id)accessKeyQRCodeImageDataWithSize:(double)arg1;
@property(readonly, nonatomic) NSString *accessKeyString;
@property(readonly, nonatomic) NSString *claimTokenString;
- (id)initWithContactInfo:(id)arg1 contactType:(long long)arg2;

@end
