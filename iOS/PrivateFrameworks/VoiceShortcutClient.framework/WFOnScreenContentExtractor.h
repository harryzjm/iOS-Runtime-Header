//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WFOnScreenContentExtractor : NSObject
{
    long long _applicationLevel;
    struct CGRect _applicationFrame;
}

@property(nonatomic) long long applicationLevel; // @synthesize applicationLevel=_applicationLevel;
@property(nonatomic) struct CGRect applicationFrame; // @synthesize applicationFrame=_applicationFrame;
- (id)nodeWithItem:(id)arg1 file:(id)arg2;
- (id)responseWithError:(id)arg1;
- (id)activityItemsConfigurationFromScene:(id)arg1;
- (void)loadActivityItemsConfigurationItemsForScene:(id)arg1 serviceOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
