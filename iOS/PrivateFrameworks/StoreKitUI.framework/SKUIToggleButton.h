//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIAttributedStringLayout, SKUIButtonViewElement;
@protocol SKUIToggleButtonDelegate;

__attribute__((visibility("hidden")))
@interface SKUIToggleButton
{
    _Bool _autoIncrement;
    long long _autoIncrementCount;
    long long _count;
    SKUIButtonViewElement *_element;
    id <SKUIToggleButtonDelegate> _delegate;
    NSString *_itemIdentifier;
    SKUIAttributedStringLayout *_nonToggledLayout;
    NSString *_titleToggleString;
    SKUIAttributedStringLayout *_toggledLayout;
    _Bool _toggled;
    NSString *_toggleItemIdentifier;
    NSString *_nonToggledTitle;
    NSString *_toggledTitle;
    id _nonToggledContents;
    id _toggledContents;
    long long _toggleButtonType;
}

- (void).cxx_destruct;
@property(nonatomic) long long toggleButtonType; // @synthesize toggleButtonType=_toggleButtonType;
@property(retain, nonatomic) id toggledContents; // @synthesize toggledContents=_toggledContents;
@property(retain, nonatomic) id nonToggledContents; // @synthesize nonToggledContents=_nonToggledContents;
@property(retain, nonatomic) NSString *toggledTitle; // @synthesize toggledTitle=_toggledTitle;
@property(retain, nonatomic) NSString *nonToggledTitle; // @synthesize nonToggledTitle=_nonToggledTitle;
@property(nonatomic) __weak id <SKUIToggleButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isToggled) _Bool toggled; // @synthesize toggled=_toggled;
@property(retain, nonatomic) NSString *toggleItemIdentifier; // @synthesize toggleItemIdentifier=_toggleItemIdentifier;
@property(nonatomic) __weak SKUIButtonViewElement *element; // @synthesize element=_element;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long autoIncrementCount; // @synthesize autoIncrementCount=_autoIncrementCount;
@property(nonatomic) _Bool autoIncrement; // @synthesize autoIncrement=_autoIncrement;
- (void)itemStateCenter:(id)arg1 itemStateChanged:(id)arg2;
- (id)_toggledLayout;
- (id)_titleAttributes;
- (void)_showToggleState:(_Bool)arg1;
- (void)_sendWillAnimate;
- (void)_sendDidAnimate;
- (id)_nonToggledLayout;
- (id)_layoutForString:(id)arg1;
- (void)setButtonTitleText:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setToggled:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

