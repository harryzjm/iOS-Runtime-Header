//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCStatInfo.h"

@class BRFieldStructureSignature, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCLocalStatInfo : BRCStatInfo
{
    unsigned long long _localChangeCount;
    NSString *_oldVersionIdentifier;
    NSString *_fpCreationItemIdentifier;
    NSString *_bouncedLogicalName;
    unsigned char _itemScope;
    NSNumber *_processingStamp;
}

+ (id)_finderTagsFromImportObject:(id)arg1;
+ (BOOL)modeFromImportObject:(id)arg1 isPackageFault:(_Bool)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fpCreationItemIdentifier; // @synthesize fpCreationItemIdentifier=_fpCreationItemIdentifier;
@property(readonly, nonatomic) NSString *oldVersionIdentifier; // @synthesize oldVersionIdentifier=_oldVersionIdentifier;
@property(readonly, nonatomic) unsigned long long localChangeCount; // @synthesize localChangeCount=_localChangeCount;
@property(retain, nonatomic) NSString *rawBouncedLogicalName; // @synthesize rawBouncedLogicalName=_bouncedLogicalName;
@property(nonatomic) unsigned char itemScope; // @synthesize itemScope=_itemScope;
@property(readonly, nonatomic) NSNumber *processingStamp; // @synthesize processingStamp=_processingStamp;
- (_Bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (void)_updateStatMeta:(id)arg1;
- (void)_markDeadAsSharedTopLevelItemWithDocumentsItemID:(id)arg1;
- (void)_markDead;
- (void)_markZombieForCrossZoneMove;
- (unsigned long long)diffAgainstLocalInfo:(id)arg1;
- (void)_moveItemAsideWithUUIDString;
- (void)_setCKInfo:(id)arg1;
- (void)_setItemScope:(unsigned char)arg1;
- (void)setFilename:(id)arg1 forceBouncedLogicalName:(id)arg2 serverName:(id)arg3;
- (void)setFilename:(id)arg1;
@property(readonly, nonatomic) NSString *filename;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initAsShareAcceptFaultWithName:(id)arg1 mode:(BOOL)arg2 isDirectory:(_Bool)arg3;
- (id)description;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
@property(readonly, nonatomic) NSString *logicalNameWithoutLocalBounce;
- (id)logicalName;
- (void)_clearBouncedName;
- (void)bumpLocalChangeCount;
- (void)clearCKInfo;
- (void)updateFromImportObject:(id)arg1 onlyContentDependentProperties:(_Bool)arg2;
- (void)_updateStatMetaFromServer:(id)arg1;
- (id)initWithImportObject:(id)arg1 error:(id *)arg2;
- (void)updateWithFileSystemFlags:(unsigned long long)arg1 ignoreExecutable:(_Bool)arg2;
- (void)_updateStatAliasMeta:(id)arg1;
@property(readonly, nonatomic) BRFieldStructureSignature *versionSignature;
- (id)initWithLocalStatInfo:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (void)_markChildPropagationComplete;
- (void)_markNeedsPropertiesPropagatedToChildren;

@end

