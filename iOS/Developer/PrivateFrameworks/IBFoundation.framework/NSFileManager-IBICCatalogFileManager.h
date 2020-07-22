//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

#import <IBFoundation/IBICCatalogFileManager-Protocol.h>

@class NSString;

@interface NSFileManager (IBICCatalogFileManager) <IBICCatalogFileManager>
+ (id)ib_defaultManager;
- (void)ib_endBatchEdits;
- (void)ib_startBatchEdits;
- (_Bool)ib_moveItemsAtPaths:(id)arg1 toPaths:(id)arg2 error:(id *)arg3;
- (_Bool)ib_copyItemsAtPaths:(id)arg1 toPaths:(id)arg2 error:(id *)arg3;
- (_Bool)ib_addItemsAtPaths:(id)arg1 force:(_Bool)arg2 error:(id *)arg3;
- (_Bool)ib_removeItemsAtPaths:(id)arg1 moveToTrash:(_Bool)arg2 error:(id *)arg3;
- (_Bool)ib_createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

