//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;

@interface PKRemoteAssetManifest : NSObject
{
    NSURL *_fileURL;
    NSURL *_passURL;
    NSMutableDictionary *_remoteAssets;
}

+ (Class)_remoteAssestManifestItemClassWithValues:(id)arg1;
@property(readonly, nonatomic) NSDictionary *remoteAssets; // @synthesize remoteAssets=_remoteAssets;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)deviceSpecificAsset;
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id *)arg3;

@end

