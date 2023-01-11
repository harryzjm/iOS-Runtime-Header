//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLDevice;

@interface MPSMatrix : NSObject
{
    struct MPSDevice *_device;
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _matrices;
    unsigned long long _rowBytes;
    unsigned long long _matrixBytes;
    unsigned long long _offset;
    unsigned int _dataType;
    struct MPSAutoBuffer _buffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned long long matrixBytes; // @synthesize matrixBytes=_matrixBytes;
@property(readonly, nonatomic) unsigned long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(readonly, nonatomic) unsigned long long matrices; // @synthesize matrices=_matrices;
@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned long long rows; // @synthesize rows=_rows;
- (id)ndArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3;
- (_Bool)doesAliasWithNDArray:(id)arg1;
- (_Bool)canAliasWithNDArrayDescriptor:(id)arg1;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)debugDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) id <MTLBuffer> data;
- (unsigned long long)resourceSize;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2;
- (id)initPrivateWithDescriptor:(id)arg1 device:(struct MPSDevice *)arg2;
- (id)init;
@property(readonly, retain, nonatomic) id <MTLDevice> device;

@end
