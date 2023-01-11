//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFActionSetSuggestionItemProvider, HFItem;

@interface HUSceneSuggestionsItemManager : HFItemManager
{
    HFItem *_addCustomSceneItem;
    HFActionSetSuggestionItemProvider *_suggestionItemProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HFActionSetSuggestionItemProvider *suggestionItemProvider; // @synthesize suggestionItemProvider=_suggestionItemProvider;
@property(retain, nonatomic) HFItem *addCustomSceneItem; // @synthesize addCustomSceneItem=_addCustomSceneItem;
- (id)_currentSectionIdentifiers;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;

@end
