//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SXAdController;

@interface SXIAdComponentSizer
{
    SXAdController *_adController;
}

+ (double)debugHeight;
@property(readonly, nonatomic) SXAdController *adController; // @synthesize adController=_adController;
- (void).cxx_destruct;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (struct _NSRange)overrideColumnLayoutForColumnRange:(struct _NSRange)arg1 inColumnLayout:(id)arg2;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 documentController:(id)arg4 layoutAttributes:(id)arg5 adController:(id)arg6;

@end

