//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>

@class NSString;

@interface MPMediaPropertyPredicate <MPPProtobufferCoding>
{
    NSString *_property;
    id _value;
    long long _comparisonType;
}

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long comparisonType;
@property(copy, nonatomic) id value;
@property(copy, nonatomic) NSString *property;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
