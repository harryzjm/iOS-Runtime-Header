//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMHTMLInputElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebFormDateTimePeripheral : NSObject
{
    DOMHTMLInputElement *_inputElement;
    id <UIWebFormControl> _control;
}

+ (id)createPeripheralWithDOMHTMLInputElement:(id)arg1;
@property(retain, nonatomic) id <UIWebFormControl> _control; // @synthesize _control;
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement; // @synthesize _inputElement;
- (id)assistantView;
- (void)endEditing;
- (void)beginEditing;
- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)arg1;
- (long long)_datePickerModeForInputType:(id)arg1;

@end

