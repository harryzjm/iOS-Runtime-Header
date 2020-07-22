//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAResponse.h>

@class NSData, NSString, NSValue;

@interface AAUIPhotoResponse : AAResponse
{
    NSData *_photoData;
    NSValue *_cropRect;
    NSString *_serverCacheTag;
}

@property(readonly, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
@property(readonly, nonatomic) NSValue *cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) NSData *photoData; // @synthesize photoData=_photoData;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
