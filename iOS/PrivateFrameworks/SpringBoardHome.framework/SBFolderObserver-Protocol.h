//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSArray, NSIndexSet, NSSet, SBFolder, SBIcon, SBIconListModel;

@protocol SBFolderObserver <NSObject>

@optional
- (void)folderDisplayNameDidChange:(SBFolder *)arg1;
- (void)folder:(SBFolder *)arg1 list:(SBIconListModel *)arg2 didInvalidateLayoutWithGridCellInfoOptions:(unsigned long long)arg3;
- (void)folderIconStateDidDirty:(SBFolder *)arg1;
- (void)folder:(SBFolder *)arg1 listHiddenDidChange:(SBIconListModel *)arg2;
- (void)folder:(SBFolder *)arg1 listHiddenWillChange:(SBIconListModel *)arg2;
- (void)folder:(SBFolder *)arg1 didMoveIcon:(SBIcon *)arg2;
- (void)folder:(SBFolder *)arg1 didReplaceIcon:(SBIcon *)arg2 withIcon:(SBIcon *)arg3;
- (void)folder:(SBFolder *)arg1 didAddIcons:(NSSet *)arg2 removedIcons:(NSSet *)arg3;
- (void)folder:(SBFolder *)arg1 willAddIcon:(SBIcon *)arg2;
- (void)folder:(SBFolder *)arg1 didMoveList:(SBIconListModel *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)folder:(SBFolder *)arg1 didRemoveLists:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)folder:(SBFolder *)arg1 willRemoveLists:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)folder:(SBFolder *)arg1 didAddList:(SBIconListModel *)arg2;
@end

