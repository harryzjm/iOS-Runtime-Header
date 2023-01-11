//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString;
@protocol HMIVideoPackageAnalyzerDelegate;

@interface HMIVideoPackageAnalyzer <HMFLogging>
{
    id <HMIVideoPackageAnalyzerDelegate> _delegate;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property __weak id <HMIVideoPackageAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
