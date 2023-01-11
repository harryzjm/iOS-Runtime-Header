//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton;
@protocol TPSimpleNumberPadDelegate;

@interface TPSimpleNumberPad
{
    UIButton *_deleteButton;
    _Bool _showsDeleteButton;
    id <TPSimpleNumberPadDelegate> _delegate;
}

+ (id)_numberPadCharacters;
- (void).cxx_destruct;
@property(nonatomic) _Bool showsDeleteButton; // @synthesize showsDeleteButton=_showsDeleteButton;
@property id <TPSimpleNumberPadDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setNumberButtonsEnabled:(_Bool)arg1;
- (void)_updateDeleteButton;
- (void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2;
- (void)buttonUp:(id)arg1;
- (Class)numberPadButtonClass;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithButtons:(id)arg1;

@end
