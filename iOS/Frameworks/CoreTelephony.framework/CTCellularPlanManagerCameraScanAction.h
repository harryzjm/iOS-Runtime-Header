//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTCellularPlanManagerCameraScanAction : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    NSString *_message;
    NSString *_smdpAddress;
    NSString *_matchingId;
    NSString *_OID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *OID; // @synthesize OID=_OID;
@property(retain, nonatomic) NSString *matchingId; // @synthesize matchingId=_matchingId;
@property(retain, nonatomic) NSString *smdpAddress; // @synthesize smdpAddress=_smdpAddress;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;

@end
