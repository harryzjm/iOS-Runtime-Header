//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNContactContentNavigationItemUpdater : NSObject
{
    NSArray *_preEditLeftBarButtonItems;
    NSArray *_extraLeftBarButtonItems;
    NSArray *_extraRightBarButtonItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *extraRightBarButtonItems; // @synthesize extraRightBarButtonItems=_extraRightBarButtonItems;
@property(retain, nonatomic) NSArray *extraLeftBarButtonItems; // @synthesize extraLeftBarButtonItems=_extraLeftBarButtonItems;
@property(retain, nonatomic) NSArray *preEditLeftBarButtonItems; // @synthesize preEditLeftBarButtonItems=_preEditLeftBarButtonItems;
- (id)transparentPlatterImage;
- (id)buttonPlatterImage;
- (void)applyPlatterStyleToBarButtonItems:(id)arg1 navItemController:(id)arg2 isEditing:(_Bool)arg3;
- (void)updateDisplayDoneButtonForController:(id)arg1 allowsEditing:(_Bool)arg2 viewMode:(long long)arg3 editButtonEnabled:(_Bool)arg4;
- (void)updateDisplayDoneButtonForController:(id)arg1 allowsEditing:(_Bool)arg2 viewMode:(long long)arg3 editRequiresAuthorization:(_Bool)arg4;
- (id)updateDisplayNavigationItemsForController:(id)arg1 mode:(long long)arg2 actionTarget:(id)arg3 allowsEditing:(_Bool)arg4 editButtonEnabled:(_Bool)arg5 isInSheet:(_Bool)arg6 isShowingNavBar:(_Bool)arg7 shouldShowBackButton:(_Bool)arg8 shouldUsePlatterStyle:(_Bool)arg9 platterBackBarButtonItem:(id)arg10 animated:(_Bool)arg11;
- (id)updateDisplayNavigationItemsForController:(id)arg1 mode:(long long)arg2 actionTarget:(id)arg3 allowsEditing:(_Bool)arg4 editRequiresAuthorization:(_Bool)arg5 isInSheet:(_Bool)arg6 isShowingNavBar:(_Bool)arg7 shouldShowBackButton:(_Bool)arg8 shouldUsePlatterStyle:(_Bool)arg9 platterBackBarButtonItem:(id)arg10 animated:(_Bool)arg11;
- (id)customEditItemTitleForIsUpdatingContact:(_Bool)arg1;
- (id)updateEditDoneButtonForController:(id)arg1 customEditButtonTitle:(id)arg2 hasChanges:(_Bool)arg3;
- (id)updateEditDoneButtonForController:(id)arg1 isUpdatingContact:(_Bool)arg2 hasChanges:(_Bool)arg3;
- (id)updateEditingNavigationItemForController:(id)arg1 actionTarget:(id)arg2 isInSheet:(_Bool)arg3 isShowingNavBar:(_Bool)arg4 shouldUsePlatterStyle:(_Bool)arg5 customEditButtonTitle:(id)arg6 hasChanges:(_Bool)arg7 animated:(_Bool)arg8;
- (id)updateEditingNavigationItemForController:(id)arg1 actionTarget:(id)arg2 isInSheet:(_Bool)arg3 isShowingNavBar:(_Bool)arg4 shouldUsePlatterStyle:(_Bool)arg5 isUpdatingContact:(_Bool)arg6 hasChanges:(_Bool)arg7 animated:(_Bool)arg8;

@end

