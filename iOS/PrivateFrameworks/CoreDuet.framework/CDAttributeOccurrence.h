//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CDAttributeOccurrence : NSObject
{
    NSDate *_date;
    NSObject *_value;
}

+ (id)attributeOccurrenceWithValue:(id)arg1 date:(id)arg2;
@property(readonly) NSObject *value; // @synthesize value=_value;
@property(readonly) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 date:(id)arg2;

@end

