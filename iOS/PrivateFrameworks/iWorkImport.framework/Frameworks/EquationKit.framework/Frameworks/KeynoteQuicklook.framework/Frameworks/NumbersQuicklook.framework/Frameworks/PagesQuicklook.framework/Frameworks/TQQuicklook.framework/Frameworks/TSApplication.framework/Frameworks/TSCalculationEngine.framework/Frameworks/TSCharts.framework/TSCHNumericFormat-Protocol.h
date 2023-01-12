//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSCharts/NSObject-Protocol.h>

@class TSKFormat;
@protocol TSCHNumericFormat;

@protocol TSCHNumericFormat <NSObject>
@property(readonly, nonatomic) struct TSCHNumericFormatProperties chartNumericFormatProperties;
@property(readonly, nonatomic) _Bool showThousandsSeparator;
@property(readonly, nonatomic) unsigned char negativeStyle;
@property(readonly, nonatomic) unsigned long long decimalPlaces;
- (TSKFormat<TSCHNumericFormat> *)chartNumericFormatByApplyingTSCHNumericFormatProperties:(struct TSCHNumericFormatProperties)arg1;
@end
