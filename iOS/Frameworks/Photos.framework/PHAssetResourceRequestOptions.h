//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@interface PHAssetResourceRequestOptions : NSObject <NSCopying>
{
    _Bool _networkAccessAllowed;
    _Bool _resistentToPrune;
    _Bool _downloadIsTransient;
    CDUnknownBlockType _progressHandler;
}

@property(nonatomic) _Bool downloadIsTransient; // @synthesize downloadIsTransient=_downloadIsTransient;
@property(nonatomic) _Bool resistentToPrune; // @synthesize resistentToPrune=_resistentToPrune;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

