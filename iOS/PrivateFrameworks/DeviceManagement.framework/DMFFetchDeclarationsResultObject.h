//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchDeclarationsResultObject : CATTaskResultObject
{
    NSArray *_payloadDescriptions;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *payloadDescriptions; // @synthesize payloadDescriptions=_payloadDescriptions;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
