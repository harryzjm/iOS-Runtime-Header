//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKJSRWIDependencyDomain, NSArray, NSString;

@interface IKJSRWIDependencyDomainEvent : NSObject
{
    NSString *_name;
    NSString *_purpose;
    IKJSRWIDependencyDomain *_domain;
    NSArray *_params;
}

@property(readonly, nonatomic) NSArray *params; // @synthesize params=_params;
@property(readonly, nonatomic) __weak IKJSRWIDependencyDomain *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *purpose; // @synthesize purpose=_purpose;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isValidWithError:(id *)arg1;
- (id)eventImplementationStringWithSoftLinking:(_Bool)arg1;
- (id)_eventInterfaceStringForImplementation:(_Bool)arg1;
- (id)eventInterfaceString;
- (id)selectorString;
- (id)initWithEventDictionary:(id)arg1 forDomain:(id)arg2;

@end
