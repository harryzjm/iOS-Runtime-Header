//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _REWidthFeatureTransform
{
    unsigned long long _mask;
    unsigned long long _width;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)_validateWithFeatures:(id)arg1;
- (id)_transform:(id)arg1;
- (unsigned long long)_featureCount;
- (long long)_bitCount;
- (unsigned long long)_outputType;
- (id)initWithWidth:(unsigned long long)arg1;

@end
