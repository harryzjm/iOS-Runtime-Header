//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMemoryNodeProtocol-Protocol.h>

@class NSString, PGGraphFeatureNodeCollection, PGGraphMomentNodeCollection;

@interface PGGraphMemory : NSObject <PGMemoryNodeProtocol>
{
    unsigned long long _memoryCategory;
    unsigned long long _memoryCategorySubcategory;
    PGGraphMomentNodeCollection *_memoryMomentNodes;
    PGGraphFeatureNodeCollection *_memoryFeatureNodes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes; // @synthesize memoryFeatureNodes=_memoryFeatureNodes;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes; // @synthesize memoryMomentNodes=_memoryMomentNodes;
@property(readonly, nonatomic) unsigned long long memoryCategorySubcategory; // @synthesize memoryCategorySubcategory=_memoryCategorySubcategory;
@property(readonly, nonatomic) unsigned long long memoryCategory; // @synthesize memoryCategory=_memoryCategory;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *uniqueMemoryIdentifier;
- (id)memoryFeatureNodesInGraph:(id)arg1;
- (id)initWithMemoryCategory:(unsigned long long)arg1 memoryCategorySubcategory:(unsigned long long)arg2 momentNodes:(id)arg3 featureNodes:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
