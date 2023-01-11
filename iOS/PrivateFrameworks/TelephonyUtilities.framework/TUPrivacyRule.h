//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCoding-Protocol.h>

@class NSString, TUPhoneNumber;

@interface TUPrivacyRule : NSObject <NSCoding>
{
    int _type;
    TUPhoneNumber *_phoneNumber;
    NSString *_email;
    NSString *_businessID;
}

+ (id)ruleForBusinessID:(id)arg1;
+ (id)ruleForEmail:(id)arg1;
+ (id)ruleForPhoneNumber:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) TUPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForBusinessID:(id)arg1;
- (id)initForEmail:(id)arg1;
- (id)initForPhoneNumber:(id)arg1;

@end
