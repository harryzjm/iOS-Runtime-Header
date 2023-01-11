//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBHIconModel;

@interface SBHIconStateUnarchiver : NSObject
{
    _Bool _removesEmptyFolders;
    id _archive;
    SBHIconModel *_iconSource;
}

+ (void)_getFolderDisplayName:(id *)arg1 defaultDisplayName:(id *)arg2 forRepresentation:(id)arg3 iconSource:(id)arg4;
@property(readonly, nonatomic) SBHIconModel *iconSource; // @synthesize iconSource=_iconSource;
@property(readonly, nonatomic) id archive; // @synthesize archive=_archive;
@property(nonatomic) _Bool removesEmptyFolders; // @synthesize removesEmptyFolders=_removesEmptyFolders;
- (void).cxx_destruct;
- (id)_listFromRepresentation:(id)arg1 withMaxIconCount:(unsigned long long)arg2 identifier:(id)arg3 context:(id)arg4 overflow:(id)arg5;
- (id)_folderFromRepresentation:(id)arg1 withContext:(id)arg2;
- (void)_getFolderDisplayName:(id *)arg1 defaultDisplayName:(id *)arg2 forRepresentation:(id)arg3;
- (Class)_folderClassForFolderType:(id)arg1 context:(id)arg2;
- (id)_iconFromRepresentation:(id)arg1 withContext:(id)arg2;
- (id)_newFolderIconForFolder:(id)arg1;
- (id)_nodeFromRepresentation:(id)arg1 context:(id)arg2;
- (id)unarchive;
- (id)initWithArchive:(id)arg1 iconSource:(id)arg2;

@end
