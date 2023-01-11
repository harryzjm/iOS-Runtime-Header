//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_nw_advertise_descriptor;

@interface NWAdvertiseDescriptor : NSObject
{
    NSObject<OS_nw_advertise_descriptor> *_internalDescriptor;
}

@property(retain, nonatomic) NSObject<OS_nw_advertise_descriptor> *internalDescriptor; // @synthesize internalDescriptor=_internalDescriptor;
- (void).cxx_destruct;
- (id)privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDescriptor:(id)arg1;
@property(readonly, nonatomic) NSString *bonjourServiceName;
@property(readonly, nonatomic) NSString *bonjourServiceType;
@property(readonly, nonatomic) NSString *bonjourServiceDomain;
- (id)initWithName:(id)arg1 type:(id)arg2 domain:(id)arg3;

@end
