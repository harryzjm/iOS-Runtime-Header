//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, _UIAssetManager;

@interface SCUIAssetProvider : NSObject
{
    NSURL *_bundleURL;
    _UIAssetManager *_assetManager;
}

- (void).cxx_destruct;
- (id)_assetManager;
- (id)imageNamed:(id)arg1;
- (id)initWithBundleURL:(id)arg1;

@end

