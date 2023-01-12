//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSString, PXAssistantStepContext, PXAssistantTraitCollection;

@protocol PXAssistantContext <NSObject>
- (PXAssistantStepContext *)stepContextForStepContextIdentifier:(NSString *)arg1;
- (NSArray *)initialStepContextIdentifiers;
- (NSString *)nextStepContextIdentifierFromStepContextIdentifier:(NSString *)arg1;

@optional
- (void)willCancelAssistant;
- (void)stepContextWithIdentifier:(NSString *)arg1 confirmCancellationWithAlertProperties:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, unsigned long long))arg2;
- (_Bool)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(NSString *)arg1;
- (void)setAssistantTraitCollection:(PXAssistantTraitCollection *)arg1;
@end

