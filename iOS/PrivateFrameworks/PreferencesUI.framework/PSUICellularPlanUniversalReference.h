//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PreferencesUI/NSCoding-Protocol.h>
#import <PreferencesUI/NSCopying-Protocol.h>

@class NSString;

@interface PSUICellularPlanUniversalReference : NSObject <NSCopying, NSCoding>
{
    NSString *_iccid;
}

+ (id)referenceFromDanglingPlanItem:(id)arg1;
+ (id)referenceFromPlanItem:(id)arg1;
@property(retain, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIccid:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
