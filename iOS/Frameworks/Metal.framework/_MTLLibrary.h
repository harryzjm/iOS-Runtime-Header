//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Metal/MTLLibrarySPI-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol MTLDevice;

@interface _MTLLibrary : NSObject <MTLLibrarySPI>
{
    NSString *_label;
    id <MTLDevice> _device;
    NSArray *_functionNames;
    NSArray *_externFunctionNames;
    struct MTLLibraryData *_libraryData;
    NSMutableDictionary *_functionDictionary;
    struct MTLLibraryContainer *_cacheEntry;
    struct MTLPipelineCollection *_pipelineCollection;
}

@property struct MTLPipelineCollection *pipelineCollection; // @synthesize pipelineCollection=_pipelineCollection;
@property(readonly, retain, nonatomic) NSMutableDictionary *functionDictionary; // @synthesize functionDictionary=_functionDictionary;
@property(readonly) struct MTLLibraryData *libraryData; // @synthesize libraryData=_libraryData;
@property(readonly, retain) NSArray *functionNames; // @synthesize functionNames=_functionNames;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithLibraryContainer:(struct MTLLibraryContainer *)arg1 device:(id)arg2;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id *)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id *)arg4;
- (id)newFunctionWithName:(id)arg1;
- (id)newExternFunctionWithName:(id)arg1;
- (id)newFunctionWithNameInternal:(id)arg1;
@property(readonly, retain) NSArray *externFunctionNames; // @synthesize externFunctionNames=_externFunctionNames;
@property(copy) NSString *overrideTriple; // @dynamic overrideTriple;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

