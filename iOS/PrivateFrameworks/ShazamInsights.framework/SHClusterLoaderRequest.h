//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, SKCloudServiceController;

__attribute__((visibility("hidden")))
@interface SHClusterLoaderRequest : NSObject
{
    SKCloudServiceController *_cloudServiceController;
    NSURL *_sourceURL;
    NSURL *_outputURL;
    long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) SKCloudServiceController *cloudServiceController; // @synthesize cloudServiceController=_cloudServiceController;
- (void)clusterConfiguration:(CDUnknownBlockType)arg1;
- (void)sourceURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)URLForRequestForStorefront:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool shouldDeleteExistingDatabaseAtOutputURL;
- (id)initWithType:(long long)arg1 sourceURL:(id)arg2 outputURL:(id)arg3;
- (id)initWithType:(long long)arg1;

@end

