//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, NSMutableSet, NSURL;
@protocol AMSBagProtocol;

@interface AMSOpenURL : NSObject
{
    NSMutableSet *_attemptedTargets;
    NSURL *_URL;
    AMSProcessInfo *_clientInfo;
    id <AMSBagProtocol> _bag;
}

+ (id)_sortedTargets;
+ (id)_modifiedURLFromURL:(id)arg1 bundleInfo:(id)arg2;
+ (id)openURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;
+ (void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3;
+ (_Bool)openStandardURL:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableSet *attemptedTargets; // @synthesize attemptedTargets=_attemptedTargets;
- (_Bool)_shouldOpenURL:(id)arg1;
- (_Bool)_openURL:(id)arg1 bundleInfo:(id)arg2;
- (id)_performOpen;
- (id)initWithURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;

@end
