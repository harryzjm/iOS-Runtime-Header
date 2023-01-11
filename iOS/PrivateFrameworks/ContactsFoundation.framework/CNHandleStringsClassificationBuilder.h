//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject
{
    NSMutableArray *_emailAddresses;
    NSMutableArray *_phoneNumbers;
    NSMutableArray *_unknown;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *unknown; // @synthesize unknown=_unknown;
@property(retain, nonatomic) NSMutableArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(retain, nonatomic) NSMutableArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void)addUnknown:(id)arg1;
- (void)addPhoneNumber:(id)arg1;
- (void)addEmailAddress:(id)arg1;
- (id)build;
- (id)init;

@end
