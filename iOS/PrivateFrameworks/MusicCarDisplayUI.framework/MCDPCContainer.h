//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCDPCItem, MCDPCModel, NSIndexPath, NSMapTable, NSString;
@protocol MCDPCContainerDelegate, OS_dispatch_queue;

@interface MCDPCContainer : NSObject
{
    NSString *_identifier;
    NSIndexPath *_indexPath;
    MCDPCItem *_rootItem;
    MCDPCModel *_model;
    NSMapTable *_cachedItemsByIndicies;
    NSMapTable *_cachedIndiciesByIdentifier;
    NSObject<OS_dispatch_queue> *_serialAccessContainerQueue;
    _Bool _showPlaybackProgress;
    struct {
        unsigned int didInvalidateRootItem:1;
        unsigned int didInvalidateIndicies:1;
        unsigned int willChangeCount:1;
        unsigned int didChangeCount:1;
    } __supportedDelegateCalls;
    long long _cachedCount;
    id <MCDPCContainerDelegate> _delegate;
}

@property(nonatomic) __weak id <MCDPCContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool showPlaybackProgress; // @synthesize showPlaybackProgress=_showPlaybackProgress;
@property(nonatomic) long long cachedCount; // @synthesize cachedCount=_cachedCount;
@property(readonly, nonatomic) __weak MCDPCModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) __weak MCDPCItem *rootItem; // @synthesize rootItem=_rootItem;
- (void).cxx_destruct;
- (id)cachedItemForIdentifier:(id)arg1;
- (id)cachedItemForIndex:(long long)arg1;
- (void)getChildrenInRange:(struct _NSRange)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCountOfChildrenWithCompletion:(CDUnknownBlockType)arg1;
- (void)getNowPlayingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPlaybackProgressSupportForChildrenWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRootItemWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isValidForRefreshedParent:(id)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateRootItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)containerAtIndex:(long long)arg1;
- (void)setCount:(long long)arg1;
@property(readonly, nonatomic) long long showCurrentlyPlayingIndex;
- (void)setShowPlaybackProgress:(_Bool)arg1;
@property(readonly, nonatomic) NSString *appTitle;
@property(readonly, nonatomic) NSString *title;
- (void)_nowPlayingIdentifiersDidChange:(id)arg1;
- (void)_contentItemsUpdated:(id)arg1;
- (id)description;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithModel:(id)arg1 rootItem:(id)arg2 indexPath:(id)arg3;

@end

