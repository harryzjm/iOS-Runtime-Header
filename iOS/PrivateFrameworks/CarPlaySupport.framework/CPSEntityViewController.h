//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/CPEntityUpdateProviding-Protocol.h>
#import <CarPlaySupport/CPSEntityActionDelegate-Protocol.h>

@class CPEntity, CPSBaseEntityContentViewController, CPSEntityResourceProvider, NSMapTable, NSString;

@interface CPSEntityViewController <CPSEntityActionDelegate, CPEntityUpdateProviding>
{
    CPEntity *_entity;
    CPSBaseEntityContentViewController *_contentViewController;
    NSMapTable *_buttonMap;
    CPSEntityResourceProvider *_resourceProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CPSEntityResourceProvider *resourceProvider; // @synthesize resourceProvider=_resourceProvider;
@property(retain, nonatomic) NSMapTable *buttonMap; // @synthesize buttonMap=_buttonMap;
@property(readonly, nonatomic) CPSBaseEntityContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) CPEntity *entity; // @synthesize entity=_entity;
- (void)updateEntityTemplate:(id)arg1 withProxyDelegate:(id)arg2;
- (_Bool)entityContentViewController:(id)arg1 didPressButton:(id)arg2 forPOI:(id)arg3;
- (_Bool)entityContentViewController:(id)arg1 didSelectPointOfInterestWithIdentifier:(id)arg2;
- (_Bool)entityContentViewController:(id)arg1 regionDidChange:(CDStruct_2b0c6e0b)arg2;
- (_Bool)entityContentViewController:(id)arg1 didPressButton:(id)arg2 forEntity:(id)arg3;
- (void)trailingBarButtonPressed:(id)arg1;
- (void)setupViewControllers;
- (void)_viewDidLoad;
- (id)entityTemplateDelegate;
- (id)entityTemplate;
- (id)initWithEntityTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
