//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSCalculationEngine/NSCopying-Protocol.h>

@class TSCEValueGrid;

@interface TSCEDenseGrid <NSCopying>
{
    TSCEValueGrid *_valueGrid;
    BOOL _gridKind;
    _Bool _isFlattened;
}

- (void).cxx_destruct;
- (id)error;
- (struct TSCEValue)subGridValueAtGridCoord:(const struct TSCEGridCoord *)arg1 width:(int)arg2 height:(int)arg3 accessContext:(struct TSCEGridAccessContext *)arg4;
- (struct TSCEGrid)flattenedGridNoThrow:(struct TSCEGridAccessContext *)arg1;
- (struct TSCEGrid)flattenedGrid:(struct TSCEGridAccessContext *)arg1;
- (struct TSCEValue)valueAtIndex:(unsigned long long)arg1 accessContext:(struct TSCEGridAccessContext *)arg2;
- (struct TSCEValue)valueAtGridCoord:(const struct TSCEGridCoord *)arg1 accessContext:(struct TSCEGridAccessContext *)arg2;
- (struct TSCEReferenceValue)reference:(id)arg1 argIndex:(int)arg2 evaluationContext:(void *)arg3;
- (_Bool)boolean:(id)arg1 argIndex:(int)arg2 evaluationContext:(void *)arg3;
- (id)rawString:(id)arg1 argIndex:(int)arg2 locale:(id)arg3;
- (id)string:(id)arg1 argIndex:(int)arg2 locale:(id)arg3;
- (id)date:(id)arg1 argIndex:(int)arg2 evaluationContext:(void *)arg3;
- (struct TSCENumberValue)number:(id)arg1 argIndex:(int)arg2 evaluationContext:(void *)arg3;
- (struct TSCEValue)value;
- (BOOL)deepType:(void *)arg1;
- (BOOL)nativeType;
- (struct TSCEGridDimensions)dimensions;
- (BOOL)gridKind;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValues:(const void *)arg1 gridKind:(BOOL)arg2 isFlattened:(_Bool)arg3 dimensions:(const struct TSCEGridDimensions *)arg4;
- (id)initWithValues:(const void *)arg1 gridKind:(BOOL)arg2 isFlattened:(_Bool)arg3;
- (id)initWithValues:(const void *)arg1 gridKind:(BOOL)arg2;
- (id)initWithValues:(const void *)arg1;
- (id)initWithValueGrid:(id)arg1;

@end
