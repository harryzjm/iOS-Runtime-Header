//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/DNDModeAssertionInvalidation.h>

@class NSString;

@interface DNDSModeAssertionInvalidation : DNDModeAssertionInvalidation
{
    NSString *_clientIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (id)replacementObjectForCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 assertion:(id)arg2 reason:(unsigned long long)arg3;

@end

