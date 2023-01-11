//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VMUCallTreeNode : NSObject
{
    VMUCallTreeNode *_parent;
    NSString *_name;
    unsigned long long _address;
    unsigned long long _numBytes;
    unsigned int _count;
    unsigned int _numChildren;
    void *_children;
}

+ (id)makeFakeRootForNode:(id)arg1;
+ (id)nodeWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2;
+ (id)rootForSamples:(id)arg1 symbolicator:(struct _CSTypeRef)arg2 sampler:(id)arg3 options:(unsigned long long)arg4;
- (void).cxx_destruct;
- (id)pruneMallocSize:(unsigned long long)arg1;
- (id)pruneCount:(unsigned int)arg1;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(_Bool)arg1;
- (id)chargeLibrariesToCallers:(id)arg1 keepBoundaries:(_Bool)arg2;
- (id)chargeLibrariesInSet:(id)arg1 toCaller:(id)arg2 parentLibrary:(id)arg3;
- (id)filterOutSymbols:(id)arg1;
- (id)filterOutSymbols:(id)arg1 required:(id)arg2;
- (id)invertedNode;
- (void)printCallTree;
- (void)printCallTreeToFile:(struct __sFILE *)arg1;
- (void)printCallTreeToFile:(struct __sFILE *)arg1 options:(unsigned long long)arg2;
- (id)stringFromCallTreeIndentIfNoBranches:(_Bool)arg1;
- (id)stringFromCallTreeIndentIfNoBranches:(_Bool)arg1 showPseudoNodes:(_Bool)arg2;
- (_Bool)callTreeHasBranches;
- (id)fullOutputWithThreshold:(unsigned int)arg1;
- (id)fullOutputWithThreshold:(unsigned int)arg1 showPseudoNodes:(_Bool)arg2;
- (void)countFunctionOccurrencesInTree:(id)arg1;
- (void)_printCallTreeToFile:(struct __sFILE *)arg1 cumulativeOutput:(id)arg2 indentString:(id)arg3 branchPointCount:(unsigned int)arg4 topFunctions:(id)arg5 options:(unsigned long long)arg6;
- (id)largestTopOfStackPath;
- (id)sortedChildren;
- (id)sortedChildrenWithPseudoNode;
- (id)sortedChildrenWithPseudoNode:(id)arg1 withCompare:(SEL)arg2;
- (id)pseudoNodeTopOfStackChild;
- (long long)comparePuttingMainThreadFirst:(id)arg1;
- (long long)comparePuttingRetainCycleNodesAtTop:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compareSizeAndCount:(id)arg1;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2;
- (id)findOrAddChildWithName:(id)arg1 address:(unsigned long long)arg2 nodeSearchType:(int)arg3 isLeafNode:(_Bool)arg4;
- (void)parseNameIntoSymbol:(id *)arg1 library:(id *)arg2 loadAddress:(unsigned long long *)arg3 offset:(unsigned long long *)arg4 address:(unsigned long long *)arg5 suffix:(id *)arg6;
- (id)nameWithStringsForSymbol:(id)arg1 library:(id)arg2 loadAddress:(id)arg3 offset:(id)arg4 address:(id)arg5 suffix:(id)arg6;
- (id)nameWithoutOffset;
- (_Bool)isMallocBlockContentNode;
- (_Bool)symbolNameIsUnknown;
- (id)pseudoName;
- (_Bool)isPseudo;
- (id)browserName;
- (void)getBrowserName:(id)arg1;
- (id)name;
- (unsigned long long)numBytes;
- (unsigned int)count;
- (unsigned long long)address;
- (id)parent;
- (id)description;
- (void)dealloc;
- (unsigned int)sumOfChildCounts;
- (void)addChildCountsIntoNode;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (id)allChildren;
- (id)childAtIndex:(unsigned int)arg1;
- (unsigned int)numChildren;
- (id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4;

@end

