//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSParsedDataPrivate-Protocol.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface BCSContactData : NSObject <BCSParsedDataPrivate>
{
    CNContact *_contact;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, nonatomic) long long type;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

