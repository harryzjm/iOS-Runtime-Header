//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUActionRowItemViewModel.h"

@class GEOPlaceExternalAction, MUPlaceExternalActionMenuHelper;

__attribute__((visibility("hidden")))
@interface MUPlaceExternalActionViewModel : MUActionRowItemViewModel
{
    MUPlaceExternalActionMenuHelper *_menuHelper;
    GEOPlaceExternalAction *_externalAction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOPlaceExternalAction *externalAction; // @synthesize externalAction=_externalAction;
- (id)analyticsButtonValues;
- (id)accessibilityIdentifier;
- (_Bool)isEnabled;
- (id)titleText;
- (id)symbolName;
- (void)performSingleVendorSelectionAction;
- (id)buildMenuWithPresentationOptions:(id)arg1;
- (id)initWithExternalAction:(id)arg1 amsResultProvider:(id)arg2 iconCache:(id)arg3 actionHandler:(id)arg4 analyticsHandler:(id)arg5;

@end

