//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

@interface UICollectionView (VideosUI)
+ (id)_vui_indexPathsWithIndexSet:(id)arg1 andSection:(unsigned long long)arg2;
- (void)_vui_applyItemUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;
- (void)_vui_applySectionUpdateChanges:(id)arg1 applyChangeBlock:(CDUnknownBlockType)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3;
- (void)_vui_applyUpdateChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3 updateDataSourceBlock:(CDUnknownBlockType)arg4;
- (void)_vui_applyMoveChanges:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;
- (void)_vui_applyInsertChange:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;
- (void)_vui_applyDeleteChange:(id)arg1 inSection:(unsigned long long)arg2 applyChangeBlock:(CDUnknownBlockType)arg3;
- (void)vui_applySectionChangeSet:(id)arg1 updateDataSourceBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 applyChangeBlock:(CDUnknownBlockType)arg4 shouldWrapInUpdate:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 applyChangeBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 updateDataSourceBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)vui_applyChangeSet:(id)arg1 inSection:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)vui_applyChangeSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end

