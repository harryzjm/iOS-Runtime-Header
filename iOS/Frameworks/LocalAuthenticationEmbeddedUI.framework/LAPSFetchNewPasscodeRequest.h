//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAPSPasscodeType, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface LAPSFetchNewPasscodeRequest : NSObject
{
    _Bool _isPasscodeRecoverySupported;
    _Bool _isPasscodeRecoveryEnabled;
    _Bool _isPasscodeRecoveryRestricted;
    LAPSPasscodeType *_passcodeType;
    NSOrderedSet *_allowedPasscodeTypes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPasscodeRecoveryRestricted; // @synthesize isPasscodeRecoveryRestricted=_isPasscodeRecoveryRestricted;
@property(nonatomic) _Bool isPasscodeRecoveryEnabled; // @synthesize isPasscodeRecoveryEnabled=_isPasscodeRecoveryEnabled;
@property(nonatomic) _Bool isPasscodeRecoverySupported; // @synthesize isPasscodeRecoverySupported=_isPasscodeRecoverySupported;
@property(retain, nonatomic) NSOrderedSet *allowedPasscodeTypes; // @synthesize allowedPasscodeTypes=_allowedPasscodeTypes;
@property(retain, nonatomic) LAPSPasscodeType *passcodeType; // @synthesize passcodeType=_passcodeType;
- (id)init;

@end

