//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject
{
    id _internal;
}

+ (void)deleteContentForProductID:(id)arg1;
+ (id)contentURLForProductID:(id)arg1;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)_setVersion:(id)arg1;
- (void)_setTransaction:(id)arg1;
- (void)_setTimeRemaining:(double)arg1;
- (void)_setProgress:(float)arg1;
- (void)_setError:(id)arg1;
- (void)_setDownloadState:(long long)arg1;
- (void)_setContentURL:(id)arg1;
- (void)_setContentLength:(id)arg1;
- (void)_setContentIdentifier:(id)arg1;
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
- (void)_applyChangeset:(id)arg1;
@property(readonly, nonatomic) SKPaymentTransaction *transaction;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *contentVersion;
@property(readonly, nonatomic) long long contentLength;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSURL *contentURL;
@property(readonly, nonatomic) long long downloadState;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) NSString *contentIdentifier;
- (id)init;

@end

