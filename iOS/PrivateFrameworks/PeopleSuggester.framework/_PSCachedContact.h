//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSDate;

@interface _PSCachedContact : NSObject
{
    NSDate *_expirationDate;
    CNContact *_contact;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithExpirationDate:(id)arg1 contact:(id)arg2;

@end
