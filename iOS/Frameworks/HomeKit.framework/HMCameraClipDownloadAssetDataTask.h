//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableURLRequest;
@protocol HMCameraClipDownloadAssetDataTaskHandling;

@interface HMCameraClipDownloadAssetDataTask : NSObject
{
    NSMutableURLRequest *_urlRequest;
    id <HMCameraClipDownloadAssetDataTaskHandling> _handler;
}

- (void).cxx_destruct;
@property(readonly) id <HMCameraClipDownloadAssetDataTaskHandling> handler; // @synthesize handler=_handler;
@property(readonly) NSMutableURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
- (id)downloadDataForByteRange:(struct _NSRange)arg1;
- (id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2 handler:(id)arg3;
- (id)initWithURL:(id)arg1 httpHeaderFields:(id)arg2;

@end
