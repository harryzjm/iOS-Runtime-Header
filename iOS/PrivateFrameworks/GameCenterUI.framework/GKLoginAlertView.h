//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertView.h>

#import <GameCenterUI/UITextFieldDelegate-Protocol.h>

@class NSString;

@interface GKLoginAlertView : UIAlertView <UITextFieldDelegate>
{
    NSString *_username;
    unsigned long long _passwordFieldIndex;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)_updateFrameForDisplay;
- (_Bool)textFieldShouldReturn:(id)arg1;
@property(copy, nonatomic) NSString *password; // @dynamic password;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 uneditableUsername:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

