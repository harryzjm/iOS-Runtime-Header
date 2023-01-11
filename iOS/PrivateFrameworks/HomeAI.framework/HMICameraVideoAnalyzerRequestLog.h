//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMICameraVideoAnalyzerRequest, NSString;

__attribute__((visibility("hidden")))
@interface HMICameraVideoAnalyzerRequestLog : HMFObject <HMFLogging>
{
    HMICameraVideoAnalyzerRequest *_request;
}

+ (id)logCategory;
@property(readonly) __weak HMICameraVideoAnalyzerRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)stringWithFormat:(id)arg1;
- (void)debug:(id)arg1;
- (void)info:(id)arg1;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
