//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EDSheetReference
{
    unsigned long long mSheetIndex;
}

+ (id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (id)description;
- (void)unionWithReference:(id)arg1;
- (_Bool)fullyAdjacentToReference:(id)arg1;
- (unsigned long long)sheetIndex;
- (_Bool)isSheedIndexValid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTableReference:(id)arg1;
- (id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (id)init;

@end

