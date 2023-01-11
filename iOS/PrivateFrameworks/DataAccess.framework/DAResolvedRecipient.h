//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface DAResolvedRecipient : NSObject
{
    long long _status;
    long long _certificatesStatus;
    long long _availabilityStatus;
    NSString *_mergedFreeBusy;
    NSMutableDictionary *_mResolvedEmailToX509Certs;
}

@property(retain, nonatomic) NSMutableDictionary *mResolvedEmailToX509Certs; // @synthesize mResolvedEmailToX509Certs=_mResolvedEmailToX509Certs;
@property(retain, nonatomic) NSString *mergedFreeBusy; // @synthesize mergedFreeBusy=_mergedFreeBusy;
@property(nonatomic) long long availabilityStatus; // @synthesize availabilityStatus=_availabilityStatus;
@property(nonatomic) long long certificatesStatus; // @synthesize certificatesStatus=_certificatesStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)addCert:(id)arg1 forEmailAddress:(id)arg2;
- (id)description;
@property(readonly, nonatomic) NSDictionary *resolvedEmailToX509Certs;

@end

