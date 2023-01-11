//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PKDeviceVersionRange : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_minimum;
    NSString *_maximum;
    NSArray *_models;
    PKDeviceVersionRange *_companion;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKDeviceVersionRange *companion; // @synthesize companion=_companion;
@property(readonly, nonatomic) NSArray *models; // @synthesize models=_models;
@property(readonly, nonatomic) NSString *maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) NSString *minimum; // @synthesize minimum=_minimum;
- (id)description;
- (_Bool)_matchesDeviceVersion:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToDeviceVersionRange:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asDictionary;
- (id)initWithDictionary:(id)arg1;

@end
