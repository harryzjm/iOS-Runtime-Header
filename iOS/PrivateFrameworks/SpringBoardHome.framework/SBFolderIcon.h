//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBIconIndexNodeObserver-Protocol.h>
#import <SpringBoardHome/SBIconObserver-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, SBFolder;

@interface SBFolderIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver>
{
    NSHashTable *_nodeObservers;
    NSMutableSet *_finishedDownloadIdentifiers;
    long long _progressState;
    double _progressPercent;
    struct __CFRunLoopObserver *_updateIconRunLoopObserver;
    SBFolder *_folder;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
- (_Bool)isFolderIcon;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (id)nodeIdentifier;
- (void)removeChild:(id)arg1;
- (id)children;
- (void)iconLaunchEnabledDidChange:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (id)iconAtListIndex:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1;
- (unsigned long long)listIndexForContainedIcon:(id)arg1;
- (_Bool)canBeAddedToMultiItemDrag;
- (id)leafIconsWithBadgesSortedByImportance;
- (void)ancestryDidChange;
- (void)rootFolderDelegateDidChange:(id)arg1;
- (void)_containedIconLaunchEnabledDidUpdate:(id)arg1;
- (void)_containedIconAccessoriesDidUpdate:(id)arg1;
- (void)_containedIconImageChanged:(id)arg1;
- (void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2;
- (void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2;
- (void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2;
- (double)progressPercent;
- (_Bool)shouldAnimateProgress;
- (_Bool)isProgressPaused;
- (long long)progressState;
- (void)_updateProgress;
- (void)_updateBadgeValue;
- (void)updateLabel;
@property(readonly, copy) NSString *description;
- (void)localeChanged;
- (id)displayNameForLocation:(id)arg1;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)rootFolder;
- (void)dealloc;
- (void)invalidateUpdateIconRunLoopObserver;
- (id)initWithFolder:(id)arg1;
- (Class)iconImageViewClassForLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
