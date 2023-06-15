//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocsDaemon/NSCopying-Protocol.h>

@class BRCAccountSession, BRCClientZone, BRCItemGlobalID, BRCItemID, BRCServerZone, BRCStatInfo, BRCUserRowID;

@protocol BRCItem <NSCopying>
@property(nonatomic) unsigned long long sharingOptions;
@property(readonly, nonatomic) BRCClientZone *clientZone;
@property(readonly, nonatomic) BRCServerZone *serverZone;
@property(readonly, nonatomic) BRCAccountSession *session;
@property(readonly, nonatomic) BRCUserRowID *ownerKey;
@property(readonly, nonatomic) BRCStatInfo *st;
@property(readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property(readonly, nonatomic) BRCItemID *itemID;
@property(readonly, nonatomic) _Bool isChildSharedItem;
@property(readonly, nonatomic) _Bool isTopLevelSharedItem;
@property(readonly, nonatomic) _Bool isSharedToMeChildItem;
@property(readonly, nonatomic) _Bool isSharedToMeTopLevelItem;
@property(readonly, nonatomic) _Bool isSharedToMe;
@property(readonly, nonatomic) _Bool isShared;
@property(readonly, nonatomic) _Bool hasShareIDAndIsOwnedByMe;
@property(readonly, nonatomic) _Bool isSharedByMe;
@property(readonly, nonatomic) _Bool isOwnedByMe;
@property(readonly, nonatomic) _Bool isFinderBookmark;
@property(readonly, nonatomic) _Bool isSymLink;
@property(readonly, nonatomic) _Bool isZoneRoot;
@property(readonly, nonatomic) _Bool isFSRoot;
@property(readonly, nonatomic) _Bool isDirectoryFault;
@property(readonly, nonatomic) _Bool isDirectory;
@property(readonly, nonatomic) _Bool isDocument;
@property(readonly, nonatomic) _Bool isPackage;
@property(readonly, nonatomic) _Bool isBRAlias;
@property(readonly, nonatomic) _Bool isLive;
@property(readonly, nonatomic) _Bool isDead;
- (_Bool)validateLoggingToFile:(struct __sFILE *)arg1;
@end

