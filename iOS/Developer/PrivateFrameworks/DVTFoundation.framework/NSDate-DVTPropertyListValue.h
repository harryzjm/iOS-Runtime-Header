//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface NSDate (DVTPropertyListValue)
@property(readonly) NSDictionary *dictionaryValue;
@property(readonly) NSArray *arrayValue;
@property(readonly) NSDate *dateValue;
@property(readonly) NSNumber *numberValue;
@property(readonly) NSData *dataValue;
@property(readonly) NSString *stringValue;
- (_Bool)dvt_isInThePast;
- (id)dvt_mostSignificantDateComponentStringRelativeToToday;
- (id)dvt_descriptionWithDateFormat:(id)arg1;
- (id)dvt_dateStringRelativeToTodayWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2 capitalizeFirstLetter:(_Bool)arg3 seperateWithComma:(_Bool)arg4;
- (id)dvt_dateStringRelativeToTodayWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2 capitalizeFirstLetter:(_Bool)arg3;
- (id)dvt_dateStringRelativeToTodayWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

