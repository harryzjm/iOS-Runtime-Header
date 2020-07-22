//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WBSFormAutoFillClassificationToCorrectionsTransformer, WBSFormMetadata;
@protocol WBSFormFieldClassificationCorrectorDelegate;

@interface WBSFormFieldClassificationCorrector : NSObject
{
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    id <WBSFormFieldClassificationCorrectorDelegate> _delegate;
    NSString *_domain;
    WBSFormMetadata *_formMetadata;
    NSDictionary *_formValues;
}

@property(readonly, copy, nonatomic) NSDictionary *formValues; // @synthesize formValues=_formValues;
@property(readonly, copy, nonatomic) WBSFormMetadata *formMetadata; // @synthesize formMetadata=_formMetadata;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) __weak id <WBSFormFieldClassificationCorrectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_classificationCorrectionsForControlWithMetadata:(id)arg1 wasIdentifiedAsAddressBookField:(_Bool *)arg2;
- (void)processCorrections;
- (id)init;
- (id)initWithDomain:(id)arg1 formMetadata:(id)arg2 formValues:(id)arg3;

@end

