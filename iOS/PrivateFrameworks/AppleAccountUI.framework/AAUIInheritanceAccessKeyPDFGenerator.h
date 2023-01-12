//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAInheritanceContactController, NSString;

@interface AAUIInheritanceAccessKeyPDFGenerator : NSObject
{
    NSString *_ownerDisplayName;
    NSString *_ownerFirstName;
    NSString *_ownerEmailAddress;
    NSString *_contactDisplayName;
    AAInheritanceContactController *_contactController;
}

- (void).cxx_destruct;
- (void)_renderFooterWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;
- (void)_renderAccessKeyWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;
- (double)_renderQRCodeImageWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;
- (double)_renderRectBoxWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2 drawContext:(struct CGContext *)arg3;
- (double)_renderMessageWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;
- (id)_attributedStringWithField:(id)arg1 value:(id)arg2;
- (double)_renderAccountDetailsWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;
- (double)_renderTitleWithPageRect:(struct CGRect)arg1;
- (void)_renderLogoImageWithPageRect:(struct CGRect)arg1;
- (id)_pdfMetaData;
- (id)createPDFDocumentData;
- (id)initWithAppleAccount:(id)arg1 localContactInfo:(id)arg2;

@end
