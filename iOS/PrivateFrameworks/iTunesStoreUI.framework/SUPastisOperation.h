//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class AVAssetResourceLoadingRequest, NSURL;

@interface SUPastisOperation : ISOperation
{
    NSURL *_certificateUrl;
    NSURL *_keyUrl;
    AVAssetResourceLoadingRequest *_loadingRequest;
}

@property(retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(retain, nonatomic) NSURL *keyURL; // @synthesize keyURL=_keyUrl;
@property(retain, nonatomic) NSURL *certificateURL; // @synthesize certificateURL=_certificateUrl;
- (id)_getCKCForSPC:(id)arg1 URI:(id)arg2 error:(id *)arg3;
- (id)_getURIWithError:(id *)arg1;
- (id)_getAppCertWithError:(id *)arg1;
- (void)run;
- (void)dealloc;

@end
