//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/NSObject-Protocol.h>

@protocol TSWPLayoutTarget;

@protocol TSWPOffscreenColumn <NSObject>
@property(readonly, nonatomic) _Bool lastLineIsEmptyAndHasListLabel;
@property(readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) struct _NSRange anchoredRange;
@property(readonly, nonatomic) struct _NSRange range;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id <TSWPLayoutTarget>)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
@end

