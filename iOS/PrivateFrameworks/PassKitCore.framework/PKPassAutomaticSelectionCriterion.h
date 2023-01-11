//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface PKPassAutomaticSelectionCriterion : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _supportsExpress;
    NSString *_type;
    long long _technologyType;
    NSSet *_TCIs;
}

+ (id)expressModeForCriterion:(id)arg1;
+ (id)criterionForExpressMode:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool supportsExpress; // @synthesize supportsExpress=_supportsExpress;
@property(copy, nonatomic) NSSet *TCIs; // @synthesize TCIs=_TCIs;
@property(nonatomic) long long technologyType; // @synthesize technologyType=_technologyType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

