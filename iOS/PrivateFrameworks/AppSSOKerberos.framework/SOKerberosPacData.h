//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SOKerberosPacData : NSObject
{
    _Bool _passwordNeverExpires;
    NSDate *_passwordLastSet;
    NSDate *_passwordCanChange;
    NSDate *_passwordMustChange;
    NSString *_homeDirectory;
    NSString *_effectiveName;
    NSString *_fullName;
}

- (void).cxx_destruct;
@property(retain) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain) NSString *effectiveName; // @synthesize effectiveName=_effectiveName;
@property(retain) NSString *homeDirectory; // @synthesize homeDirectory=_homeDirectory;
@property _Bool passwordNeverExpires; // @synthesize passwordNeverExpires=_passwordNeverExpires;
@property(retain) NSDate *passwordMustChange; // @synthesize passwordMustChange=_passwordMustChange;
@property(retain) NSDate *passwordCanChange; // @synthesize passwordCanChange=_passwordCanChange;
@property(retain) NSDate *passwordLastSet; // @synthesize passwordLastSet=_passwordLastSet;
- (id)description;
- (id)convertFromFileTime:(unsigned long long)arg1;
- (id)initWithValidationInfo:(CDStruct_276845a0 *)arg1;

@end
