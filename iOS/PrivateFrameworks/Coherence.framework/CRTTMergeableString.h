//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, ObjCReplica, ObjCVersion;

__attribute__((visibility("hidden")))
@interface CRTTMergeableString : NSObject
{
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _orderedSubstrings;
    unsigned long long _editCount;
    _Bool _cacheInvalid;
    CRTTMergeableString *_renamedString;
    NSObject *_context;
    ObjCVersion *_version;
    ObjCVersion *_addedByVersion;
    id _attributedString;
    NSUUID *_uuid;
    long long _localCounter;
    ObjCReplica *_addedByReplica;
    long long _addedByLocalCounter;
    void *_startNode;
    void *_endNode;
    long long _renameGeneration;
    struct TopoReplica _replica;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long renameGeneration; // @synthesize renameGeneration=_renameGeneration;
@property(nonatomic) void *endNode; // @synthesize endNode=_endNode;
@property(nonatomic) void *startNode; // @synthesize startNode=_startNode;
@property(nonatomic) long long addedByLocalCounter; // @synthesize addedByLocalCounter=_addedByLocalCounter;
@property(readonly, nonatomic) ObjCReplica *addedByReplica; // @synthesize addedByReplica=_addedByReplica;
@property(nonatomic) long long localCounter; // @synthesize localCounter=_localCounter;
@property(readonly, nonatomic) struct TopoReplica replica; // @synthesize replica=_replica;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) id attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) ObjCVersion *addedByVersion; // @synthesize addedByVersion=_addedByVersion;
@property(retain, nonatomic) ObjCVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSObject *context; // @synthesize context=_context;
- (void)finalizeTimestamps:(id)arg1;
- (_Bool)needToFinalizeTimestamps;
- (void)applyRenamesAndRetainOrRelease:(id)arg1 context:(id)arg2 alsoApplyAllRenames:(_Bool)arg3;
- (id)renamedIfAvailable;
- (id)fullyRenamed:(id)arg1;
- (id)temporaryConcurrentNames;
- (id)temporaryNamesExcludingSelf:(_Bool)arg1;
- (id)renamed:(id)arg1;
- (void)applyTimestampRenames:(id)arg1;
- (void)_apply:(id)arg1;
- (void)apply:(id)arg1 skipRetain:(_Bool)arg2;
- (void)useRenameIfAvailable;
- (id)dotDescription:(unsigned long long)arg1;
- (_Bool)graphIsEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)traverseUnordered:(CDUnknownBlockType)arg1;
- (void)sortSplitNodes;
- (_Bool)deltaMerge:(id)arg1;
- (_Bool)canDeltaMerge:(id)arg1;
- (unsigned long long)mergeWithString:(id)arg1 optimized:(_Bool)arg2;
- (_Bool)hasDeltaTo:(id)arg1 compareElements:(CDUnknownBlockType)arg2;
- (_Bool)canMergeString:(id)arg1;
- (void)coalesce;
- (void)updateSubstringIndexes;
- (void)updateAttributedStringAfterMerge;
- (void)invalidateCache;
- (void)_updateCache;
- (long long)substringCount;
- (void *)orderedSubstrings;
- (void *)splitTopoSubstring:(void *)arg1 atIndex:(unsigned int)arg2;
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;
- (unsigned long long)characterIndexForIndex:(id)arg1;
- (unsigned long long)_characterIndexForIndex:(id)arg1;
- (id)mergeableIndexForCharacterIndex:(long long)arg1 affinity:(unsigned long long)arg2;
- (void)enumerateIndexes:(CDUnknownBlockType)arg1;
- (void)getCharacterRanges:(void *)arg1 forSubstrings:(void *)arg2;
- (void)getSubstrings:(void *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;
- (void *)getSubstringBeforeTopoID:(struct TopoID)arg1;
- (void)getSubstrings:(void *)arg1 inOrderedSubstrings:(void *)arg2 forCharacterRange:(struct _NSRange)arg3;
- (void)getSubstrings:(void *)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)insertStorageLength:(long long)arg1 after:(void *)arg2 before:(void *)arg3 getStorage:(CDUnknownBlockType)arg4;
- (void)deleteSubstrings:(void *)arg1 withCharacterRanges:(void *)arg2;
- (void)addNewAddedByFor:(void *)arg1;
@property(readonly, nonatomic) _Bool isEmptyCRDT;
- (id)characterRangesForIDRange:(struct TopoIDRange)arg1;
- (id)characterRangesForMergeableRange:(id)arg1;
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;
- (id)characterRangesForSelection:(id)arg1;
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;
- (id)selectionForCharacterRanges:(id)arg1;
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)insertAtIndex:(long long)arg1 length:(long long)arg2 getStorage:(CDUnknownBlockType)arg3;
- (void)removeAll;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)replaceStorageInRange:(struct _NSRange)arg1 withStorage:(id)arg2;
- (unsigned long long)length;
- (id)objcReplica;
- (id)copyRenamedIfAvailable:(_Bool)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)deleteAllSubstrings;
- (void)dealloc;
- (void)stealReplicaFrom:(id)arg1;
- (id)initWithStorage:(id)arg1 uuid:(id)arg2 createInitialNodes:(_Bool)arg3;
- (id)initWithStorage:(id)arg1 uuid:(id)arg2;
- (_Bool)saveSubstrings:(void *)arg1 encoder:(id)arg2 error:(id *)arg3;
- (_Bool)saveToEncoder:(id)arg1 error:(id *)arg2;
- (id)initWithDecoder:(id)arg1 error:(id *)arg2;
- (void)_deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3 same:(CDUnknownBlockType)arg4;
- (void)deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3 same:(CDUnknownBlockType)arg4;
- (void)deltaTo:(id)arg1 edited:(CDUnknownBlockType)arg2 unedited:(CDUnknownBlockType)arg3;
- (id)undoCommandToChangeTo:(id)arg1 unedited:(CDUnknownBlockType)arg2;
- (void)undeleteSubstrings:(void *)arg1;
- (_Bool)hasAllIDsIn:(void *)arg1;

@end

