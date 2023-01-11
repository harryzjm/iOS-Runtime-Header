//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PairedUnlock/NSSecureCoding-Protocol.h>

@interface PURemotePasscodePolicy : NSObject <NSSecureCoding>
{
    _Bool _modificationAllowed;
    unsigned long long _passcodeMinimumLength;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long passcodeMinimumLength; // @synthesize passcodeMinimumLength=_passcodeMinimumLength;
@property(nonatomic, getter=isModificationAllowed) _Bool modificationAllowed; // @synthesize modificationAllowed=_modificationAllowed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqual:(id)arg1;

@end
