//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLEngineStore, CPLPlatformObject, NSString;

@interface CPLEngineStorage : NSObject <CPLAbstractObject>
{
    _Bool _superWasCalled;
    CPLPlatformObject *_platformObject;
    CPLEngineStore *_engineStore;
    NSString *_name;
}

+ (id)platformImplementationProtocol;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CPLEngineStore *engineStore; // @synthesize engineStore=_engineStore;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void).cxx_destruct;
- (_Bool)_checkSuperWasCalled;
- (id)statusDictionary;
- (id)status;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)openWithError:(id *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
