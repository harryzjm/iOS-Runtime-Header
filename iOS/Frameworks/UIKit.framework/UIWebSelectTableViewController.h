//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIKeyInput-Protocol.h>

@class DOMHTMLSelectElement, NSArray, NSString, UIWebSelectPopover;

__attribute__((visibility("hidden")))
@interface UIWebSelectTableViewController <UIKeyInput>
{
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    NSArray *_groupsAndOptions;
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    _Bool _allowsMultipleSelection;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    UIWebSelectPopover *_popover;
}

@property(nonatomic) UIWebSelectPopover *_popover; // @synthesize _popover;
@property(retain, nonatomic) NSArray *_cachedItems; // @synthesize _cachedItems;
@property(retain, nonatomic) NSArray *_groupsAndOptions; // @synthesize _groupsAndOptions;
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // @synthesize _selectionNode;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_optionsForSection:(long long)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned long long)arg3 multipleSelection:(_Bool)arg4;
- (void)_setupGroupsAndOptions;
- (_Bool)_isEmpty;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

