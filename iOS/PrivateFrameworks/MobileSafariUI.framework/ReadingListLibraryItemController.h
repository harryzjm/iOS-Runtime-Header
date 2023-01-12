//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/ReadingListViewControllerDelegate-Protocol.h>

@class NSString, ReadingListViewController;

__attribute__((visibility("hidden")))
@interface ReadingListLibraryItemController <ReadingListViewControllerDelegate>
{
    ReadingListViewController *_viewController;
}

- (void).cxx_destruct;
- (_Bool)isSelected;
- (void)performDropWithProposal:(id)arg1 session:(id)arg2;
- (long long)dropIntentForSession:(id)arg1;
- (unsigned long long)dropOperationForSession:(id)arg1;
- (_Bool)isSpringLoaded;
- (void)readingListViewController:(id)arg1 updateUnreadFilterShowingAllBookmarks:(_Bool)arg2;
- (void)readingListViewController:(id)arg1 setBookmark:(id)arg2 asRead:(_Bool)arg3;
- (id)readingListViewControllerCurrentReadingListItem:(id)arg1;
- (id)_bookmarksNavigationControllerDelegate;
- (_Bool)selectionFollowsFocus;
- (id)viewController;
- (void)updateListContentConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
