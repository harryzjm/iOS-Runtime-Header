//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol NSCoding;

@interface ENSSKeychainQuery : NSObject
{
    NSString *_account;
    NSString *_service;
    NSString *_label;
    NSData *_passwordData;
    NSString *_accessGroup;
    unsigned long long _synchronizationMode;
}

+ (id)errorWithCode:(int)arg1;
+ (_Bool)isSynchronizationAvailable;
@property(nonatomic) unsigned long long synchronizationMode; // @synthesize synchronizationMode=_synchronizationMode;
@property(copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(copy, nonatomic) NSData *passwordData; // @synthesize passwordData=_passwordData;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)query;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) id <NSCoding> passwordObject;
- (_Bool)fetch:(id *)arg1;
- (id)fetchAll:(id *)arg1;
- (_Bool)deleteItem:(id *)arg1;
- (_Bool)save:(id *)arg1;

@end
