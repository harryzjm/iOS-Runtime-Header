//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface HKSelectedRangeData : NSObject
{
    long long _statisticsType;
    long long _dataType;
    NSAttributedString *_attributedString;
}

@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(nonatomic) long long statisticsType; // @synthesize statisticsType=_statisticsType;
- (void).cxx_destruct;
- (id)initWithStatisticsType:(long long)arg1;

@end

