//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIMenuBarViewElement-Protocol.h>
#import <StoreKitUI/_SKUIMenuBarViewElementConfigurationReloadDelegate-Protocol.h>

@class NSArray, NSString, SKUIMenuBarViewElementConfiguration;

@interface SKUIShelfMenuBarViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement>
{
    NSArray *_focusedViewElements;
    NSArray *_regularViewElements;
    SKUIMenuBarViewElementConfiguration *_configuration;
}

+ (id)supportedFeatures;
@property(retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_reloadMenuItems;
- (id)focusedViewElementForMenuItemAtIndex:(unsigned long long)arg1;
- (id)regularViewElementForMenuItemAtIndex:(unsigned long long)arg1;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)elementType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

