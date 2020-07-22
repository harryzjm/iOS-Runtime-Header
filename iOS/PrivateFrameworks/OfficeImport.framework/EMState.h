//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDSheet, EDWorkbook, NSMutableDictionary;

@interface EMState
{
    EDWorkbook *_workbook;
    EDSheet *_currentSheet;
    NSMutableDictionary *_hyperlinks;
}

@property __weak EDSheet *currentSheet; // @synthesize currentSheet=_currentSheet;
@property(retain) EDWorkbook *workbook; // @synthesize workbook=_workbook;
- (void).cxx_destruct;
- (void)setHyperlink:(id)arg1 forRow:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (id)hyperlinkForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;

@end

