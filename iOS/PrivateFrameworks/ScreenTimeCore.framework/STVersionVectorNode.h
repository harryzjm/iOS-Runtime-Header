//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>
#import <ScreenTimeCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface STVersionVectorNode : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _count;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (id)debugDescription;
- (id)description;
- (long long)compare:(id)arg1;
- (void)join:(id)arg1;
- (void)increment;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
