//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAOBWelcomeControllerModelProtocol-Protocol.h>

@class AACustodianshipInfo, NSString;

@interface AAOBInheritanceShareAccessKeyOptionsModel : NSObject <AAOBWelcomeControllerModelProtocol>
{
    NSString *_beneficiaryName;
    NSString *_imageName;
    NSString *_title;
    NSString *_detailText;
    NSString *_primaryButton;
    NSString *_secondaryButton;
    NSString *_helpLinkTitle;
    NSString *_helpLinkURL;
    NSString *_recipientHandle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *recipientHandle; // @synthesize recipientHandle=_recipientHandle;
@property(copy, nonatomic) NSString *helpLinkURL; // @synthesize helpLinkURL=_helpLinkURL;
@property(copy, nonatomic) NSString *helpLinkTitle; // @synthesize helpLinkTitle=_helpLinkTitle;
@property(copy, nonatomic) NSString *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(copy, nonatomic) NSString *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)detailTextForShareAccessKeyType:(unsigned long long)arg1;
- (id)titleForShareAccessKeyType:(unsigned long long)arg1;
- (void)availableSharingOptionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)availableSharingOptions;
- (id)defaultSharingOptions;
- (id)initWithBeneficiaryName:(id)arg1 handle:(id)arg2;
- (id)initWithBeneficiaryName:(id)arg1;

// Remaining properties
@property(copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *ownerHandle;
@property(readonly) Class superclass;

@end
