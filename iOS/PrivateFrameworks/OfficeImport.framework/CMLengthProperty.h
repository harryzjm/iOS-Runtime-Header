//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CMLengthProperty
{
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)arg1 unit:(int)arg2;
+ (id)cssStringValue:(double)arg1 unit:(int)arg2;
- (void)addNumber:(double)arg1 unit:(int)arg2;
- (id)description;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (int)compareValue:(id)arg1;
- (int)unitType;
- (int)intValue;
- (double)value;
- (id)initWithNumber:(double)arg1 unit:(int)arg2;
- (id)initWithNumber:(double)arg1;

@end
