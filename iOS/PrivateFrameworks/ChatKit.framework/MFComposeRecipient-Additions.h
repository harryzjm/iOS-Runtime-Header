//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/MFComposeRecipient.h>

@interface MFComposeRecipient (Additions)
- (id)IDSCanonicalAddress;
- (id)canonicalAddress;
- (void)setCanonicalAddress:(id)arg1;
- (id)rawAddress;
- (struct __CFPhoneNumber *)copyPhoneNumber;
- (_Bool)isPhone;
- (_Bool)isEmail;
@end

