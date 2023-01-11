//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSCEStringCellValue
{
    struct TSCEStringValue *_stringValue;
}

- (void)setPopulatedCustomFormat:(id)arg1;
- (void)encodeToArchive:(struct StringCellValueArchive *)arg1;
- (id)initWithArchive:(const struct StringCellValueArchive *)arg1 locale:(id)arg2;
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)canonicalKeyString;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)format;
- (struct TSCEStringValue *)stringValue;
- (struct TSCEValue)tsceValue;
- (void)dealloc;
- (id)initWithStringValue:(struct TSCEStringValue *)arg1 locale:(id)arg2;
- (id)initWithString:(id)arg1 locale:(id)arg2;

@end
