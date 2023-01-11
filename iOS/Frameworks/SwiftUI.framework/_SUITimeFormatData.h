//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString;

@interface _SUITimeFormatData : NSObject
{
    NSString *_formatHourMinSecSubsec;
    NSString *_formatHourMinSec;
    NSString *_formatHourMin;
    NSString *_formatMinSecSubsec;
    NSString *_formatMinSec;
    NSString *_formatMin;
    NSNumberFormatter *_singleWidthNumberFormatter;
    NSNumberFormatter *_doubleWidthNumberFormatter;
}

+ (id)_timeLocaleForLocale:(id)arg1;
+ (id)_timeFormatDataAccessLock;
+ (id)instanceForLocale:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumberFormatter *doubleWidthNumberFormatter; // @synthesize doubleWidthNumberFormatter=_doubleWidthNumberFormatter;
@property(readonly, nonatomic) NSNumberFormatter *singleWidthNumberFormatter; // @synthesize singleWidthNumberFormatter=_singleWidthNumberFormatter;
@property(readonly, nonatomic) NSString *formatMin; // @synthesize formatMin=_formatMin;
@property(readonly, nonatomic) NSString *formatMinSec; // @synthesize formatMinSec=_formatMinSec;
@property(readonly, nonatomic) NSString *formatMinSecSubsec; // @synthesize formatMinSecSubsec=_formatMinSecSubsec;
@property(readonly, nonatomic) NSString *formatHourMin; // @synthesize formatHourMin=_formatHourMin;
@property(readonly, nonatomic) NSString *formatHourMinSec; // @synthesize formatHourMinSec=_formatHourMinSec;
@property(readonly, nonatomic) NSString *formatHourMinSecSubsec; // @synthesize formatHourMinSecSubsec=_formatHourMinSecSubsec;
- (id)initWithLocale:(id)arg1;

@end
