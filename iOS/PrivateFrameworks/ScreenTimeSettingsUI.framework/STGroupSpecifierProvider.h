//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PSSpecifier, UIViewController;
@protocol STGroupSpecifierProviderDelegate;

__attribute__((visibility("hidden")))
@interface STGroupSpecifierProvider : NSObject
{
    _Bool _isHidden;
    _Bool _invalid;
    UIViewController<STGroupSpecifierProviderDelegate> *_delegate;
    PSSpecifier *_groupSpecifier;
    NSMutableArray *_privateSpecifiers;
}

+ (_Bool)automaticallyNotifiesObserversOfIsHidden;
- (void).cxx_destruct;
@property _Bool invalid; // @synthesize invalid=_invalid;
@property(retain) NSMutableArray *privateSpecifiers; // @synthesize privateSpecifiers=_privateSpecifiers;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak UIViewController<STGroupSpecifierProviderDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
- (void)_tableCellHeightDidChange:(id)arg1;
- (void)replaceSpecifiersAtIndexes:(id)arg1 withSpecifiers:(id)arg2;
- (void)replaceObjectInSpecifiersAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeSpecifiersAtIndexes:(id)arg1;
- (void)insertSpecifiers:(id)arg1 atIndexes:(id)arg2;
- (id)specifiersAtIndexes:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *specifiers;
@property(readonly) NSMutableArray *mutableSpecifiers;
- (void)showStoreDemoAlert;
- (void)showPINSheet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lazyLoadBundle:(id)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popToViewControllerAnimated:(_Bool)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showController:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSectionHeaderFootersWithAnimation:(long long)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(_Bool)arg2;
- (void)invalidate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

