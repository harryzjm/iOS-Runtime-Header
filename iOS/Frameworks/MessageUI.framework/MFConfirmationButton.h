//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage;

@interface MFConfirmationButton
{
    _Bool _hasPresentedConfirmation;
    unsigned long long _confirmationType;
    unsigned long long _confirmationSelectionMode;
    NSString *_confirmationMessage;
    NSString *_confirmationLabel;
    UIImage *_confirmationIcon;
    CDUnknownBlockType _handlerBlock;
}

+ (id)confirmationButtonWithMessage:(id)arg1 confirmationLabel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasPresentedConfirmation; // @synthesize hasPresentedConfirmation=_hasPresentedConfirmation;
@property(copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(retain, nonatomic) UIImage *confirmationIcon; // @synthesize confirmationIcon=_confirmationIcon;
@property(copy, nonatomic) NSString *confirmationLabel; // @synthesize confirmationLabel=_confirmationLabel;
@property(copy, nonatomic) NSString *confirmationMessage; // @synthesize confirmationMessage=_confirmationMessage;
@property(nonatomic) unsigned long long confirmationSelectionMode; // @synthesize confirmationSelectionMode=_confirmationSelectionMode;
@property(nonatomic) unsigned long long confirmationType; // @synthesize confirmationType=_confirmationType;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)_didConfirm;
- (id)_confirmationMenu;
- (void)reset;
- (_Bool)_isInConfirmableState;
- (void)_updateButtonAction;
- (void)setSelected:(_Bool)arg1;

@end
