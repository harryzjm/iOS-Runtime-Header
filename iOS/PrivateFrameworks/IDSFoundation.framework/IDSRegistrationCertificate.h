//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSServerCertificate, NSData;

@interface IDSRegistrationCertificate : NSObject
{
    IDSServerCertificate *_backingCertificate;
}

@property(readonly, nonatomic) IDSServerCertificate *backingCertificate; // @synthesize backingCertificate=_backingCertificate;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)initWithBackingCertificate:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;

@end

