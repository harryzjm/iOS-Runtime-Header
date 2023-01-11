//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsPopover
{
    struct RetainPtr<WKFormRotatingAccessoryPopover> _popover;
    struct RetainPtr<WKDataListSuggestionsViewController> _suggestionsViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didSelectOptionAtIndex:(long long)arg1;
- (void)invalidate;
- (void)showSuggestionsDropdown:(struct WebDataListSuggestionsDropdownIOS *)arg1 activationType:(int)arg2;
- (void)updateWithInformation:(struct DataListSuggestionInformation *)arg1;
- (id)initWithInformation:(struct DataListSuggestionInformation *)arg1 inView:(id)arg2;

@end
