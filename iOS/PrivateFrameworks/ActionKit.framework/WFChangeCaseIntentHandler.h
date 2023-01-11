//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/WFChangeCaseIntentHandling-Protocol.h>

@class NSString;

@interface WFChangeCaseIntentHandler : NSObject <WFChangeCaseIntentHandling>
{
}

- (id)stringByApplyingAlternatingCaseToString:(id)arg1;
- (id)stringByApplyingTitleCaseToString:(id)arg1;
- (id)stringByApplyingSentenceCaseToString:(id)arg1 withLocale:(id)arg2;
- (void)handleChangeCase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTypeForChangeCase:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTextForChangeCase:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
