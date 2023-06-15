//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class TKTonePickerViewController;
@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNTonePickerController : UINavigationController
{
    TKTonePickerViewController *_tonePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TKTonePickerViewController *tonePicker; // @synthesize tonePicker=_tonePicker;
- (void)cancelButton:(id)arg1;
- (void)doneButton:(id)arg1;
- (id)initWithAlertType:(long long)arg1 activityAlert:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <CNPickerControllerDelegate> delegate; // @dynamic delegate;

@end

