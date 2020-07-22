//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray;

@interface PHLivePhotoCreationOperation : NSOperation
{
    long long _contentMode;
    NSArray *_resourceURLs;
    CDUnknownBlockType _resultHandler;
    struct CGSize _targetSize;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, copy, nonatomic) NSArray *resourceURLs; // @synthesize resourceURLs=_resourceURLs;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (void).cxx_destruct;
- (id)_createImageOnlyLivePhotoWithImageURL:(id)arg1;
- (void)main;
- (id)initWithResourceURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 resultHandler:(CDUnknownBlockType)arg4;

@end

