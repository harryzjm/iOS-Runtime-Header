//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ARReferenceObject;

@interface ARObjectAnchor
{
    ARReferenceObject *_referenceObject;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) ARReferenceObject *referenceObject; // @synthesize referenceObject=_referenceObject;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)description;
- (_Bool)isTracked;
- (id)name;
- (id)initWithReferenceObject:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;

@end

