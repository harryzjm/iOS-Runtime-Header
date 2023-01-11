//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSDLayout;
@protocol TSDHint;

@protocol TSDPartitioner
- (void)setLayoutPartititionsRightToLeft:(_Bool)arg1 contentPartitionsRightToLeft:(_Bool)arg2;
- (id <TSDHint>)hintForLayout:(TSDLayout *)arg1;
- (_Bool)didHint:(id <TSDHint>)arg1 syncWithNextHint:(id <TSDHint>)arg2 horizontally:(_Bool)arg3 delta:(int)arg4;
- (TSDLayout *)layoutForHint:(id <TSDHint>)arg1 parentLayout:(TSDLayout *)arg2;
- (id <TSDHint>)nextHintForSize:(struct CGSize)arg1 parentLayout:(TSDLayout *)arg2 previousHint:(id <TSDHint>)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (TSDLayout *)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(TSDLayout *)arg2 previousHint:(id <TSDHint>)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;

@optional
- (void)reset;
@end

