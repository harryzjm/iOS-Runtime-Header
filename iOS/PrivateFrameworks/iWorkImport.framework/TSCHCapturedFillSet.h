//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCHCapturedFillSet
{
    int _numberOfThemeSeriesStyles;
    NSArray *_seriesStyles;
}

+ (id)capturedFillSetWithIdentifier:(id)arg1 seriesStyles:(id)arg2 numberOfThemeSeriesStyles:(unsigned long long)arg3;
- (id)fillForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 context:(id)arg3;
- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 seriesStyles:(id)arg2 numberOfThemeSeriesStyles:(unsigned long long)arg3;

@end

