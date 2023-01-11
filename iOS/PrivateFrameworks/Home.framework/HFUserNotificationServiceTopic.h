//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSSet, NSString;
@protocol HFIconDescriptor;

@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable>
{
    NSSet *_serviceTypes;
    NSSet *_accessoryCategoryTypes;
    NSString *_topicName;
    id <HFIconDescriptor> _iconDescriptor;
}

+ (id)_cameraTopic;
+ (id)na_identity;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(readonly, copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(readonly, copy, nonatomic) NSSet *accessoryCategoryTypes; // @synthesize accessoryCategoryTypes=_accessoryCategoryTypes;
@property(readonly, copy, nonatomic) NSSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithServiceTypes:(id)arg1 accessoryCategoryTypes:(id)arg2 topicName:(id)arg3 iconDescriptor:(id)arg4;
- (id)initWithServiceType:(id)arg1 topicName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
