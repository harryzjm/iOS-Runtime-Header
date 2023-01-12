//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class KGElementIdentifierSet, MAGraphReference, NSSet;
@protocol MAGraphProxy;

@interface MAElementCollection : NSObject <NSCopying>
{
    MAGraphReference *_graphReference;
    KGElementIdentifierSet *_elementIdentifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) KGElementIdentifierSet *elementIdentifiers; // @synthesize elementIdentifiers=_elementIdentifiers;
@property(readonly) MAGraphReference *graphReference; // @synthesize graphReference=_graphReference;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)containsCollection:(id)arg1;
- (_Bool)isSubsetOfCollection:(id)arg1;
- (_Bool)intersectsCollection:(id)arg1;
- (id)collectionBySubtracting:(id)arg1;
- (id)collectionByIntersecting:(id)arg1;
- (id)collectionByFormingUnionWith:(id)arg1;
- (id)_anyElement;
- (id)temporarySet;
- (id)temporaryArray;
- (id)set;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)array;
- (id)filteredCollectionUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDoublePropertyValuesForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStringPropertyValuesForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateIntegerPropertyValuesForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateIdentifiersAsCollectionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *labels;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly) id <MAGraphProxy> graph;
- (id)initWithSet:(id)arg1 graph:(id)arg2;
- (id)initWithArray:(id)arg1 graph:(id)arg2;
- (id)initWithGraph:(id)arg1;
- (id)initWithGraph:(id)arg1 elementIdentifiers:(id)arg2;
- (id)initWithGraphReference:(id)arg1 elementIdentifiers:(id)arg2;

@end
