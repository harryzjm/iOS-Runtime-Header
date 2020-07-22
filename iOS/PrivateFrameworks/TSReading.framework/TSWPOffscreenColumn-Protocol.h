//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@protocol TSWPLayoutTarget;

@protocol TSWPOffscreenColumn <NSObject>
@property(readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) struct _NSRange anchoredRange;
@property(readonly, nonatomic) unsigned long long startAnchoredCharIndex;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) unsigned long long startCharIndex;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id <TSWPLayoutTarget>)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3;
@end

