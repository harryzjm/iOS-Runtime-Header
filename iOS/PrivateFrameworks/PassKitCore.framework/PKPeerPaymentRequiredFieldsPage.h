//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PKPeerPaymentRequiredFieldsPage : NSObject
{
    NSArray *_requiredFields;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSArray *requiredFields; // @synthesize requiredFields=_requiredFields;
- (id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2;

@end
