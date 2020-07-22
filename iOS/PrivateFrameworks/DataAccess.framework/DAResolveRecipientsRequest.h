//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject
{
    _Bool _retrieveCertificates;
    _Bool _retrieveAvailablilty;
    NSArray *_emailAddresses;
    NSDate *_startTime;
    NSDate *_endTime;
}

@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool retrieveAvailablilty; // @synthesize retrieveAvailablilty=_retrieveAvailablilty;
@property(nonatomic) _Bool retrieveCertificates; // @synthesize retrieveCertificates=_retrieveCertificates;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(_Bool)arg2 retrieveAvailability:(_Bool)arg3 withStartTime:(id)arg4 endTime:(id)arg5;
- (id)initWithEmailAddresses:(id)arg1;

@end

