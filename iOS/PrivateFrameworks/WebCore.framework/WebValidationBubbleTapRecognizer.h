//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebValidationBubbleTapRecognizer : NSObject
{
    struct RetainPtr<UIViewController> _popoverController;
    struct RetainPtr<UITapGestureRecognizer> _tapGestureRecognizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dismissPopover;
- (void)dealloc;
- (id)initWithPopoverController:(id)arg1;

@end
