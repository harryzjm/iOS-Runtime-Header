//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIAlertController;

__attribute__((visibility("hidden")))
@interface BCSActionPickerViewAssistant : NSObject
{
    UIAlertController *_alertController;
}

- (void).cxx_destruct;
- (void)_cleanUpAlertController;
- (void)actionPickerItem:(id)arg1 didDismissAlertController:(id)arg2;
- (id)actionPickerItemAlertController:(id)arg1;
- (_Bool)showActionPickerWithItems:(id)arg1 fromViewController:(id)arg2 presentingRect:(struct CGRect)arg3;
@property(readonly, nonatomic, getter=isShowingPicker) _Bool showingPicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

