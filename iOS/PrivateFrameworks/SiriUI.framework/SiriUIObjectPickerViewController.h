//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SAUIDomainObjectPicker;
@protocol SiriUIObjectPickerViewControllerDelegate;

@interface SiriUIObjectPickerViewController : UIViewController
{
    id <SiriUIObjectPickerViewControllerDelegate> _pickerDelegate;
    SAUIDomainObjectPicker *_picker;
}

+ (id)pickerControllerWithPicker:(id)arg1;
@property(readonly, nonatomic, getter=_picker) SAUIDomainObjectPicker *picker; // @synthesize picker=_picker;
@property(nonatomic) __weak id <SiriUIObjectPickerViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (void).cxx_destruct;
- (void)showPicker:(id)arg1;
- (id)initWithPicker:(id)arg1;

@end
