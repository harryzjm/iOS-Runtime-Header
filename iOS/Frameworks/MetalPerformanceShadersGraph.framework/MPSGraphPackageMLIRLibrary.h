//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphObject.h"

@class NSMutableDictionary;

@interface MPSGraphPackageMLIRLibrary : MPSGraphObject
{
    NSMutableDictionary *_mlirLibrary;
}

- (void).cxx_destruct;
- (void)addOptimizedNoDeviceMLIRFile:(id)arg1 withSignature:(id)arg2;
- (void)addOptimizedMLIRFile:(id)arg1 withSignature:(id)arg2;
- (void)addOriginalMLIRFile:(id)arg1;
- (id)getDict;
- (void)updateWithMLIRLibrary:(id)arg1;
- (id)getOptimizedNoDeviceMLIRLibrary;
- (id)getOptimizedMLIRLibrary;
- (id)initWithMLIRLibraryDict:(id)arg1;
- (id)init;

@end

