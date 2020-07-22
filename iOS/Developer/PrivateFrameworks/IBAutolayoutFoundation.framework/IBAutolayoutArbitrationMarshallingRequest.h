//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface IBAutolayoutArbitrationMarshallingRequest
{
    NSDictionary *_arbitrationOptions;
}

+ (id)requestWithMarshallableObjectPackage:(id)arg1 arbitrationUnit:(id)arg2 arbitrationOptions:(id)arg3;
@property(readonly, nonatomic) NSDictionary *arbitrationOptions; // @synthesize arbitrationOptions=_arbitrationOptions;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2 arbitrationUnit:(id)arg3 arbitrationOptions:(id)arg4;

@end

