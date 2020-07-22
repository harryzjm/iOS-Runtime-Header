//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFComposeRecipient, UITextInputTraits;
@protocol MFComposeRecipientAtomDelegate;

@interface MFModernComposeRecipientAtom
{
    id <MFComposeRecipientAtomDelegate> _delegate;
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    unsigned int _wasSelectedWhenTouchesBegan:1;
    unsigned int _touchesWereCancelled:1;
}

@property(nonatomic) id <MFComposeRecipientAtomDelegate> delegate; // @synthesize delegate=_delegate;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (id)keyCommands;
- (void)handleTouchAndHold;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) MFComposeRecipient *recipient;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2;

@end

