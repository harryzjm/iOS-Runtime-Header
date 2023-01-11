//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCEBooleanCellValue
{
    struct TSCEBooleanValue *_booleanValue;
}

- (void)encodeToArchive:(struct BooleanCellValueArchive *)arg1;
- (id)initWithArchive:(const struct BooleanCellValueArchive *)arg1 locale:(id)arg2;
- (long long)compareToCellValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToCellValue:(id)arg1;
- (struct TSCEValue)tsceValue;
- (id)canonicalKeyString;
- (id)displayString;
- (id)format;
- (struct TSCEBooleanValue *)booleanValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBooleanValue:(struct TSCEBooleanValue *)arg1 locale:(id)arg2;
- (id)initWithBoolean:(_Bool)arg1 locale:(id)arg2;

@end

