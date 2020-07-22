//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FuseUI/MusicNoContentViewDelegate-Protocol.h>

@class MusicEntityValueContext, MusicNoContentView, NSArray, NSOperationQueue, NSString;

@interface MusicAddToPlaylistBrowseTableViewController <MusicNoContentViewDelegate>
{
    MusicNoContentView *_noContentView;
    NSOperationQueue *_platformLookupQueue;
    MusicEntityValueContext *_prepopulatedItemsEntityValueContext;
    NSArray *_prepopulatedMediaItems;
}

@property(retain, nonatomic) NSArray *prepopulatedMediaItems; // @synthesize prepopulatedMediaItems=_prepopulatedMediaItems;
@property(retain, nonatomic) MusicEntityValueContext *prepopulatedItemsEntityValueContext; // @synthesize prepopulatedItemsEntityValueContext=_prepopulatedItemsEntityValueContext;
- (void).cxx_destruct;
- (void)_updateNoContentViewVisibility;
- (void)_showNewPlaylistCreationFlow;
- (void)_performBlockAfterDerivingPrepopulatedItems:(CDUnknownBlockType)arg1;
- (_Bool)_needsHeaderForSection:(long long)arg1;
- (void)noContentViewDidTapButton:(id)arg1;
- (void)music_handleCreatePlaylistAction;
- (void)handleEntityProviderDidInvalidate;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)noContentView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLibraryViewConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

