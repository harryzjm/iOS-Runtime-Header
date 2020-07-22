//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISDialog, ISDialogButton, NSNumber, NSURL, SSAuthenticationContext;

@interface ISServerAuthenticationOperation
{
    NSNumber *_authenticatedAccountDSID;
    SSAuthenticationContext *_authenticationContext;
    ISDialog *_dialog;
    _Bool _performsButtonAction;
    ISDialogButton *_performedButton;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
}

@property(retain) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property _Bool performsButtonAction; // @synthesize performsButtonAction=_performsButtonAction;
@property(retain) ISDialogButton *performedButton; // @synthesize performedButton=_performedButton;
@property(retain) ISDialog *dialog; // @synthesize dialog=_dialog;
@property(retain) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void)run;
- (void)dealloc;
- (id)init;

@end
