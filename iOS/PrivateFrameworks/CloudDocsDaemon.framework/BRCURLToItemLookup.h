//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession, BRCDocumentItem, BRCLocalItem, BRCPQLConnection, BRCRelativePath, BRCServerItem, NSString, NSURL;

@interface BRCURLToItemLookup : NSObject <NSSecureCoding>
{
    BRCAccountSession *_session;
    union {
        struct {
            unsigned int parentItem:1;
            unsigned int relpath:1;
            unsigned int pathMatch:1;
            unsigned int faultedMatch:1;
            unsigned int byIDMatch:1;
            unsigned int reservedMatch:1;
            unsigned int parentPath:1;
        } ;
        unsigned int value;
    } _hasFetched;
    BRCRelativePath *__relpath;
    BRCPQLConnection *_db;
    _Bool _allowAppLibraryRoot;
    NSURL *_url;
    BRCRelativePath *_parentRelpath;
    BRCLocalItem *_parentItem;
    NSString *_filename;
    NSString *_parentPath;
    BRCLocalItem *_byIDLocalItem;
    BRCServerItem *_byIDServerItem;
    unsigned long long _byIDDiffs;
    BRCLocalItem *_byPathLocalItem;
    BRCServerItem *_byPathServerItem;
    unsigned long long _byPathDiffs;
    BRCDocumentItem *_faultedLocalItem;
    BRCServerItem *_faultedServerItem;
    BRCRelativePath *_faultedRelpath;
    unsigned long long _faultedDiffs;
    BRCLocalItem *_reservedLocalItem;
    BRCServerItem *_reservedServerItem;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) BRCRelativePath *parentRelpath; // @synthesize parentRelpath=_parentRelpath;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
- (void)clearReservedItem;
@property(readonly, nonatomic) BRCServerItem *reservedServerItem; // @synthesize reservedServerItem=_reservedServerItem;
@property(readonly, nonatomic) BRCLocalItem *reservedLocalItem; // @synthesize reservedLocalItem=_reservedLocalItem;
@property(readonly, nonatomic) CDStruct_177058d5 reservedMatch;
- (void)_fetchReservedPathMatch;
@property(readonly, nonatomic) unsigned short pathType;
- (void)clearFaultedItem;
@property(readonly, nonatomic) unsigned long long faultedDiffs; // @synthesize faultedDiffs=_faultedDiffs;
@property(readonly, nonatomic) BRCDocumentItem *faultedLocalItem; // @synthesize faultedLocalItem=_faultedLocalItem;
@property(readonly, nonatomic) BRCServerItem *faultedServerItem; // @synthesize faultedServerItem=_faultedServerItem;
@property(readonly, nonatomic) BRCRelativePath *faultedRelpath; // @synthesize faultedRelpath=_faultedRelpath;
- (void)_fetchFaultedMatch;
@property(readonly, nonatomic) CDStruct_177058d5 faultedMatch;
- (void)refreshFaultedDiffs;
- (void)clearByIDItem;
@property(readonly, nonatomic) unsigned long long byIDDiffs; // @synthesize byIDDiffs=_byIDDiffs;
@property(readonly, nonatomic) BRCServerItem *byIDServerItem; // @synthesize byIDServerItem=_byIDServerItem;
@property(readonly, nonatomic) BRCRelativePath *relpath;
@property(readonly, nonatomic) BRCLocalItem *byIDLocalItem; // @synthesize byIDLocalItem=_byIDLocalItem;
@property(readonly, nonatomic) CDStruct_177058d5 byIDMatch;
- (void)_fetchIDMatch;
- (void)refreshByIDDiffs;
- (void)clearByPathItem;
@property(readonly, nonatomic) unsigned long long byPathDiffs; // @synthesize byPathDiffs=_byPathDiffs;
@property(readonly, nonatomic) BRCServerItem *byPathServerItem; // @synthesize byPathServerItem=_byPathServerItem;
@property(readonly, nonatomic) BRCRelativePath *byPathRelpath;
@property(readonly, nonatomic) BRCLocalItem *byPathLocalItem; // @synthesize byPathLocalItem=_byPathLocalItem;
@property(readonly, nonatomic) CDStruct_177058d5 byPathMatch;
- (void)_fetchPathMatch;
- (void)refreshByPathDiffs;
- (void)_fetchRelPath;
@property(readonly, nonatomic) BRCLocalItem *parentItem; // @synthesize parentItem=_parentItem;
- (void)closePaths;
- (_Bool)resolveParentAndKeepOpenMustExist:(_Bool)arg1 errcode:(int *)arg2;
- (_Bool)resolveAndKeepOpenWithError:(id *)arg1;
- (id)initWithURL:(id)arg1 session:(id)arg2;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(_Bool)arg2 session:(id)arg3 db:(id)arg4;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(_Bool)arg2 session:(id)arg3;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)matchLookupItemsWithDisk;
- (void)handleReservedPathMatchesIfNeeded;
- (void)markPathMatchLostIfLocationDoesntMatch:(CDStruct_177058d5 *)arg1;
- (void)didApplyChangesAtPath:(id)arg1 filename:(id)arg2 li:(id)arg3 si:(id)arg4;
- (_Bool)_appliedOrDownloadContentIfNecessary:(id)arg1 si:(id)arg2 applySchedulerState:(int *)arg3;
- (_Bool)_applyOrEvictLosersIfNecessary:(id)arg1 si:(id)arg2 url:(id)arg3 addedLosers:(id)arg4 removedLosers:(id)arg5 updatedAddition:(_Bool *)arg6 applySchedulerState:(int *)arg7;
- (_Bool)_applyOrDownloadThumbnailIfNecessary:(id)arg1 si:(id)arg2 url:(id)arg3 updatedAddition:(_Bool *)arg4 applySchedulerState:(int *)arg5;
- (_Bool)tryToDeleteItemInNamespace:(unsigned char)arg1;
- (_Bool)trashItemIfNecessary:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
- (void)tryToUpdateItemInNamespace:(unsigned char)arg1 withDstLookup:(id)arg2;
- (_Bool)copyItemAtURLToGenstore:(id)arg1 forItem:(id)arg2 error:(id *)arg3;
- (_Bool)_bouncePathMatchIfNecessaryWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 applyNamespace:(unsigned char)arg5;
- (_Bool)_shouldBounceSourceItemWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 applyNamespace:(unsigned char)arg5 urlMatch:(CDStruct_177058d5 *)arg6;
- (int)_computeURLMatchWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 applyNamespace:(unsigned char)arg5 urlMatch:(CDStruct_177058d5 *)arg6;
- (_Bool)_canUpdatePathMatch:(const CDStruct_177058d5 *)arg1 hasAdditionsToApply:(_Bool)arg2;
- (_Bool)_removeDirectory:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (void)_moveMissingItemAsideInNamespace:(unsigned char)arg1;
- (CDStruct_177058d5)_pathMatchInNamespace:(unsigned char)arg1;
- (void)_clearNamespace:(unsigned char)arg1;
- (_Bool)_bounceBouncesHiddenByFault:(id)arg1;

@end
