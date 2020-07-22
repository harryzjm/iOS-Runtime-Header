//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class DOMElement, DOMHTMLFormElement, DOMHTMLInputElement, DOMHTMLTextAreaElement, NSDictionary, WebFrame;
@protocol WebFormSubmissionListener;

@protocol WebFormDelegate <NSObject>
- (void)willSendSubmitEventToForm:(DOMHTMLFormElement *)arg1 inFrame:(WebFrame *)arg2 withValues:(NSDictionary *)arg3;
- (void)frame:(WebFrame *)arg1 sourceFrame:(WebFrame *)arg2 willSubmitForm:(DOMElement *)arg3 withValues:(NSDictionary *)arg4 submissionListener:(id <WebFormSubmissionListener>)arg5;
- (_Bool)textField:(DOMHTMLInputElement *)arg1 doCommandBySelector:(SEL)arg2 inFrame:(WebFrame *)arg3;
- (void)didFocusTextField:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textDidChangeInTextArea:(DOMHTMLTextAreaElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textDidChangeInTextField:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textFieldDidEndEditing:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
- (void)textFieldDidBeginEditing:(DOMHTMLInputElement *)arg1 inFrame:(WebFrame *)arg2;
@end

