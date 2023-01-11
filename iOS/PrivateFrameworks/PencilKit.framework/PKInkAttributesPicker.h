//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, PKInk, _PKInkAttributesPickerView;
@protocol PKInkAttributesPickerDelegate;

@interface PKInkAttributesPicker : UIViewController <UIPopoverPresentationControllerDelegate>
{
    id <PKInkAttributesPickerDelegate> _delegate;
    _PKInkAttributesPickerView *_pickerView;
    unsigned long long _displayMode;
}

+ (double)representableOpacityForOpacity:(double)arg1;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) _PKInkAttributesPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) id <PKInkAttributesPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectedInkDidChange:(id)arg1;
@property(retain, nonatomic) PKInk *selectedInk;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithInk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
