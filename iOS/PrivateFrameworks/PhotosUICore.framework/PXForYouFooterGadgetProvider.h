//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXForYouFooterGadgetProvider
{
    _Bool _attemptedToGenerateGadgets;
    long long _footerState;
}

@property(nonatomic) _Bool attemptedToGenerateGadgets; // @synthesize attemptedToGenerateGadgets=_attemptedToGenerateGadgets;
@property(nonatomic) long long footerState; // @synthesize footerState=_footerState;
- (void)_generateFooterGadget;
- (void)_handleSceneProgressCompletionWithCountDictionary:(id)arg1;
- (void)_handleFaceProgressCompletionWithCountDictionary:(id)arg1;
- (_Bool)_didProcessContentOvernight;
- (id)_peaceMemoryFetchOptions;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;

@end

