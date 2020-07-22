//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface TSCEWrappedCellRef : NSObject <NSCopying>
{
    struct TSCECellRef _cellRef;
}

+ (id)invalidCellRef;
@property(readonly, nonatomic) struct TSCECellRef cellRef; // @synthesize cellRef=_cellRef;
- (id).cxx_construct;
- (_Bool)isValid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct TSUCellCoord coordinate;
@property(readonly, retain, nonatomic) NSUUID *tableID;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCellCoord:(struct TSUCellCoord)arg1 tableID:(id)arg2;
- (id)initWithCellCoord:(struct TSUCellCoord)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (id)initWithCellRef:(const struct TSCECellRef *)arg1;
- (id)init;

@end
