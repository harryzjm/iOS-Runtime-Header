//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURLCredential;

@interface _DVTDeveloperPortalServiceConnectionSessionDelegate : NSObject
{
    NSURLCredential *_credential;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCredential:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

