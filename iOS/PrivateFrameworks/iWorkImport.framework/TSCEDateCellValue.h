//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCEDateCellValue
{
    struct TSCEDateValue *_dateValue;
}

- (void)encodeToArchive:(struct DateCellValueArchive *)arg1;
- (void)setPopulatedCustomFormat:(id)arg1;
- (id)initWithArchive:(const struct DateCellValueArchive *)arg1 locale:(id)arg2;
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)canonicalKeyString;
- (id)displayString;
- (id)format;
- (struct TSCEValue)tsceValue;
- (struct TSCEDateValue *)dateValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDateValue:(struct TSCEDateValue *)arg1 locale:(id)arg2;
- (id)initWithDate:(id)arg1 locale:(id)arg2;

@end

