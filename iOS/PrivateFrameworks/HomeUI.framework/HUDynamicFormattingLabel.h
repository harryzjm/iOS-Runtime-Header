//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class NSArray, NSDictionary, UIFont;
@protocol HFDynamicFormattingValue, NACancelable;

@interface HUDynamicFormattingLabel : UILabel
{
    id <HFDynamicFormattingValue> _dynamicFormattingValue;
    NSDictionary *_defaultAttributes;
    NSArray *_preferredFonts;
    id <NACancelable> _formattedValueObservationCancellationToken;
    UIFont *_preferredFontForCurrentSize;
}

@property(retain, nonatomic) UIFont *preferredFontForCurrentSize; // @synthesize preferredFontForCurrentSize=_preferredFontForCurrentSize;
@property(retain, nonatomic) id <NACancelable> formattedValueObservationCancellationToken; // @synthesize formattedValueObservationCancellationToken=_formattedValueObservationCancellationToken;
@property(copy, nonatomic) NSArray *preferredFonts; // @synthesize preferredFonts=_preferredFonts;
@property(copy, nonatomic) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
@property(retain, nonatomic) id <HFDynamicFormattingValue> dynamicFormattingValue; // @synthesize dynamicFormattingValue=_dynamicFormattingValue;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updatePreferredFontIncludingValue:(_Bool)arg1;
- (void)_updateFormattedValueIncludingFont:(_Bool)arg1;
- (id)_formattedValueWithFont:(id)arg1;
- (void)_updateFormattedValueObservation;
- (void)didMoveToWindow;

@end
