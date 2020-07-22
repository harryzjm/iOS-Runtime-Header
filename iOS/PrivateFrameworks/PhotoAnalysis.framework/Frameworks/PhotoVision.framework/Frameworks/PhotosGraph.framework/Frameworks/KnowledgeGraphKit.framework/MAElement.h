//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class MAGraph, NSMutableDictionary, NSString;

@interface MAElement : NSObject <NSCopying>
{
    unsigned int _identifier;
    unsigned short _domain;
    unsigned short _label;
    NSMutableDictionary *_properties;
    MAGraph *_graph;
    float _weight;
    _Bool _needsPropertiesLoading;
}

@property(nonatomic) _Bool needsPropertiesLoading; // @synthesize needsPropertiesLoading=_needsPropertiesLoading;
@property(readonly, nonatomic) unsigned short _label; // @synthesize _label;
@property(nonatomic) __weak MAGraph *graph; // @synthesize graph=_graph;
@property(nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) unsigned short domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)_memoryFootprint:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)shortDescription;
- (id)propertiesVisualStringForKeys:(id)arg1;
- (void)invalidateMemoryCaches;
- (void)setProperties:(id)arg1;
- (void)_setPersistentStoreProperties:(id)arg1;
- (void)_setLocalProperties:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)_setPersistentStorePropertyValue:(id)arg1 forKey:(id)arg2;
- (void)removeAllProperties;
- (void)_removeAllLocalProperties;
- (void)_removeAllPersistentStoreProperties;
- (void)removePropertyForKey:(id)arg1;
- (void)_removePersistentStorePropertyForKey:(id)arg1;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (id)propertiesDictionary;
- (id)propertiesKeys;
- (unsigned long long)propertiesCount;
- (_Bool)hasProperties:(id)arg1;
- (_Bool)hasPropertiesForKeys:(id)arg1;
- (_Bool)hasPropertyForKey:(id)arg1 kindOfClass:(Class)arg2;
- (_Bool)hasPropertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
- (id)propertyForKey:(id)arg1;
- (void)_loadPropertiesIfNeeded;
- (void)_loadPersistentStoreProperties;
- (void)_updatePersistentStoreElement;
- (void)_setLabelString:(id)arg1;
@property(readonly, nonatomic) id _labelKey;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly) _Bool isAbstract;
- (_Bool)matchesElement:(id)arg1 includingProperties:(_Bool)arg2;
- (_Bool)isEqualToElementProperties:(id)arg1;
- (_Bool)isEqualToElement:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(unsigned short)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)init;

@end

