//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNUIFavoritesEntryPickerDelegate-Protocol.h>

@class CNFavorites, CNUIFavoritesEntryPicker, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddFavoriteAction <CNUIFavoritesEntryPickerDelegate>
{
    CNUIFavoritesEntryPicker *_favoritesEntryPicker;
    CNFavorites *_favorites;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNFavorites *favorites; // @synthesize favorites=_favorites;
@property(retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker; // @synthesize favoritesEntryPicker=_favoritesEntryPicker;
- (void)_saveFavorite:(id)arg1;
- (void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (_Bool)canPerformAction;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2 favorites:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
