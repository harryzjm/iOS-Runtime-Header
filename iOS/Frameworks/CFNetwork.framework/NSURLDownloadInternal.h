//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSURLAuthenticationChallenge;

@interface NSURLDownloadInternal : NSObject
{
    struct _CFURLDownload *cfDownload;
    struct _CFURLAuthChallenge *currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    id delegate;
    _Bool downloadActive;
    NSOperationQueue *_targetQueue;
}

- (void)dealloc;

@end
