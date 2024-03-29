//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CNContactPhoneNumberEquivalence : NSObject
{
    NSString *_rawString;
    struct {
        char *_field1;
        char *_field2;
        char *_field3;
        unsigned int _field4;
        char *_field5;
        unsigned int _field6;
        char *_field7;
        unsigned int _field8;
    } *_decomposedRepresentation;
    char *_decomposedNumberDigits;
}

+ (id)indexKeyForString:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isPhoneNumberEquivalent:(id)arg1 strict:(_Bool *)arg2;
- (_Bool)preparePhoneNumberRepresentation;
- (_Bool)isRawStringEquivalent:(id)arg1;
- (_Bool)isEquivalentToString:(id)arg1 strict:(_Bool *)arg2;
- (void)dealloc;
- (id)initWithPhoneNumberString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

