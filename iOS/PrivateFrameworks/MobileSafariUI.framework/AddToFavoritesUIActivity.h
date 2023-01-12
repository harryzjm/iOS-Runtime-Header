//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TabDocument, _SFSingleBookmarkNavigationController;
@protocol AddBookmarkActivityDelegate;

__attribute__((visibility("hidden")))
@interface AddToFavoritesUIActivity
{
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
    _Bool _isForPerTabGroupFavorites;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isForPerTabGroupFavorites; // @synthesize isForPerTabGroupFavorites=_isForPerTabGroupFavorites;
- (_Bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2 bookmark:(id)arg3;
- (void)activityDidFinish:(_Bool)arg1;
- (id)_embeddedActivityViewController;
- (id)activityViewController;
- (void)prepareWithTabDocument:(id)arg1;
- (_Bool)canPerformWithTabDocument:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;

// Remaining properties
@property(nonatomic) __weak id <AddBookmarkActivityDelegate> delegate; // @dynamic delegate;

@end

