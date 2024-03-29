//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCoder, NSError, NSString, NSUUID;
@protocol NSObject><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _EXItemProviderItem : NSObject
{
    NSString *_typeIdentifier;
    NSUUID *_payloadIdentifier;
    NSError *_error;
    id <NSObject><NSSecureCoding> _payload;
    NSCoder *_encodedPayload;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSCoder *encodedPayload; // @synthesize encodedPayload=_encodedPayload;
@property(readonly) id <NSObject><NSSecureCoding> payload; // @synthesize payload=_payload;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSUUID *payloadIdentifier; // @synthesize payloadIdentifier=_payloadIdentifier;
@property(readonly) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (id)payloadOfClasses:(id)arg1;
- (id)payloadOfClass:(Class)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1 error:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1 payload:(id)arg2;

@end

