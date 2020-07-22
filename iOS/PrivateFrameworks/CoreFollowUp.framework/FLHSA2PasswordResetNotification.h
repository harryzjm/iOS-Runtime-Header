//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/NSSecureCoding-Protocol.h>

@class NSString;

@interface FLHSA2PasswordResetNotification : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_informativeText;
    NSString *_approveButtonTitle;
    NSString *_dismissButtonTitle;
    NSString *_appleID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *dismissButtonTitle; // @synthesize dismissButtonTitle=_dismissButtonTitle;
@property(copy, nonatomic) NSString *approveButtonTitle; // @synthesize approveButtonTitle=_approveButtonTitle;
@property(copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)followUpItemUserInfo;
- (id)initWithFollowUpItemUserInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
