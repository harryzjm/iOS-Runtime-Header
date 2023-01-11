//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface PGGraphConcreteEdge
{
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (void).cxx_destruct;
- (id)label;
@property(nonatomic) float weight; // @synthesize weight=_weight;
- (unsigned short)domain;
- (void)mergeProperties:(id)arg1;
- (void)setLocalProperties:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllProperties;
- (void)removePropertyForKey:(id)arg1;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (id)propertyDictionary;
- (id)propertyKeys;
- (unsigned long long)propertiesCount;
- (_Bool)hasProperties;
- (id)propertyForKey:(id)arg1;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5;

@end
