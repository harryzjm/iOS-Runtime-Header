//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLAssetResolver-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver>
{
    NSURL *_archiveURL;
    NSDictionary *_archiveDictionary;
    NSString *_rootUSDPath;
}

- (void).cxx_destruct;
- (id)resolveInsideArchiveWithAssetNamed:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (id)firstAssetPathInArchive;
- (_Bool)canResolveAssetNamed:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

