//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MPSGraphSparseTensorOp
{
    unsigned int _dataType;
    NSArray *_shape;
    unsigned long long _sparseStorageType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long sparseStorageType; // @synthesize sparseStorageType=_sparseStorageType;
@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSArray *shape; // @synthesize shape=_shape;
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;
- (id)initWithGraph:(id)arg1 sparseStorageType:(unsigned long long)arg2 inputTensors:(id)arg3 shape:(id)arg4 dataType:(unsigned int)arg5 name:(id)arg6;

@end
