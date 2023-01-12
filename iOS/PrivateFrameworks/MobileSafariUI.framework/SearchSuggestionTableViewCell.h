//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompletionArrowView;

__attribute__((visibility("hidden")))
@interface SearchSuggestionTableViewCell
{
    CompletionArrowView *_accessoryView;
    _Bool _hidesAccessoryView;
    CDUnknownBlockType _accessoryActionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType accessoryActionHandler; // @synthesize accessoryActionHandler=_accessoryActionHandler;
@property(nonatomic) _Bool hidesAccessoryView; // @synthesize hidesAccessoryView=_hidesAccessoryView;
- (void)_accessoryButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
@property(nonatomic) _Bool hidesImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

