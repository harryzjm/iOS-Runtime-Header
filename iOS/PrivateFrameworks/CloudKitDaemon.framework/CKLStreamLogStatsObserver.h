//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver
{
    NSMutableDictionary *_totalSizeByLine;
    NSMutableDictionary *_totalCountByLine;
}

@property(retain) NSMutableDictionary *totalCountByLine; // @synthesize totalCountByLine=_totalCountByLine;
@property(retain) NSMutableDictionary *totalSizeByLine; // @synthesize totalSizeByLine=_totalSizeByLine;
- (void).cxx_destruct;
- (void)finish;
- (void)eventMatched:(id)arg1;
- (id)initWithLogTypes:(unsigned long long)arg1;

@end
