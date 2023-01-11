//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _dataActive;
    _Bool _isDataAttached;
    _Bool _activationForMms;
    NSNumber *_pdpContextId;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool activationForMms; // @synthesize activationForMms=_activationForMms;
@property(nonatomic) _Bool isDataAttached; // @synthesize isDataAttached=_isDataAttached;
@property(nonatomic) _Bool dataActive; // @synthesize dataActive=_dataActive;
@property(retain, nonatomic) NSNumber *pdpContextId; // @synthesize pdpContextId=_pdpContextId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToCTMmsRegistrationFailureInfoType:(id)arg1;
- (id)init;

@end
