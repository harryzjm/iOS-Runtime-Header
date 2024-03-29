//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface JEHashTreatmentAction
{
    NSString *_namespace;
    NSDictionary *_configuration;
    NSString *_topic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSString *namespace; // @synthesize namespace=_namespace;
- (id)initWithField:(id)arg1 configuration:(id)arg2;
- (id)performAction:(id)arg1 context:(id)arg2;
- (id)hashOf:(id)arg1 userId:(id)arg2;
- (id)initWithField:(id)arg1 configuration:(id)arg2 topic:(id)arg3;

@end

