//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, VUIAppContext;

__attribute__((visibility("hidden")))
@interface VUIActionPromise
{
    NSDictionary *_contextDataDictionary;
    VUIAppContext *_appContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, nonatomic) NSDictionary *contextDataDictionary; // @synthesize contextDataDictionary=_contextDataDictionary;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;

@end

