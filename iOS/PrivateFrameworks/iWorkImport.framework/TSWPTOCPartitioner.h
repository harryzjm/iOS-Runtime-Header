//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDPartitioner-Protocol.h>

@class TSWPTOCInfo;

__attribute__((visibility("hidden")))
@interface TSWPTOCPartitioner : NSObject <TSDPartitioner>
{
    TSWPTOCInfo *_info;
}

@property(readonly, nonatomic) __weak TSWPTOCInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)hintForLayout:(id)arg1;
- (_Bool)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(_Bool)arg3 delta:(int)arg4;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (id)nextHintForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (void)setLayoutPartititionsRightToLeft:(_Bool)arg1 contentPartitionsRightToLeft:(_Bool)arg2;
- (id)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (id)initWithInfo:(id)arg1;

@end

