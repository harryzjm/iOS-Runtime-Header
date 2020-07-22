//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNFoundationUserDefaults-Protocol.h>

@class CNUserDefaults, NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>
{
    CNUserDefaults *_userDefaults;
}

+ (unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1;
+ (id)sharedDefaults;
+ (id)registeredDefaults;
+ (id)makeRegisteredDefaults;
@property(retain) CNUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic, getter=isShortNameFormatEnabled) _Bool shortNameFormatEnabled;
@property unsigned long long shortNameFormat;
@property _Bool preferNickname;
@property unsigned long long nameOrder;
- (id)countryCode;
- (unsigned long long)sortOrder;
- (unsigned long long)newContactNameOrder;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
