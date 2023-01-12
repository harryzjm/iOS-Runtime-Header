//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIPrintPresetsOption, UIPrinterSelectionOption;

__attribute__((visibility("hidden")))
@interface UIPrintStandardOptionsSection
{
    UIPrinterSelectionOption *_printerSelectionOption;
    UIPrintPresetsOption *_presetsOption;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPrintPresetsOption *presetsOption; // @synthesize presetsOption=_presetsOption;
@property(retain, nonatomic) UIPrinterSelectionOption *printerSelectionOption; // @synthesize printerSelectionOption=_printerSelectionOption;
- (void)setShowContactingPrinter:(_Bool)arg1;
- (void)updatePrintOptionsList;
- (void)setCurrentPrinter:(id)arg1;
- (void)updatePrinterInfo;
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;

@end
