//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IKJSObject.h"

@class IKHandle, IKJSDataObservable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _IKJSDataDictionaryExporter : IKJSObject
{
    IKHandle *_dataDictionaryHandle;
    NSMutableArray *_touchedPropertyPaths;
    IKJSDataObservable *_dataObservable;
}

+ (id)_updatedDataDictionaryObject:(id)arg1 fromValue:(id)arg2 forPropertyPaths:(id)arg3 inContext:(id)arg4;
+ (id)_dataDictionaryObjectFromObject:(id)arg1 forAccessorSequence:(id)arg2;
+ (id)_dataDictionaryObjectFromValueRef:(struct OpaqueJSValue *)arg1 inContextRef:(struct OpaqueJSContext *)arg2;
+ (id)_dataDictionaryObjectFromValue:(id)arg1 inContext:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak IKJSDataObservable *dataObservable; // @synthesize dataObservable=_dataObservable;
- (void)touchPropertyPath:(id)arg1;
- (id)dataDictionaryObject;
- (id)initWithAppContext:(id)arg1 dataObservable:(id)arg2;

@end

