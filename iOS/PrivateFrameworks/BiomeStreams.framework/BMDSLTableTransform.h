//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeDSL/BMDSLBaseCodable.h>

@class BMTableSchema, NSString;
@protocol BMDSLRowTransform;

@interface BMDSLTableTransform : BMDSLBaseCodable
{
    id <BMDSLRowTransform> _rowTransform;
    BMTableSchema *_schema;
    NSString *_tableName;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) BMTableSchema *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) id <BMDSLRowTransform> rowTransform; // @synthesize rowTransform=_rowTransform;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRowTransform:(id)arg1 schema:(id)arg2 tableName:(id)arg3;
- (id)initWithRowTransform:(id)arg1 schema:(id)arg2 tableName:(id)arg3 name:(id)arg4 version:(unsigned int)arg5;

@end
