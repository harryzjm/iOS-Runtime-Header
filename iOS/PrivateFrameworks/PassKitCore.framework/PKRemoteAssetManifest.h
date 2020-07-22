//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface PKRemoteAssetManifest : NSObject
{
    NSURL *_fileURL;
    NSMutableDictionary *_remoteAssets;
    NSString *_name;
}

@property(readonly, nonatomic) NSDictionary *remoteAssets; // @synthesize remoteAssets=_remoteAssets;
@property(readonly, nonatomic) __weak NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)deviceSpecificAsset;
- (id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id *)arg3;

@end
