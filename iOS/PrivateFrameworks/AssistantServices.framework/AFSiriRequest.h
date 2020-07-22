//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface AFSiriRequest : NSObject <NSSecureCoding>
{
    NSString *_originatingAceID;
    NSUUID *_identifier;
    NSString *__refId;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic, setter=_setRefId:) NSString *_refId; // @synthesize _refId=__refId;
@property(copy, nonatomic, setter=_setOriginatingAceID:) NSString *_originatingAceID; // @synthesize _originatingAceID;
- (void).cxx_destruct;
- (_Bool)_makeAppFrontmost;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_identifier;
- (id)requestName;
- (id)_descriptionWithProperties:(id)arg1;
- (id)description;
- (id)init;
- (id)_initWithOriginatingAceID:(id)arg1;
- (id)_initWithOriginatingAceID:(id)arg1 identifier:(id)arg2;
- (id)_af_analyticsContextDescription;

@end

