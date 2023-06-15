//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSArray, NSString, SUUIMenuBarViewElementConfiguration;

__attribute__((visibility("hidden")))
@interface SUUIMenuBarViewElement : SUUIViewElement
{
    NSArray *_titleViewElements;
    SUUIMenuBarViewElementConfiguration *_configuration;
}

+ (Class)_shelfMenuBarViewElementClass;
+ (Class)_titlesMenuBarViewElementClass;
+ (id)supportedFeatures;
- (void).cxx_destruct;
@property(retain, nonatomic) SUUIMenuBarViewElementConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_reloadMenuItems;
- (id)titleForMenuItemAtIndex:(unsigned long long)arg1;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

