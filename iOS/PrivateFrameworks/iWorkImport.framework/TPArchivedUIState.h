//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TPUIState;

__attribute__((visibility("hidden")))
@interface TPArchivedUIState
{
    TPUIState *_uiState;
}

@property(copy, nonatomic) TPUIState *uiState; // @synthesize uiState=_uiState;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)isEqualToArchivedUIState:(id)arg1;
- (id)initWithContext:(id)arg1 uiState:(id)arg2;

@end

