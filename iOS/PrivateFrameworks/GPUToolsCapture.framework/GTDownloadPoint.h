//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTDownloadContext;
@protocol MTLCommandQueue, MTLSharedEvent;

@interface GTDownloadPoint : NSObject
{
    GTDownloadContext *_downloadContext;
    unsigned long long downloadValue;
    id <MTLSharedEvent> downloadEvent;
    id <MTLCommandQueue> _downloadQueue;
    unsigned long long waitValue;
    id <MTLSharedEvent> waitEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MTLSharedEvent> waitEvent; // @synthesize waitEvent;
@property(nonatomic) unsigned long long waitValue; // @synthesize waitValue;
@property(retain, nonatomic) id <MTLCommandQueue> downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) id <MTLSharedEvent> downloadEvent; // @synthesize downloadEvent;
@property(nonatomic) unsigned long long downloadValue; // @synthesize downloadValue;
@property(readonly, nonatomic) GTDownloadContext *downloadContext; // @synthesize downloadContext=_downloadContext;
- (void)createContext:(struct apr_array_header_t *)arg1;

@end

