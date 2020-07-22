//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, NSUUID, TSPComponent, TSPObjectContext, TSPUnknownContent, TSUUUIDPath;
@protocol TSPObjectDelegate;

__attribute__((visibility("hidden")))
@interface TSPObject : NSObject
{
    _Atomic long long _identifier;
    _Atomic long long _modifyObjectToken;
    NSUUID *_UUID;
    long long _unarchiverIdentifier;
    TSPUnknownContent *_unknownContent;
    TSPComponent *_component;
    id <TSPObjectDelegate> _delegate;
}

+ (_Bool)tsp_isTransientObjectIdentifier:(long long)arg1;
+ (_Bool)needsObjectUUID;
+ (Class)classForUnarchiver:(id)arg1;
+ (void)performUpgradeUsingBlock:(CDUnknownBlockType)arg1;
+ (id)tsp_deserializeFromURL:(id)arg1 options:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)tsp_deserializeFromData:(id)arg1 options:(id)arg2 context:(id)arg3 error:(id *)arg4;
@property(nonatomic) __weak id <TSPObjectDelegate> tsp_delegate; // @synthesize tsp_delegate=_delegate;
@property(nonatomic) __weak TSPComponent *tsp_component; // @synthesize tsp_component=_component;
@property(readonly, nonatomic) TSPUnknownContent *tsp_unknownContent; // @synthesize tsp_unknownContent=_unknownContent;
@property(readonly, nonatomic) long long tsp_unarchiverIdentifier; // @synthesize tsp_unarchiverIdentifier=_unarchiverIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool needsArchiving;
@property(nonatomic) long long tsp_modifyObjectToken;
@property(nonatomic) long long tsp_identifier;
- (id)tsp_descriptionWithDepth:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *tsp_description;
- (void)resetObjectUUIDWithoutUpdatingObjectUUIDMap;
- (void)setObjectUUID:(id)arg1 updatingObjectUUIDMap:(_Bool)arg2;
@property(copy, nonatomic) NSUUID *objectUUID;
- (void)didFinishUnarchiving;
- (_Bool)validatedLoadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initBaseObjectFromUnarchiver:(id)arg1;
@property(readonly, nonatomic) _Bool tsp_isPersisted;
@property(readonly, nonatomic) _Bool isCommandObject;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
@property(readonly, nonatomic) unsigned int delayedArchivingPriority;
@property(readonly, nonatomic) _Bool shouldDelayArchiving;
@property(readonly, nonatomic) _Bool allowsImplicitComponentOwnership;
@property(readonly, nonatomic) TSPObject *componentRootObject;
- (void)willModifyToComponentRootObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long allowedObjectTargetTypes;
@property(readonly, nonatomic) _Bool storeOutsideObjectArchive;
@property(readonly, nonatomic) _Bool isComponentRoot;
@property(readonly, nonatomic) NSString *packageLocator;
- (void)willModifyForUpgrade;
- (void)willModify;
- (void)performBlockIgnoringModifications:(CDUnknownBlockType)arg1;
- (id)initDocumentObjectWithContext:(id)arg1;
- (void)tsp_commonInitBaseObjectWithContext:(id)arg1;
- (void)commonInit;
- (id)initBaseObjectWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) TSPObjectContext *context;
- (id)init;
- (id)tsp_serializeToURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tsp_writeObjectNSDataRepresentation:(id)arg1 andData:(id)arg2 toURL:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)tsp_serializeToDataWithOptions:(id)arg1 dataReferences:(id *)arg2 error:(id *)arg3;
- (id)tsp_serializeToDataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)tsp_deepCopyWithOptions:(id)arg1;
- (void)tsp_deepCopyWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 objectMap:(id *)arg3 error:(id *)arg4;
- (void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)tsp_referencedObjectUUIDs;
- (id)tsp_referencedObjects;
- (id)tsp_referencedData;
- (id)tsp_objectInfoWithDepth:(unsigned long long)arg1;
- (void)didInitFromSOS;
- (void)willBeRemovedFromDocumentWithContext:(id)arg1;
- (void)wasAddedToDocumentDuringImportWithContext:(id)arg1;
- (void)wasAddedToDocumentDuringUnarchiveWithContext:(id)arg1;
- (void)wasAddedToDocumentWithContext:(id)arg1;
- (void)wasAddedToDocumentWithContext:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) TSUUUIDPath *objectUUIDPath;
@property(readonly, nonatomic) _Bool tsp_isInDocument;
- (_Bool)documentIsRTL;
- (id)objectLocale;
- (id)documentRoot;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)owningDocument;

@end

