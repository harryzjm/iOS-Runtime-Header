//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMOutlineState, OADTablePartStyle;

__attribute__((visibility("hidden")))
@interface PMState
{
    CMOutlineState *mListState;
    OADTablePartStyle *mCurrentRowStyle;
}

- (void).cxx_destruct;
- (id)currentRowStyle;
- (void)setCurrentRowStyle:(id)arg1;
- (id)listState;
- (id)init;

@end

