//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Symbolication/NSObject-Protocol.h>

@class NSString, VMUClassInfoMap, VMUScanOverlay, VMUVMRegion;

@protocol VMUCommonGraphInterface <NSObject>
@property(readonly, nonatomic) unsigned long long physicalFootprintPeak;
@property(readonly, nonatomic) unsigned long long physicalFootprint;
@property(readonly, nonatomic) NSString *binaryImagesDescription;
@property(readonly, nonatomic) NSString *processDescriptionString;
@property(readonly, nonatomic) NSString *processName;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize;
@property(readonly, nonatomic) unsigned int nodeCount;
@property(readonly, nonatomic) unsigned int regionCount;
@property(readonly, nonatomic) unsigned int zoneCount;
@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property(readonly, nonatomic) unsigned int vmPageSize;
@property(readonly, nonatomic) int pid;
- (void *)contentForNode:(unsigned int)arg1;
- (NSString *)shortLabelForNode:(unsigned int)arg1;
- (NSString *)labelForNode:(unsigned int)arg1;
- (_Bool)hasLabelsForNodes;
- (void)refineTypesWithOverlay:(VMUScanOverlay *)arg1;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (unsigned int)enumerateReferencesWithBlock:(void (^)(unsigned int, unsigned int, unsigned int, struct, _Bool *))arg1;
- (unsigned int)enumerateRegionsWithBlock:(void (^)(VMUVMRegion *, _Bool *))arg1;
- (unsigned int)enumerateMarkedObjects:(void *)arg1 withBlock:(void (^)(unsigned int, struct, _Bool *))arg2;
- (unsigned int)enumerateObjectsWithBlock:(void (^)(unsigned int, struct, _Bool *))arg1;
- (VMUVMRegion *)vmuVMRegionForAddress:(unsigned long long)arg1;
- (VMUVMRegion *)vmuVMRegionForNode:(unsigned int)arg1;
- (NSString *)zoneNameForIndex:(unsigned int)arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
- (void *)copyUserMarked;
@end

