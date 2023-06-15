//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDWidgetFetchSpecification : HMFObject
{
    NSString *_name;
    NSSet *_serviceTypes;
    NSSet *_associatedServiceTypes;
    NSSet *_characteristicTypes;
    NSSet *_affectedWidgetKinds;
}

+ (id)mainHomeInteractiveFetchSpecifications;
+ (id)allOtherHomesSingleAccessorySecurityFetchSpecifications;
+ (id)mainHomeSecurityFetchSpecifications;
+ (id)lightsFetchSpecifications;
+ (id)allHomeWidgetKinds;
- (void).cxx_destruct;
@property(readonly, copy) NSSet *affectedWidgetKinds; // @synthesize affectedWidgetKinds=_affectedWidgetKinds;
@property(readonly, copy) NSSet *characteristicTypes; // @synthesize characteristicTypes=_characteristicTypes;
@property(readonly, copy) NSSet *associatedServiceTypes; // @synthesize associatedServiceTypes=_associatedServiceTypes;
@property(readonly, copy) NSSet *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)attributeDescriptions;
- (id)initWithName:(id)arg1 serviceTypes:(id)arg2 associatedServiceTypes:(id)arg3 characteristicTypes:(id)arg4 affectedWidgetKinds:(id)arg5;

@end

