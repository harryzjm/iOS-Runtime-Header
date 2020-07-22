//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterInput, AVAssetWriterInputGroupInternal, NSArray;

@interface AVAssetWriterInputGroup
{
    AVAssetWriterInputGroupInternal *_internal;
}

+ (id)assetWriterInputGroupWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3;
+ (id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
@property(readonly, nonatomic) NSArray *provisionalInputs;
- (id)initWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3;
- (id)options;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
- (void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
@property(readonly, nonatomic) AVAssetWriterInput *defaultInput;
@property(readonly, nonatomic) NSArray *inputs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithInputs:(id)arg1 defaultInput:(id)arg2;
- (id)init;

@end

