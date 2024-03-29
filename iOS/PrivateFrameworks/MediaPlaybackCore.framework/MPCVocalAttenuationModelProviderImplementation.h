//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCVocalAttenuationModel, NSError, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCVocalAttenuationModelProviderImplementation : NSObject
{
    NSObject<OS_dispatch_queue> *_creationQueue;
    MPCVocalAttenuationModel *_model;
    long long _state;
    NSError *_loadingError;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) MPCVocalAttenuationModel *model; // @synthesize model=_model;
- (_Bool)isValidEspressoFile:(id)arg1;
- (_Bool)isValidPlistModelFile:(id)arg1;
- (_Bool)isValidModelFile:(id)arg1;
- (id)modelFileExtensions;
- (_Bool)moveModelFromURL:(id)arg1 toURL:(id)arg2;
- (void)purgeSideLoadedModelDirectoriesAtURL:(id)arg1;
- (void)purgeModelAtURL:(id)arg1;
- (_Bool)validateModelAtURL:(id)arg1;
- (id)directoriesAtURL:(id)arg1;
- (id)latestModelDirectoryAtURL:(id)arg1;
- (id)baseModelDirectoryURL;
- (id)baseDirectoryURL;
- (id)remoteModelDirectoryURL;
- (id)bundleModelDirectoryURL;
- (id)_setupPaths;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *modelName;
@property(readonly, copy, nonatomic) NSString *basePath;
@property(readonly, copy, nonatomic) NSString *plistPath;
- (id)init;

@end

