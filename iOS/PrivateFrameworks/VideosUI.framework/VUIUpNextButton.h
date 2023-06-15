//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VUIUpNextButtonProperties;

__attribute__((visibility("hidden")))
@interface VUIUpNextButton
{
    VUIUpNextButtonProperties *_properties;
    CDUnknownBlockType _stateDidChangeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType stateDidChangeHandler; // @synthesize stateDidChangeHandler=_stateDidChangeHandler;
@property(retain, nonatomic) VUIUpNextButtonProperties *properties; // @synthesize properties=_properties;
- (id)largeContentTitle;
- (void)updateAccessibilityIdentifierAfterStateChanged;
- (void)upNextStateChangedToRemoved;
- (void)upNextStateChangedToAdded;
- (void)setTintColor:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)selectButtonAction:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

