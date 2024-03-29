//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSCECellValue.h"

@interface TSCENumberCellValue : TSCECellValue
{
    struct TSCENumberValue *_numberValue;
}

- (void)encodeToArchive:(void *)arg1;
- (void)setPopulatedCustomFormat:(id)arg1;
- (id)initWithArchive:(const void *)arg1 locale:(id)arg2;
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)canonicalKeyString;
- (id)displayString;
- (id)format;
- (struct TSCENumberValue *)numberValue;
- (struct TSCEValue)tsceValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithNumberValue:(struct TSCENumberValue *)arg1 locale:(id)arg2;
- (id)initWithDecimal:(const struct TSUDecimal *)arg1 locale:(id)arg2;
- (id)initWithDouble:(double)arg1 locale:(id)arg2;

@end

