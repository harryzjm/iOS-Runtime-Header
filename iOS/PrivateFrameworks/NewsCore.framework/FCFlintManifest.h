//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAssetHandle, NSArray;

@interface FCFlintManifest : NSObject
{
    FCAssetHandle *_mainDocumentAssetHandle;
    NSArray *_fontResourceIDs;
}

@property(readonly, nonatomic) NSArray *fontResourceIDs; // @synthesize fontResourceIDs=_fontResourceIDs;
@property(readonly, nonatomic) FCAssetHandle *mainDocumentAssetHandle; // @synthesize mainDocumentAssetHandle=_mainDocumentAssetHandle;
- (void).cxx_destruct;
- (id)initWithMainDocumentAssetHandle:(id)arg1 fontResourceIDs:(id)arg2;

@end
