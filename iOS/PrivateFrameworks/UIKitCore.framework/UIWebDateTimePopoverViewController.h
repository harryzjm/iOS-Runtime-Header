//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePopoverViewController : UIViewController
{
    id <UIWebFormControl> _innerWebDateTimeControl;
}

@property(retain, nonatomic) id <UIWebFormControl> _innerWebDateTimeControl; // @synthesize _innerWebDateTimeControl;
- (void)loadView;
- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;

@end

